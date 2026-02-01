#include<iostream>
using namespace std;
int main(){
    int *p = new int;
    *p = 42;
    cout <<"Value Stored:"<<*p<<endl;

    delete p;
    p = nullptr;
    if(p==nullptr){
        cout<<"the Value is deleted(dynamically)";
    }
    return 0;
}