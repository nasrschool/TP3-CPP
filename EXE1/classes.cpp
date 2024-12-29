#include<iostream>
#include<string>
#include"classes.hpp"
using namespace std;



book::book(){
    this->author = "no name";
    this->ISBN =  -1;
    this->publication_year = -1;
    this->is_available = false;
}
book::book(string author = "no name",int ISBN = -1, int year = -1,bool is_available = false){
    this->author = author;
    this->ISBN =  ISBN;
    this->publication_year = year;
    this->is_available = is_available;
}

string book::get_author(){
    return this->author;
}
int book::get_ISBN(){
    return this->ISBN;
}
int book::get_publication_year(){
    return this->publication_year;
}
bool book::get_is_available(){
    return this->is_available;
}

void book::set_author(string author){
    this->author = author;
}
void book::set_ISBN(int ISBN){
    this->ISBN = ISBN;
}
void book::set_publication_year(int publication_year){
    this->publication_year = publication_year;
}
void book::set_is_available(bool is_available){
    this->is_available = is_available;
}

void book::showdetails(){
    cout<<"author is: "<<author<<endl
    <<"ISBN is: "<<ISBN<<endl
    <<"publication year is: "<<publication_year<<endl
    <<"is available: "<<is_available<<endl;
}

string noneExistentExemplaryExeption::what(){
    return "error book not available!";
}

void book::borrow_book(){
    if(!is_available){
        noneExistentExemplaryExeption obj;
        throw obj;
    }
}