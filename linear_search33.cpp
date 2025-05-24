#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    for(int i=0;i<=size;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int x[10]={2,9,7,8,5,7,3,0,4,3};
    cout<<"Enter the element to search for"<<endl;
    int key;
    cin>>key;
    bool found=search(x,10,key);
    if(found){
        cout<<"Key hai"<<endl;
    }
        else{
            cout<<"Key  nahi hai"<<endl;
        }
    }

