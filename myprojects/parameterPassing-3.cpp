#include <iostream>
const int max=10;
using namespace std;
void f(const int &x){//using & call reference
    x=10; //because x is constant
}
int main(){
    int a;
    cout<<a<<endl;
    f(a);
    cout<<a;
}