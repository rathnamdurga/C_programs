#iclude<iostream>
using namespace std;
class week6{
public:
int a;
week6 add(week6 wa,week6 wb)
{
 week6 wc;
 wc.a=wa.a+wb.a;
 return wc;
}
};
int main(){
  week6 w1,w2,w3;
  w1.a=50;
  w2.a=60;
  w3.a=0;
 cout<<"Initial values\n";
 cout<<"The value of object1: "<<w1.a
 <<"\n value of object2: "<<w2.a
 <<"\n value of object3: "<<w3.a<<"\n";
 w3=w3.add(w1,w2);
  cout<< "new values \n";
  cout<<" vlaue of object1: "<<w1.a
 <<"\n value of object2: "<<w2.a
 <<"\n value of object3: "<<w3.a<<"\n";
 return 0;
}


 
 
  
   