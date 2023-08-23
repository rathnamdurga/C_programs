
#include <iostream>
using namespace std;
#include<vector>
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n,0);
    int i=0;
    v[0]=1;
    i=(i+k)%n;
    while(i!=0){
        v[i]=1;
        i=(i+k)%n;
    }
    int flag=0;
    for(int i=0;i<n;i++){
        if(v[i]==0){
            cout<<i+1<<" ";
        
            flag=1;
        }
    }
    if(flag==0){
        cout<<0;
    }
    return 0;
}