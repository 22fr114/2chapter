#include<stdio.h>
int main(void){
  int x[10],i,sum=0;
  for(i=0;i<=9;++i){
    scanf("%d",&x[i]);
    if(x[i]%2==0)
      sum+=1;
  }

  printf("%d\n",sum);
  return 0;
}
