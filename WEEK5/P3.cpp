#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int size1,size2;
  cin>>size1;
  int arr1[size1];
  for(int i=0;i<size1;i++)
    cin>>arr1[i];
  cin>>size2;
  int arr2[size2];
  for(int i=0;i<size2;i++)
    cin>>arr2[i];
  cout<<"Common array is : "<<endl;
  int i=0,j=0,k=0;
  int size3=size1<size2?size1:size2;
  int arr3[size3];
  while(i<size1 and j<size2){
    if(arr1[i]==arr2[j]){
      arr3[k]=arr1[i];i++;j++;k++;
    }
    else if(arr1[i]>arr2[j]){
      j++;
    }
    else{
      i++;
    }
  }
  for(int i=0;i<k;i++)
    cout<<arr3[i]<<" ";
}
