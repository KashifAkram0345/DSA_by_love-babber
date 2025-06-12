#include<iostream>
using namespace std;
int main(){

    int base;
    int power;
    cin>>base;
    cin>> power;
    int ans=1;
    for(int i=0; i<power ;i++){
        ans=ans*base;
       
    }
  cout<<ans;
}