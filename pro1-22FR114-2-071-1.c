#include<stdio.h>
#include<math.h>
int main(void){
  double atan2(double y,double x);
  double a,s,i,X,Y,r;
  int n;

  printf("zissuu");
  scanf("%lf",&X);
  printf("kyosuu");
  scanf("%lf",&Y);
  printf("nannzyou");
  scanf("%d",&n);


  a=atan2(Y,X);

  r=pow(pow(X,2)+pow(Y,2),1.0/2);
  r=pow(r,n);

  s=cos(a*12);
  i=sin(a*12);

  printf("zn=%f+i%f\n",r*s,r*i);

  return 0;
}

  
