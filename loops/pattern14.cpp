#include<iostream>
using namespace std;
void printp(int n){
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}

int main(){
int t;
cout<<"Enter the value of t"<<endl;
cin>>t;

for(int i=0;i<t;i++){
    int n;
    cout<<"Enter the value of  n"<<endl;
    cin>>n;

    printp(n);
}
    return 0;
}