#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the row number\n";
    cin>>n;
    cout<<"triangle\n";
    int count=1;
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        cout<<"\n";
    }
    return 0;
}