#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int len;
    cin>>len;
    string str;
    cin>>str;
    int fre[27]={0,0};
    for(int i=0;i<len;i++){
      fre[str[i]-'a'+1]++;
    }
    int maxF=1;
    char ch='\0';
    for(int i=1;i<=26;i++){
      if(fre[i]>maxF){
        maxF=fre[i];ch=i+96;
      }
    }
    if(maxF>1)
      cout<<ch<<"-->"<<maxF<<endl;
    else
      cout<<"No Element Exits"<<endl;
  }
}
