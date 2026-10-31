#include <iostream>
using namespace std;
const double GLOBAL_MARKET_RISK_THRESHOLD=0.05;
class Portfolio{
    int capacity;
    double *assetPrices;
    public:
        void Initialize(int a){
            capacity=a;
            assetPrices= new double[a];
        }
        void cleanup(){
            delete [] assetPrices;
        }
        double calculateTotalValue(double arr[]){
            //assetPrices=values;
            for(int i=0;i<capacity;i++){
                assetPrices[i]=arr[i];
            }
            
            return *assetPrices;
        }
        bool exceedsRiskLimit(double drawdown){
            if(drawdown>GLOBAL_MARKET_RISK_THRESHOLD)
                return true;
            else{
                return false;
            }
        }
        void displayPortfolio(){
            cout<<"Assets Tracked:"<<capacity<<"/"<<capacity<<endl;
            double sum=0;
            cout<<"Prices:";
            for(int i=0;i<capacity;i++){
                sum+=assetPrices[i];
                cout << assetPrices[i] << " ";
            }
            
            cout<<endl;
            cout<<"Total Portfolio Value: "<<sum<<endl;
            
            cout<<"[INFO] Released portfolio dynamic memory."<<endl;

        }


};
int main(){
    Portfolio one;
    
    int num;double drawdown;
    cout<<"Enter how many assets you would like to enter:"<<endl;
    cin>>num;
    one.Initialize(num);
    double arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter Asset Price "<<i+1<<":"<<endl;
        cin>>arr[i];
       
    }
    one.calculateTotalValue(arr);
    cout<<"Enter the drawdown you have observed so far:"<<endl;
    cin>>drawdown;
    if(one.exceedsRiskLimit(drawdown)==true){
        cout<<"[WARNING] Portfolio drawdown exceeds global risk limit (5%)!"<<endl;
    }
    else{
        cout<<"Portfolio riskis within acceptable parameters."<<endl;
    }
    
    
    
    one.displayPortfolio();
    one.cleanup();

}