#include<stdio.h>
int main(void){
  int n,y1,y2;
  for(n=1;;++n)
    {
      y1=n*n;
      y2=(n-1)*(n-1);
      if(y2<1000 && 1000<=y1){
	printf("%d\n",n);
	break;
      }
    }
  return 0;
}
