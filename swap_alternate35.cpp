#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<" "<<arr[i]<<endl;
    }
}


void swapAlternate(int arr[],int size){
    for(int i=0;i<=size;i+=2){
     if   (i+1<size){
        swap(arr[i],arr[i+1]);
     }
        
    }
}
int main(){
    int even[10]={2,8,7,9,6,0,4,5,1,19};
    // int odd[5]={5,0,7,67,65};
    swapAlternate(even,10);
    printArray(even,10);
}