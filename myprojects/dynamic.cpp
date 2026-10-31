#include <iostream>
using namespace std;
class B{
    int *p;
    public:
        B(int size){
            p= new int[size];
            cout<<"Constructor called with size: "<<size<<endl;

        }
        ~B(){
            delete []p;
            
        }

};
int main(){
    B a(2);
}