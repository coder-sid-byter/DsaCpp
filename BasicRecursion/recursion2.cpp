#include<iostream>
using namespace std;


//reverse an array using recursion 

void f(int i,int arr[],int n){
    if(i>=n/2) return;
    else{
        swap(arr[i],arr[n-i-1]);
        f(i+1,arr,n);
    }

}





int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    f(0,arr,n);
    cout<<"after the reversal"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}