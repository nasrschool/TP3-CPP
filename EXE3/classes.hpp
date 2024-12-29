#include<iostream>
#include<string>
using namespace std;

class PostalObject{
    protected:
        string name;
        string address;
        int codepostal;
        string destination_city_name;
        bool recomended;
        float fee;
    public:
        //PostalObject();
        PostalObject(string,string,int,string,bool);
        float operator+(const PostalObject &obj);

};

class CustomExeptions{
    virtual void what() = 0;
};

class ExeptionNameMissing: public CustomExeptions{
    public:
        void what();
};

class ExeptionAddress: public CustomExeptions{
    protected:
        string name;
    public:
        ExeptionAddress(string name);
        void what();
};

class ExeptionWeight: public CustomExeptions{
    public:
        void what();
};
//dont know exactly what the operator << does to overload it, if 
// it is about cout then why should i care about types of returns? doeest wouldnt
//the function return a void?

class letter: public PostalObject{
    protected:
        bool urgent;
    public:
        letter(bool,string,string,int,string,bool);
        void print();

};

class Package: public PostalObject{//colis  
    protected:
        int weight;
    public:
        //Package();
        Package(unsigned int,string,string,int,string,bool);
        void print();
};

template <typename T>
class Collection{
    int size;
    int currenNumElements;
    T** array;
    public:
        Collection(int size);
        void append(T*);
        float sum();
        T& operator[](const int &num);
};

