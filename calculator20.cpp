#include<iostream>
using namespace std;
int main(){
  int a,b;
  cout<<"enter the value of a"<<endl;
  cin>>a;
  cout<<"enter the value of b"<<endl;
  cin>>b;
  char oper;
  cout<<"enter the operation "<<endl;
  cin>>oper;
  switch(oper){
    case '+':cout<<a+b<<endl;
    case '*':cout<<a*b<<endl;
    case '/':cout<<a/b<<endl;
    case '-':cout<<a-b<<endl;
    default:cout<<"End"<<endl;
    }
  
}