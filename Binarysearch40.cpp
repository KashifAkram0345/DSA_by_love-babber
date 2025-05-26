#include<iostream>
using namespace std;
int binarysearch(int arr[],int size, int key){
    int start=0;
    int end=size-1;
    int mid=start+(end-start)/2;
    int ans;
    while(start<=end){
        if(arr[mid]==key){
            ans=mid;
            end=mid-1;
        }
        if(key>arr[mid]){
            start=mid+1;

        }
        else{
            end=mid-1;
        }
        mid=start+(end-start)/2;
    }
    return mid;
}
int main(){
    int even[6]={2,4,6,8,12,10};
    int index= binarysearch(even,6,8);
     cout<<"Index of 8 is : "<< index<<endl;
}