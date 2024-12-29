#include<iostream>
#include<string>
#include"classes.hpp"
using namespace std;

int main(){
    Collection<letter> letters(6);
    Collection<Package> packages(6);
    letter letter1(true,"opemheimer","hiroshima",26000,"city1",false);
    letter letter2(true,"einstein","somewhere",80000,"city2",false);
    Package package1(1200,"heissenberg","his house and his neibours",12000,"city3",true);
    Package package2(420,"nikola tesla","court",52000,"city4",false);

    letters.append(&letter1);
    letters.append(&letter2);
    packages.append(&package1);
    packages.append(&package2);

    letters[0].print();
    letters[1].print();
    packages[2].print();
    packages[3].print();

    cout<<"total sum is: "<<letters.sum()<<endl;
    
    return 0;
}