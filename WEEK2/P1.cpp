#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binarySearch(int arr[],int left,int right,int key){
  int index1=-1,index2=-1,l=left,r=right;
  //For calculating left index of key
  while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==key){
      index1=mid;
      r=mid-1;
    }
    else if(arr[mid]>key){
        r=mid-1;
    }
    else{
      l=mid+1;
    }
  }
  l=left,r=right;
  //For calculating right index of key
  while(l<=r){
    int mid=(l+r)/2;
    if(arr[mid]==key){
      index2=mid;
      l=mid+1;
    }
    else if(arr[mid]>key){
        r=mid-1;
    }
    else{
      l=mid+1;
    }
  }
  if(index1>-1 and index2>-1)
    return index2-index1+1;
  if (index1==-1 and index2==-1)
    return 0;
  return 1;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int key;
    cin>>key;
    int count=binarySearch(arr,0,n-1,key);
    if(count!=0)
    cout<<key<<"->"<<count<<endl;
    else
    cout<<"Key not Present"<<endl;
  }
}
