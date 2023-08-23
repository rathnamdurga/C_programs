#include<iostream>
using namespace std;
int main(){
int a;
cout<<"enter a:";
cin>>a;
try{
   if(a > 0){
throw a;
}
else{
cout<<"the value of a is"<<a<<endl;
}
}
catch (int a){
cout<<"exception caught";                                                                                                                              
}
return 0;  
}
