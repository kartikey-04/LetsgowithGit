#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    bool isPrime=1;
    for(int i=2; i<n; i++){
        if(n%2==0){
            isPrime=0;
            break;
        }

    }
    if(isPrime)
    cout<<"Prime no."<<endl;

    else
    cout<<"Not Prime"<<endl;

    return 0;

}