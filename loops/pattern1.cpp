#include<iostream>
using namespace std;

void printl(int n){
    int i,j;

    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        printl(n);
    }
    // cin>>n;
    // printl(n);
    return 0;
}

// ****
// ****
// ****
// ****