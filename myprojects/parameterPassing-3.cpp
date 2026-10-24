#include <iostream>
const int max=10;
using namespace std;
void f(const int &x){
    x=10;
}
int main(){
    int a;
    cout<<a<<endl;
    f(a);
    cout<<a;
}