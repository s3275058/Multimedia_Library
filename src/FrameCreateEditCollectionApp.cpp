#include "FrameCreateEditCollectionApp.h"

FrameCreateEditCollectionApp::FrameCreateEditCollectionApp(wxWindow* parent, Library * l_val, int collection_id, wxFrame * previous_frame_val) : FrameCreateEditCollection(parent), l(l_val), previous_frame(previous_frame_val)
{
    for (int i = 0; i < COLLECTION_TYPES_SIZE; ++i)
    {
        choice_collection_type->Append(collection_types[i]);
    }

    for (int i = 0; i < DATA_TYPES_SIZE; ++i)
    {
        choice_data_type->Append(data_types[i]);
    }

    for (int i = 0; i < CATEGORIES_SIZE; ++i)
    {
        choice_category->Append(categories[i]);
    }

    if (collection_id != -1)
    {
        for (unsigned int i = 0; i < l->collections->size(); ++i)
        {
            Collection * temp = l->collections->at(i);
            if (* temp == collection_id)
            {
                c = temp;
                break;
            }
        }

        wxString id;
        id << c->getID();
        txt_collection_id->SetLabel(id);

        choice_collection_type->SetSelection(c->getCollectionType());

        choice_data_type->SetSelection(c->getDataType());

        choice_category->SetSelection(c->getCategory());

        wxString year;
        year << c->getYear();

        txt_title->AppendText(wxString(c->getTitle()));

        txt_author->AppendText(wxString(c->getAuthor()));

        txt_version->AppendText(wxString(c->getVersion()));

        txt_publisher->AppendText(wxString(c->getPublisher()));

        wxString duration;
        duration << c->getDuration();
        txt_duration->AppendText(duration);

        if (c->getYear() == 0)
        {
            choice_year->SetString(0, wxString("Before 1990"));
        }
        else
        {
            wxString year;
            year << c->getYear();
            choice_year->SetString(0, year);
        }
        for(unsigned int i = 0; i < l->years_from_1990.size(); ++i)
        {
            ostringstream oss;
            oss << l->years_from_1990.at(i);
            choice_year->Append(oss.str());
        }
        choice_year->Append("Before 1990");
        choice_year->SetSelection(0);
    }
    else
    {
        lbl_collection_id->Hide();
        for(unsigned int i = 0; i < l->years_from_1990.size(); ++i)
        {
            ostringstream oss;
            oss << l->years_from_1990.at(i);
            choice_year->Append(oss.str());
        }
        choice_year->Append("Before 1990");
    }
}

void FrameCreateEditCollectionApp::exit(wxCloseEvent & event)
{
    if (showConfirmDialog(this))
    {
        GetParent()->Close();
    }
}

void FrameCreateEditCollectionApp::btnBackCreateCollectionClicked(wxCommandEvent & event)
{
    switchFrame(this, previous_frame);
}

void FrameCreateEditCollectionApp::btnHomeCreateCollectionClicked(wxCommandEvent & event)
{
    switchFrame(this, GetParent());
}

void FrameCreateEditCollectionApp::btnOKCollectionClicked(wxCommandEvent & event)
{
    int collection_type = choice_collection_type->GetSelection();
    showError(collection_type != 0, lbl_error_collection_type, "Please choose a collection type!");

    int data_type = choice_data_type->GetSelection();
    showError(data_type != 0 ,lbl_error_data_type, "Please choose a data type!");

    string title = txt_title->GetValue().ToStdString();
    showError(strcmp(title.c_str(), "") != 0 ,lbl_error_title, "Please enter the title!");

    string author = txt_author->GetValue().ToStdString();
    showError(strcmp(author.c_str(), "") != 0 ,lbl_error_author, "Please enter the author name!");

    string version = txt_version->GetValue().ToStdString();
    showError(strcmp(version.c_str(), "") != 0, lbl_error_version, "Please enter the version!");

    string publisher = txt_publisher->GetValue().ToStdString();

    showError(strcmp(publisher.c_str(), "") != 0, lbl_error_publisher, "Please enter the publisher!");
    int year_selection = choice_year->GetSelection();
    showError(c != NULL || year_selection != 0, lbl_error_year, "Please choose a year!");

    string duration_string = txt_duration->GetValue().ToStdString();
    showError(strcmp(duration_string.c_str(), "") != 0, lbl_error_duration, "Please enter the duration!");

    int category = choice_category->GetSelection();
    showError(category != 0, lbl_error_category, "Please choose a category");

    if (collection_type != 0 && data_type != 0 && strcmp(title.c_str(), "") != 0 &&
        strcmp(author.c_str(), "") != 0 && strcmp(version.c_str(), "") != 0 &&
        strcmp(publisher.c_str(), "") != 0 && (c != NULL || year_selection != 0) &&
        strcmp(duration_string.c_str(), "") != 0 && category != 0)
    {
        int year_num = 0;
        string year_string = choice_year->GetString(year_selection).ToStdString();
        if (strcmp(year_string.c_str(), "Before 1990") != 0)
        {
            istringstream iss_year(year_string);
            iss_year >> year_num;
        }

        int duration_num;
        istringstream iss_duration(duration_string);
        iss_duration >> duration_num;

        if (c == NULL)
        {
            DialogAddInstancesApp * daia = new DialogAddInstancesApp(GetParent(), l, l->addCollection(collection_type, data_type, title, author, version, publisher, year_num, duration_num, category), previous_frame);
            switchFrame(this, daia);
        }
        else
        {
            l->editCollection(c, collection_type, data_type, title, author, version, publisher, year_num, duration_num, category);
            switchFrame(this, previous_frame);
        }
    }
}

void FrameCreateEditCollectionApp::inputDuration(wxKeyEvent & event)
{
    allowPositiveInteger(txt_duration, event);
}
