#include<bits/stdc++.h>
using namespace std;

void explainPair(){
    pair<int,int>p={1,3};
    cout<<p.first<<" "<<p.second<<endl;


    pair<int,pair<int,int>>c={1,{3,4}};
    cout<<c.first<<" "<<c.second.second<<" "<<c.second.first;

    pair<int,int>arr[]={{1,2},{2,5},{5,1}};
    cout<<arr[1].second<<endl;
}

void explainVector(){
    vector<int> v;
    
}

int main(){
    explainPair();
    return 0;
}