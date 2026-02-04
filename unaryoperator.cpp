#include<bits/stdc++.h>
using namespace std;
class ABC{
    int x;
    public:
        ABC(int i){
            x = i;
        }
        void operator++();
        ABC operator++(int);
        void show(){
            cout<<x<<endl;
        }
};
void ABC::operator++()
{
    ++x;
}
ABC ABC::operator++(){
    x++;
    return x this;
}
int main(){
    ABC o1(5),o2(6);
cout<<"before increment:"<<endl;
o1.show();
o2.show();
cout<<"after increment:"<<endl;
++o1;
o1.show();
o2 = o2++:
o2.show();
}