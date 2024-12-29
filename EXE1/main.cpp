#include<iostream>
#include<string>
#include"classes.hpp"
using namespace std;


int main(){ 

    book collection[3];

    string names[3] = {"mohamed","fouad","sahri"};
    int years[3] = {1987,1965,2014};
    bool is_availablo[3] = {true, true, false};

    int i = 0;
    while(i < 3){
        collection[i].set_author(names[i]);
        collection[i].set_ISBN(i);
        collection[i].set_publication_year(years[i]);
        collection[i].set_is_available(is_availablo[i]);
        i++;
    }
    
    i = 0;
    while(i < 3){
        collection[i].showdetails();
        cout<<endl;
        i++;
    }

    try{
        collection[2].borrow_book();
        cout<<"book borrowed successfuly!"<<endl;
    }catch(noneExistentExemplaryExeption &e){
        cout<<e.what()<<endl;
    }


    return 0;
}