#include<iostream>
using namespace std;
int main(){
    int n;
    int digit;
    int ans=0;
    cin>>n;
    for(int i=1;i<=n; i++){
        digit=n%10;
        ans=(ans*10)+digit;
        n=n/10;
        
    }
      cout<<ans<<endl;
  
}