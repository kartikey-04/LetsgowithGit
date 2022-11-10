#include<iostream>
using namespace std;

int binarySearch(int *arr,int size, int s, int e, int key){
    if(s>e)
    return -1;

    int mid=(s+e)/2;

    if(arr[mid]==key)
    return mid;

    else if(arr[mid]>key)
    binarySearch(arr,size,s,mid-1,key);

    else
    binarySearch(arr,size,mid+1,e,key);
}

int main(){
    int arr[5]={23,45,67,89,90};
    int size=5;
    int s=0;
    int e=size-1;
    int key;
    cin>>key;
    int ans=binarySearch(arr,size,s,e,key);
    cout<<ans<<endl;
    return 0;

}