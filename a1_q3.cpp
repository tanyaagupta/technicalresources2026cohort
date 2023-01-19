#include<iostream>
using namespace std;
int main(){
    int i,n;
    cout<<"enter number";
    cin>>n;
   for (i=2;i<=n;i++){
    if (n==1){
        cout<<"not prime";
    }
    else if(n%i==0){
        cout<<"not prime";
        break;
    }
    else{
        cout<<"prime";
        break;
    }
   }
}
