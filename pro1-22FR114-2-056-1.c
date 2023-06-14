#include<stdio.h>
int main(void){
  float y,n;
  for(n=1; ;++n)
    {
      y=n*n*n*n/4+n*n*n/2+n*n/4;
      if(100000<=y && y<=200000){
	printf("%f\n",n);
	break;
      }
    }
  return 0;
}
