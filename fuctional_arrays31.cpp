#include<iostream>
using namespace std;
int displayArray(int arr[],int size){
    for (int i = 0; i < size; i++){
          cout <<  " " << arr[i] << endl;
    }
}
int main(){
    int x[5]={12,73,78,47,93};
     displayArray(x, 5);
     
}