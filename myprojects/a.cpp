#include <iostream>
using namespace std;
class Family{
    
    public:
        int yaş;string şifre;
        void printForFamily(){
            cout<<"Everything is for family";
        }
        Family(int age, string password){
            yaş=age;
            şifre=password;
        }
};
int main(){
    Family aile(20,"123");
    cout<<aile.yaş<<endl;
    cout<<aile.şifre<<endl;
}