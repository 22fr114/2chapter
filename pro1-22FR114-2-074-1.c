#include<stdio.h>
int main(void){
  int a,b,c,d,sum=0;
  scanf("%d%d%d%d",&a,&b,&c,&d);
  if(b>a)
  sum=sum+1;
  if(c>a)
    sum=sum+1;
  if(d>a)
    sum=sum+1;

  printf("%d\n",sum);
  return 0;
}
