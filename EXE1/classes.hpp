#include<iostream>
#include<string>
using namespace std;



class liberaryelement{
    public:
        virtual void showdetails() = 0;

};

class book: public liberaryelement{
    string author;
    int ISBN;
    int publication_year;
    bool is_available;
    public:
        book();
        book(string author,int ISBN,int year,bool is_available);
        string get_author();
        int get_ISBN();
        int get_publication_year();
        bool get_is_available();

        void set_author(string);
        void set_ISBN(int);
        void set_publication_year(int);
        void set_is_available(bool);

        void showdetails();
        void borrow_book();
};

class noneExistentExemplaryExeption{
    public:
        string what();
};