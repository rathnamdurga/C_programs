#include<iostream>
using namespace std;
class student{
public:
 double marks;
student(double m){
marks=m;
}
};
void calculateavg(student s1,student s2){
double average=s1.marks+s2.marks/2;
cout<<"The average of two students "<<average;
}
int main(){
student student1(88.0),student2(89.5);
calculateavg(student1,student2);
return 0;
}
