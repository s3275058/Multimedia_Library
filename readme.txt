Nguyen Minh Sang - s3393350
Kieu Hoang Anh - s3275058

COSC2131: Programming using C++
Assignment 2
25 - 12 - 2013

How to install

- Windows: follow the instructions in the link below to build the wxWidgets library required to run the program
	http://wiki.wxwidgets.org/Compiling_wxWidgets_with_MinGW

- Linux: 
	+ Setup sqlite3
		$ apt-install sqlite3 libsqlite3-dev

	+ Follow these steps to install wxWidgets: (version 3.0)
		1. Download wxWidgets from the wx site, and uncompress the source code. On Linux, you should download the wxGTK code base.
		2. Open a console window
		3. Change directories to the folder containing wxWidgets.
		4. Setup a build directory, and change directories to that folder:
			$ mkdir installation
			$ cd installation
		5. Configure the wxWidgets
			$ ./configure --enable-unicode --disable-debug --disable-shared --disable-monolithic --with-gnomeprint
		6. Build wxWidgets:
			$ make
		7. Install it:
			$ make install
		
	+To intall our application
		1. Go to application folder
		2. Running MakeFile
			$ make

How to run

- Windows: Run the file "Library Application.exe" or open the file "Library Application.cbp" in CodeBlocks IDE and run.

- Linux: 	$ ./ass2.out

C++ features

- Operator overloading: There are 3 main classes in the program: Collection, Instance and Borrower. Because there are many occasions where we
need to compare an object of this type to a unique identifier (ID or barcode), using accessors everytime seems redundant and makes the code
longer. Therefore in each of these classes we override the operator '==' to directly use it to compare objects of these classes with unique
identifiers without using any accessor.

- Swap and Sort algorithms in C++: In this program we use the swap and sort algorithms provided in C++ on many occasions.

- Template: There is one part of the code where we used the template feature of C++ because some functions can work for both collection
and borrower and rewriting the exact same code for each class is not efficient.

- File input/output: For save and download features, the C++ standard way to read and save to file is used.

- Printing: We use wxPrinter for printing reports. Most of the codes are taken from http://wiki.wxwidgets.org/Printing website.

- Database: For storing data purpose, we prefer to use SQLite because it is cross-platform and light-weight.

Data structures

- In this program we only use deque to store the objects. We chose deque over list because we need to access the elements randomly a lot and
list does not support random access. Vector would also have been a good choice of container in this program but we decided to use deque because
deque has all the advantages that vector does but it also has some that vector does not.

References

External libraries:
- wxWidgets: http://www.wxwidgets.org/
- sqlite: http://www.sqlite.org/
- wxPrinter codes: http://wiki.wxwidgets.org/Printing
