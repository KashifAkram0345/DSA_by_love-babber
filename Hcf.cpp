#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    int d;
    int h;
   if(a<=b && a<c){
    d=a;
   }
   else if(b<a && b<c){
    d=b;
   }
        else{
            d=c;

        }
        cout<<d<<endl;
        for(int i=d;i<=1;i++){
            if(a%i==0 && b%i==0 && c%i==0){
                h=i;
            cout<<h<<endl; 
            break;
            }
           
        }
        
    }
