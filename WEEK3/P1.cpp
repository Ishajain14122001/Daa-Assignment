#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int comparison=0,shift=0;
  for(int i=1;i<n;i++){
    int temp=arr[i];
    int j=i-1;
    while(j>=0 and arr[j]>temp){
      arr[j+1]=arr[j];
      comparison++;shift++;
      j--;
    }
    shift++;
    arr[j+1]=temp;
  }
  cout<<endl<<"The sorted array is: "<<endl;
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  cout<<endl<<"Comparisons : "<<comparison<<"\nShifts : "<<shift;
}
