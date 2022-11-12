#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m=n;

    int mask=0;
    while(n!=0){
        n=n>>1;
        mask=(mask<<1)|1;
    }
    int ans=mask&(~m);
    cout<<ans<<endl;
    return 0;
}