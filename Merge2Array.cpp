#include<iostream>
using namespace std;

void print(int arr3[], int n){
    for(int k=0; k<n; k++){
        cout<<arr3[k]<<" ";
    }
}
void mergeArray(int arr1[], int n1, int arr2[], int n2, int arr3[]){
    int i=0,j=0,k=0;

    while(i<n1 && j<n2){
        if(arr1[i]<arr2[j])
        arr3[k++] = arr1[i++];

        else if(arr1[i]>arr2[j])
        arr3[k++] = arr2[j++];
    }

    while(i<n1)
        arr3[k++] = arr1[i++];

    while(j<n2)
        arr3[k++] = arr2[j++];

     print(arr3,9);       
    
}

int main(){
    int arr1[5]={1,2,3,4,5};
    int arr2[4]={7,8,9,10};
    int arr3[9]={0};

    mergeArray(arr1,5,arr2,4,arr3);
    return 0;
}