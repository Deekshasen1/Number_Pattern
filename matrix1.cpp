#include<iostream>
using namespace std;
int main(){
    int n,count;
    cout<<"Enter the number untile you want print the matrix\n";
    cin>>n;
    for(int i=1;i<=n;i++){
        count=i;
        for(int j=1;j<=n;j++){
            cout<<count<<"\t";
            count++;
        }
        cout<<"\n";
    }
    return 0;
}
/* output like- 
1       2       3
2       3       4
3       4       5*/