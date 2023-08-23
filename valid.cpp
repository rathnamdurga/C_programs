#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cout<<"enter a string";
    cin>>s;
    int n=s.length();
    stack<int> st;
    int i=0;                                                                                         ,                               
    while(int i<n){
        if(s[i]=="(")
        st.push(s[i])
        else{
            if(st.size()==0)
            return false;
            s.pop();
        }
       if(st.size()==0)
       return true;
       return false;

    }

}