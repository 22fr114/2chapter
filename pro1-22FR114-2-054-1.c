#include<stdio.h>
int main(void){
  int n,i,sum=0,y;
  for(n=1; ;++n)
    {
      y=n*n-n+1;
      sum+=y;
      if(sum>=20000){
	printf("%d\n",y);
	break;
      }

    }

  return 0;
}
