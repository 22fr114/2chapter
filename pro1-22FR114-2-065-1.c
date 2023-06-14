#include<stdio.h>
int main(void){
  int a,b,x=0,n=0;
  scanf("%d%d",&a,&b);
  while(x<=2000){
    x=a*x+b;
    n+=1;
  }
  printf("%d\n",n);
  x=0;n=0;
  while(x<=2000){
    x=3*x+2;
    n+=1;
  }
  printf("%d\n",n);
  return 0;

}
