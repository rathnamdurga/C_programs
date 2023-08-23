#include <iostream>
using namespace std;
int main(){
    int n,i,j;
    cout<<"enter n: ";
    cin>>n;
    int a[n][n];
    for( i=0;i<n;i++){
        for(int j=0;j<n;i++){
            cin>>a[i][j];
        }
    }
     i=0;
    for( j=0;j<n;j++){
        cout<<a[i][j]<< " ";
    }
    cout<<endl;
    j=n-1;
    for( i=1;i<n;i++){
        cout<<a[i][j]<< " ";
    }
     cout<<endl;
    i=n-1;
    for( j=n-2;j>=0;j--){
        cout<<a[i][j]<< " ";
    }
     cout<<endl;
     j=0;
    for( i=n-2;i>=1;i--){
        cout<<a[i][j]<< " ";
    }
     cout<<endl;
    i=1;
    for(j=1;j<=2;j++){
        cout<<a[i][j]<< " ";
    }
     cout<<endl;
    i=2;
    for(j=2;j>=1;j--){
        cout<<a[i][j]<< " ";
    }
     cout<<endl;
    return 0;
    
}