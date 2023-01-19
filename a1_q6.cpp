#include<iostream>
using namespace std;
int main(){
    int i;
    cout<<"enter number:";
    cin>>i;
    int rem;
    while(i!= 0) {
    rem=i%10;
    cout<<rem;
    i=i/10;
    }
}
