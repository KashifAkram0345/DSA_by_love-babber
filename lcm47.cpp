#include<iostream>
using namespace std;
int main(){
    int a,b,c,greater;
  
  int L;
    cout<<"Enter three number"<<endl;
    cin>>a;
    cin>>b;
    cin>>c;
      int end=a*b*c;
    
    if(a>=b && a>=c){
    greater=a;
    }
    else if(b>=a && b>=c){
        greater=b;
    }
    else{
        greater=c;
    }
    cout<<"Answer is :"<<greater<<endl;
    for(int i=greater;i<=end;i++){
        if(i%a==0 && i%b==0 && i%c==0){
            L=i;
           cout<<"Lcm is :"<<L<<endl;
           break;
        }
        
    }

}