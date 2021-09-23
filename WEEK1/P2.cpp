#include<iostream>
using namespace std;
void binary_search(int,int,int,int[]);
int main(){
  int t,size,key;
  cin>>t;
  while(t--){
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];
    cin>>key;
    binary_search(0,size-1,key,arr);
  }
}
void binary_search(int l,int r,int key,int arr[]){
  int mid,comp=0,flag=0;
  while(l<=r){
    mid=(l+r)/2;
    if(arr[mid]==key){
      comp++;flag=1;break;
    }
    else if(key<arr[mid])
      r=mid-1;
    else
      l=mid+1;
    comp++;
  }
  if(flag==0){
    cout<<"NOT PRESENT "<<comp<<endl;
  }
  else{
    cout<<"PRESENT "<<comp<<endl;
  }
}
