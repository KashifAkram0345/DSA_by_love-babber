#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a value n"<<endl;
    cin>>n;
    int r;
    cout<<"enter a value r"<<endl;
    cin>>r;
    int nr=n-r;
    int nfact=1;
    int rfact=1;
    int nrfact=1;

    for(int i=1;i<=n;i++){
        nfact=i*nfact;
          }
         for(int i=1;i<=r;i++){
        rfact=i*rfact;
    }
    for(int i=1;i<=nr;i++){
        nrfact=nrfact*i;
    }
     int nCr = nfact / (rfact * nrfact);

    // Output
    cout << "nCr = " << nCr << endl;

    return 0;

       
}