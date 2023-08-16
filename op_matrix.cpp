#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number untile you want print the matrix\n";
    cin>>n;
    cout<<"matrix \n";
    for(int i=0;i<n;i++){
        for(int j=n;j>=1;j--){
            cout<<j<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}