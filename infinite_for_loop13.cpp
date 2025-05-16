#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value :"<<endl;
    cin>>n;
    cout<<"Printing value from 1-to-n :"<<endl;
    int i=1;
    for(; ;){
        if(i<=n){
            cout<<i<<endl;
        }
       i++; 
    }
}