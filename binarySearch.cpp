#include<iostream>
using namespace std;
int binarySearch(int *arr,int size,int start,int end,int key){
    
    while(start<=end){
    int mid=(start+end)/2;
    if(key>arr[mid])
    start=mid+1;

    else if(key<arr[mid])
    end=mid-1;

    else
    return mid;
    }

}

int main(){
    int arr[5]={2,7,56,78,90};
    int size=5;
    int start=0;
    int end=size-1;
    int key;
    cin>>key;
    int ans= binarySearch(arr,size,start,end,key);
    cout<<ans<<endl;
    return 0;
}