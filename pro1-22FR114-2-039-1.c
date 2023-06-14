#include<stdio.h>
#define DPI(z)    (z/2*z/2*3.14)
#include<math.h>
int main(void){
  float a,b,s,t;
  scanf("%f%f",&a,&b);
  s=DPI(a);
  t=DPI(b);
  printf("%f\n",fabs(s-t));
  return 0;
}
  
  
  
  
