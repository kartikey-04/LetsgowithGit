#include<iostream>
using namespace std;

int main(){
    int num;
    cin>>num;
    int count=0;
    while(num!=0){
        if(num&1)
        count++;

        num=num>>1;

    }
    cout<<count<<endl;
}