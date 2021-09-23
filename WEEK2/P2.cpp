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
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int i=0;
    int i1=-1,i2=-1,i3=-1;
    while(i<n){
      int sum=arr[i];
      for(int j=0;j<i-1;j++){
        for(int k=j+1;k<i;k++){
          if(sum==arr[j]+arr[k]){
            i1=j+1;i2=k+1;i3=i+1;
          }
        }
      }
      i++;
    }
    if(i1!=-1){
      cout<<i1<<" "<<i2<<" "<<i3<<endl;
    }
    else{
      cout<<"No Sequence found"<<endl;
    }
  }
}
