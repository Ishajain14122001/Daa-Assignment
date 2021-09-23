#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int comparison=0,sw=0;
  for(int i=0;i<n-1;i++){
    int min=i;
    int j=i+1;
    while(j<n){
      if(arr[j]<arr[min]){
        min=j;
      }
      comparison++;
      j++;
    }
    sw++;
    swap(arr[min],arr[i]);
  }
  cout<<endl<<"The sorted array is: "<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl<<"Comparisons : "<<comparison<<"\nSwaps : "<<sw;
}
