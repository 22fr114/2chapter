#include<stdio.h>
int main(void){
  float n=0,i=0,xn=0;
  while(xn<100000)
    {
      ++i;
      n=i*i*i;
      xn+=n;
    }
  i=i-1;
  xn=xn-n;
  printf("%f\n%f\n",i,xn);
  return 0;
}
  
