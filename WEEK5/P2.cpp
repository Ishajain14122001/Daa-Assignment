#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
      cin>>arr[i];
    int key;
    cin>>key;
    sort(arr,arr+size);
    int i=0,j=size-1;
    cout<<endl;
    while(i<j){
      if(arr[i]+arr[j]==key){
        cout<<arr[i]<<" "<<arr[j]<<endl;i++;j--;
      }
      else if(arr[i]+arr[j]>key)
      j--;
      else
      i++;
    }
  }
}
