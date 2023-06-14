#include<stdio.h>
int main(void){
  int a,b,c,max,t;
  scanf("%d%d%d",&a,&b,&c);
  if(a>b)
    t=a;
  else
    t=b;

  if(c>t)
    max=c;
  else
    max=t;


  printf("%d\n",max);
  

  return 0;
}
  
