#include<iostream>
using namespace std;
bool isEven(int a){
    if(a & 1){
        return 0; // odd
    }
    return 1; // even
}

int main(){
    int num;
    cin >> num;
    if(isEven(num)){
        cout << "Even" << endl;
    }
    else{
        cout << "odd" << endl;
    }
}

