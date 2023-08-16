#include<iostream>
using namespace std;
int main(){
    int n,count=1;
    cout<<"Enter the number untile you want print the matrix\n";
    cin>>n;
    cout<<"matrix \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}