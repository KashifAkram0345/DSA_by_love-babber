#include<iostream>
using namespace std;
int main(){
  int a=5;
  cin>>a;
  cout<<"value of a is"<<a<<endl;
  if(a>0){
    cout<<"A is positive"<<endl;
  }
  else if(a<0){
    cout<<"A is negative"<<endl;
  }
  else {
    cout<<"A is Zero"<<endl;
  }  
}