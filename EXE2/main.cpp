#include<iostream>
#include<string>
#include<vector>
#include"classes.hpp"
using namespace std;



int main(){

    collection<int> intcollection;
    intcollection.append(17);
    intcollection.append(35);
    intcollection.append(12);

    intcollection.show();
    intcollection.sort();
    intcollection.show();


    return 0;
}