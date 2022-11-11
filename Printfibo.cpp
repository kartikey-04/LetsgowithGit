#include<iostream>
using namespace std;

int main(){
    int a=0; 
    int b=1;
    int n; 
    cin>>n;
    cout<<a<<" "<<b<<" ";

    for(int i=0; i<n-2; i++){
        int fibo=a+b;
        cout<<fibo<<" ";
        a=b;
        b=fibo;
    }
    return 0;
}