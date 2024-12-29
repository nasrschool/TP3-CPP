#include<iostream>
#include<vector>
#include<string>
using namespace std;

template <typename T>
class collection{
    vector<T> vecto;
    public:
        void append(const T &element);
        void show();
        void sort();
};