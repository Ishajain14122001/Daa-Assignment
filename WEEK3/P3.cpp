#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int lb,int mid,int ub){
  int i=lb;
  int j=mid+1;
  int k=lb;
  int brr[ub+1];
  while(i<=mid and j<=ub){
    if(arr[i]<arr[j]){
      brr[k]=arr[i];i++;
    }
    else{
      brr[k]=arr[j];j++;
    }
    k++;
  }
  while(i<=mid){
    brr[k]=arr[i];i++;k++;
  }
  while(j<=ub){
    brr[k]=arr[j];j++;k++;
  }
  for(int i=lb;i<=ub;i++){
    arr[i]=brr[i];
  }
}
void mergeSort(int arr[],int lb,int ub){
  if(lb<ub){
    int mid=(lb+ub)/2;
    mergeSort(arr,lb,mid);
    mergeSort(arr,mid+1,ub);
    merge(arr,lb,mid,ub);
  }
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
    mergeSort(arr,0,n-1);
    int flag=0;
    for(int i=0;i<n-1;i++)
      if(arr[i]==arr[i+1]){
          flag=1;break;
      }
    if(flag==1)cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
  }
}
