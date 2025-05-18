#include<iostream>
using namespace std;
int main(){
  int amount=1330;
  cout<<"enter amount"<<endl;
  cin>> amount;
  int RS100,RS50,RS20,RS1;
  switch(1){
    case 1:RS100=amount/100;
    amount=amount%100;
    cout<<"100 Rupees:"<<RS100<<endl;
    case 2:RS50=amount/50;
    amount=amount%50;
    cout<<"50 Rupees:"<<RS50<<endl;
    case 3:RS20=amount/20;
    amount=amount%20;
    cout<<"20 Rupees:"<<RS20<<endl;
      case 4:RS1=amount/1;
    amount=amount%1;
      cout<<"1 Rupees:"<<RS1<<endl;
      break;
      default:cout<<"invalid:"<<endl;
      break;
    
  }
  
}