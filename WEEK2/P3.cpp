#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
      cin>>arr[i];
    }
    int key;
    cin>>key;
    sort(arr,arr+n);
    int i=0,j=n-1,count=0;
    for(int i=0;i<n-1;i++){
      for(int j=i+1;j<n;j++){
        if(arr[j]-arr[i]==key)
        count++;
      }
    }
    cout<<count<<endl;
  }
}
