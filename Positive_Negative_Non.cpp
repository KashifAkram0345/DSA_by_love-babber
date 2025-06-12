#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n<0){
        cout<<"Negative number"<<endl;
    }
    else if(n>0){
        cout<<"Non number"<<endl;
    }
    else{
        cout<<"Zero"<<endl;
    }
}