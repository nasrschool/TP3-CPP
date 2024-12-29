#include<iostream>
#include<string>
#include"classes.hpp"
using namespace std;

/*PostalObject::PostalObject(){
    name = "no name";
    address = 0;
    codepostal = 0;
    destination_city_name = "no city";
    recomended = false;
    fee = 0;
}*/

PostalObject::PostalObject(string name = "no name", string address = "no address", int codepostal = 0,
    string destination_city_name = "no city", bool recomended = false)
{
    this->name = name;
    this->address = address;
    this->codepostal = codepostal;
    
    this->destination_city_name = destination_city_name;
    this->recomended = recomended;
    this->fee = 0;
    if(name == "no name"){
        throw ExeptionNameMissing();
        }
    if(address == "no address" || codepostal == 0){
        throw ExeptionAddress(this->name);
    }

}

float PostalObject::operator+(const PostalObject &obj){
    return this->fee + obj.fee;
}

void ExeptionNameMissing::what(){
    cout<<"postal name is missing"<<endl;
}

ExeptionAddress::ExeptionAddress(string name){
    this->name = name;
}
void ExeptionAddress::what(){
    cout<<"destination address missing for package of: "<<name<<endl;
}
void ExeptionWeight::what(){
    cout<<"weight missing"<<endl;
}

letter::letter(bool urgent,string name = "no name", string address = "no address",
        int codepostal = 0, string destination_city_name = "no city", bool recomended = false):
        PostalObject(name,address,codepostal,destination_city_name,recomended){
    
    this->urgent = urgent;
    fee += 0.5;
    if(PostalObject::recomended){
        fee += 2;
    }
    if(this->urgent){
        fee += 3;
    }
}

void letter::print(){
    cout<<"name is: "<<name<<endl
    <<"address is: "<<address<<endl
    <<"codepostal is: "<<codepostal<<endl
    <<"destination is:"<<destination_city_name<<endl
    <<"recomended is:"<<recomended<<endl
    <<"is urgent: "<<urgent<<endl
    <<"fee is:"<<fee<<endl;
    //believe i should have overloaded << for this fuction but like i said,
    //didnt completly understand whats asked from me
}

/*Package::Package(){
    throw ExeptionWeight;
}*/
Package::Package(unsigned int weight,string name = "no name", string address = "no address",
        int codepostal = 0, string destination_city_name = "no city", bool recomended = false):
        PostalObject(name,address,codepostal,destination_city_name,recomended){
    
    this->weight = weight;
    if(!weight){
        throw ExeptionWeight();
    }
    fee += (0.8 * (((int)(this->weight))/100) + 1);
    if(PostalObject::recomended){
        fee += 4;
    }

}

void Package::print(){
    cout<<"name is: "<<name<<endl
    <<"weight is: "<<weight<<endl
    <<"address is: "<<address<<endl
    <<"codepostal is: "<<codepostal<<endl
    <<"destination is:"<<destination_city_name<<endl
    <<"recomended is:"<<recomended<<endl
    <<"fee is:"<<fee<<endl;
}

template <typename T>
Collection<T>::Collection(int size){
    this->size = size;
    currenNumElements = 0;
}

template <typename T>
void Collection<T>::append(T *PtrObj){
    //array[currenNumElements] = PtrObj;//the only way i found is to give a pointer directly
    //if i passed just an object i would have to dynamically allocate using new, which 
    //requires it to initialise as a seperate obj before we are able to affect anything to it
    //just affecting wont work too because different constructors have different parameters
    //tried to use try catch, but it didnt work for some reason, appearantly it has its own scope?


    array[currenNumElements] = PtrObj;
    currenNumElements++;
}

template <typename T>
float Collection<T>::sum(){
    int i;
    int sum;
    
    sum += 0;
    i = 0;
    while(i < currenNumElements){
        sum += array[i];
        i++;
    }
    return sum;
}

template <typename T>
T& Collection<T>::operator[](const int &num){
    return *(array[num]);
}