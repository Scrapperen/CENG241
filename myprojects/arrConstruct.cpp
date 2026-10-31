#include <iostream>
using namespace std;
class A{
    int n[10];
    public:
        A(int v=0){
            for(int i=0;i<10;i++){
                n[i]=v;
                
            }
            
        }
        void print(){
            for(int i=0;i<10;i++){
                cout<<n[i];
                if(i!=9){
                    cout<<",";
                }
                
            }
            cout<<endl;
        }
          
};
int main(){
    A o1(2),o2;
    o1.print();
    o2.print();
}