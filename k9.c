#include<stdio.h>
#include<math.h>
void main(){
float a,b,t,c;
printf("enter a:");
scanf("%f",&a);
printf("enter b:");
scanf("%f",&b);
t=pow(a,2)+pow(b,2);
c=sqrt(t);
printf("%f",c);
}
