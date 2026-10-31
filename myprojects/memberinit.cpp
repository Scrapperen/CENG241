#include <iostream>
using namespace std;
class S{
    int &ref;
    const double cost;
    public:
        S(int,double);
};
S::S(int a,double b): ref(a), cost(b){
    cout<<"Reference variable: "<<a<<" Constant variable: "<<b<<endl;
};
int main(){
    S(1,3.2);
    
}