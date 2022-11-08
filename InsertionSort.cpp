#include<iostream>
using namespace std;
void insertionSort(int arr[],int size){
    for(int i=1; i<size; i++){
        int j;
        int temp=arr[i];
        for(j=i-1; j>=0; j--){
            if(arr[j]>temp)
            arr[j+1]=arr[j];

            else
            break;
        }
        arr[j+1]=temp;

    }
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }

}

int main(){
    int arr[5]={78,67,54,45,23};
    int size=5;
    insertionSort(arr,size);

    return 0;
}