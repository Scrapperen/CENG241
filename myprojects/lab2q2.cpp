#include <iostream>
using namespace std;
class GreenhouseMonitor{
    double maxTempThreshold;
    public:
        //double maxTempThreshold(){return maxTempThreshold;}
        void setThreshold(double a);
        
        bool checkThreshold(const double *b,int c);

};
void GreenhouseMonitor::setThreshold(double a){
    maxTempThreshold=a;
};
bool GreenhouseMonitor::checkThreshold(const double *b,int c){
    for(int i=0;i<c;i++){
        if(b[i]>maxTempThreshold){
            cout<<"[WARNING] At least one sensor exceeds limit"<<endl;
            return true;
        }
    }
    return false;
};
int  main(){
    GreenhouseMonitor obj;
    int s;
    double max;
    cout<<"Enter how many input"<<endl;
    cin>>s;
    cout<<"Max temperature:"<<endl;
    cin>>max;
    obj.setThreshold(max);
    double *arr= new double[s];
    cout<<"Enter the temperature values"<<endl;
    for(int i=0;i<s;i++){
        cin>>arr[i];
    }
    if(obj.checkThreshold(arr,s)){
        cout<<"[ALERT] Greenhouse climate regulation required!"<<endl;
    }
    else{
        cout<<"[OK] All greenhouse temperatures are within optimal range."<<endl;
    }
    delete []arr;
}