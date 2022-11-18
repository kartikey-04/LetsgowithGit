#include<iostream>
#include<math.h>
using namespace std;
int powerN(int n, int m){
    if(n==0)
    return 1;

    int ans=pow(m,n-1);
     
    return m*ans;     
}

int main(){
    int n;
    cin>>n;
    int m=n;
    int ans = powerN(n,m);
    cout<<ans<<endl;
}