#include<stdio.h>
int main(void){
  int a,i,sum=0;
  scanf("%d",&a);
  for(i=1;i<=a;++i){
    sum+=i;
  }
  printf("%d\n",sum);
  sum=0;
  for(i=1;i<=1024;++i){
    sum+=i;
  }
  printf("%d\n",sum);
  return 0;
}
