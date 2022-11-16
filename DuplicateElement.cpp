#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

vector<int> duplicateElement(vector<int> &arr){
    vector<int> ans;

    for(int i=0; i<arr.size(); i++){
        if(i+1<arr.size()){
            if(arr[i]==arr[i+1]){
                ans.push_back(arr[i]);
                i++;
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(4);
    arr.push_back(5);
    vector<int> ans;;

    ans = duplicateElement(arr);
    for(int i=0 ;i<ans.size(); i++){
        cout<<ans[i]<<" ";
    }

}