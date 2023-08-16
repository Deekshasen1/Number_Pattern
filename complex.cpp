#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of row\n";
    cin>>n;
    cout<<"Triangle\n";
    for(int i=1;i<=n;i++){
        for(int k=n;k>i;k--){
            cout<<" ";
        }
        int count=1;
        for(int j=1;j<=i;j++){
            cout<<count;
            count++;
        }
        int m=i-1;
        for(int l=1;l<i;l++){
            cout<<m;
            m--;
        }
        cout<<"\n";
    }
    return 0;
}
/*output is like-
   1
  121
 12321
1234321
*/