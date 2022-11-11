#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;

    int product=1;
    int sum=0;
    while(num!=0){
        int rem=num%10;
        num=num/10;
        product=product*rem;
        sum=sum+rem;
    }
    cout<<product-sum<<endl;
    return 0;
}