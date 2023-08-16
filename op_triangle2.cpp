#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter the number of row \n";
    cin>>n;
    cout<<"triangle \n";
    for(int i=1;i<=n;i++){
        for(int k=1;k<i;k++){
            cout<<" ";
        }
        count=i;
        for(int j=n;j>=i;j--){
            cout<<count;
            count++;
        }
        cout<<"\n";
    }
    return 0;
}
/*
output like-
1234
 234
  34
   4
*/