#include<iostream>
using namespace std;

void update(int arr[],int size){
cout<<"Iside the function"<<endl;
 arr[0]=120;
for(int i=0;i<5;i++){
    cout<<arr[i]<<" "<<endl;
   
}
cout<<"Go back to main"<<endl;
}
int main(){
int x[5]={2,4,6,8,10};
update(x,5);
for(int i=0;i<5;i++){
    cout<<x[i]<<endl;
}
}







