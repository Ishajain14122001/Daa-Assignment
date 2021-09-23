#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int comp=0,swaps=0;
int partition(int arr[],int lb,int ub){
  int pivot=arr[lb];
  int start=lb+1;
  int end=ub;
  while(start<end){
    while(arr[start]<=pivot){
      start++;comp++;
    }
    while(arr[end]>pivot){
      end--;comp++;
    }
    swaps++;
    if(start<end){
      swap(arr[start],arr[end]);
    }
  }
  swap(arr[lb],arr[end]);swaps++;
  return end;
}
int quickSort(int arr[],int lb,int ub,int k){
  if(lb<ub){
    int loc=partition(arr,lb,ub);

    if(k<loc)quickSort(arr,lb,loc-1,k);
    else quickSort(arr,loc+1,ub,k);
    if(k==loc){
      return arr[loc];
    }
  }
  return -1;
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
    int k;
    cin>>k;
    k--;
    int a=quickSort(arr,0,n-1,k);
    // for(int i=0;i<n;i++)
    //   cout<<arr[i]<<" ";
    cout<<endl<<a<<" "<<endl;
  }
}
