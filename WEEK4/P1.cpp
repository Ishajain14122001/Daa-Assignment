#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int comp=0,inv=0;
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
      if(i<j)inv++;
    }
    comp++;
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
      comp=0;inv=0;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<endl<<comp<<" "<<inv<<endl;
  }
}
