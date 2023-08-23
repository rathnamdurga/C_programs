#include<iostream>
using namespace std;
int main(){
try{
   int age;
     cout<<"enter age: "<<endl;
     cin>>age;
if(age>=18){
    cout<<"you are old enough.";
    }
else{
  throw 'c';
 }
}
catch(int myNum){
   cout<< "you must be 18 yrs old.\n";
   cout<<"Error number:" <<myNum;
}
catch(...){
cout<<"Default Exception\n";
}
}


