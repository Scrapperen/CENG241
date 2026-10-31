#include <iostream>
using namespace std;
class U{
    public:
        U(){
            cout<<"Constructor called"<<endl;
        }
        ~U(){
            cout<<"Bye"<<endl;

        }
};
int main(){
    U a;
    U arr[3];
}