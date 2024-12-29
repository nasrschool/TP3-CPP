#include<iostream>
#include<string>
using namespace std;

class test{
    
    public:
        int num;
        test(int num):num(num){
            cout<<num<<endl;
            
        }
};

int main(){
    test obj1(1);
    test obj2(6);

    obj2 = obj1;
    cout<<obj2.num<<endl;
    return 0;
}