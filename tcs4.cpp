#include <iostream>
#include <queue> 
using namespace std;
int count =0;
int divisor(int n){
    int count=0;
    int fact=1;
    while(n!=0){
        for(int i=1;i<n;i++){
            if(n%i==0){
                fact=i;
            }

        }
        n=n-fact;
        count++;
    }
    return count;
}
int main(){
    int n;
    cout<<"enter a number";
    cin >> n;
    int result = divisor(n);
    cout << "Count: " << result << endl;
    return 0;
}