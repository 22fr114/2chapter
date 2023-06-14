#include<stdio.h>
int main(void){
  int a,b,n=0,x=0;
  scanf("%d%d",&a,&b);
  do{
    x=a*x+b;
    n+=1;
  }while(x<=2000);
    printf("%d\n",n);
  n=0;x=0;
  do{
    x=3*x+2;
    n+=1;
  }while(x<=2000);
    printf("%d\n",n);
  return 0;
}
