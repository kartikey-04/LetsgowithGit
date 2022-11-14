#include<iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0; 
    int e=v.size()-1;

    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;

}

void print(vector<int> ans){
    cout<<"After"<<endl;
    for(int i=0; i<ans.size(); i++){
        cout<<ans[i]<<" ";

    }
}

int main(){
    vector<int> v;

    v.push_back(12);
    v.push_back(15);
    v.push_back(89);
    v.push_back(18);
    v.push_back(20);
    v.push_back(10);

    cout<<"Before"<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;


    vector<int> ans = reverse(v);
    print(ans);
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;

    return 0;
    
}