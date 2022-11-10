#include<iostream>
using namespace std;

void numberSound(string *arr,int num){
    if(num==0)
    return ;

    int rem=num%10;
    num=num/10;

    numberSound(arr,num);
    cout<<arr[rem]<<" ";

}


int main(){
    string arr[10]={"Zero","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};
    int num;
    cin>>num;
    numberSound(arr,num);
    return 0;
}