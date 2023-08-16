#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter the number of row \n";
    cin>>n;
    cout<<"triangle\n";
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=1;j<=i;j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}