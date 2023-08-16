#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter the number of row \n";
    cin>>n;
    cout<<"triangle \n";
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        count=i;
        for(int j=1;j<=i;j++){
            cout<<count;
        }
        cout<<"\n";
    }
    return 0;
}
/*
output like-
   1
  22
 333
4444*/