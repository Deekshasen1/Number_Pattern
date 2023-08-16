#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row\n";
    cin>>n;
    cout<<"triangle \n";
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<i<<"\t";
        }
        cout<<"\n";
    }
    return 0;
}