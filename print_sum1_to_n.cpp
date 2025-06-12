  
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<i<<endl;
            sum =sum+i;
            
        }
        
       
    }
    cout<<sum;
}