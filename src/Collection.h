#ifndef COLLECTION_H
#define COLLECTION_H

#include <string>

using namespace std;

class Collection
{
    public:

        Collection(int id_val, int ct_val, int dt_val, string title_val, string author_val, string version_val, string publisher_val, int year_val, int duration_val, int category_val);

		static int getCurrentID();
		static void setCurrentID(int val);

		int getID();

		int getCollectionType();
		void setCollectionType(int val);

		int getDataType();
		void setDataType(int val);

		string getTitle();
		void setTitle(string val);

		string getAuthor();
		void setAuthor(string val);

		string getVersion();
		void setVerion(string val);

		string getPublisher();
		void setPublisher(string val);

		int getYear();
		void setYear(int val);

		int getDuration();
		void setDuration(int val);

        int getCategory();
        void setCategory(int val);

        bool operator==(int val);

    protected:

        int id;
        int ct;
        int dt;
        string title;
        string author;
        string version;
        string publisher;
        int year;
        int duration;
        int category;

    private:

};

#endif // COLLECTION_H
