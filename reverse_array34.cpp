#include <iostream>
using namespace std;
void reverse(int arr[],int size){
    int start=0;
    int end =size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;

    }
}
 void printArray(int arr[],int size){
 for(int i=0;i<=size;i++){
    cout<<arr[i]<<" "<<endl;
 }
}


int main(){
    int a[5]={2,5,3,8,9};
    int b[3]={3,8,0};
    reverse(a,5);
     reverse(b,3);
     printArray(a,5);
      printArray(b,3);
}

