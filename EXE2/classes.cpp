#include<iostream>
#include<string>
#include<algorithm>
#include"classes.hpp"
using namespace std;

template <typename T>
void collection<T>::append(const T &element){
    vecto.push_back(element);
}

template<typename T>
void collection<T>::show(){
    int i = 0;
    int size = (this->vecto).size();
    while(i < size){
        cout<<"v[i]: "<<(this->vecto).at(i)<<endl;
        i++;
    }
    cout<<endl;
}

template <typename T>
void collection<T>::sort(){
    sort(vecto);
}