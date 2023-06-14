#include<stdio.h>
int main(void){
  int x[100],i=0,sum=0;
  while(i<=99){
    x[i]=i+1;
     if(x[i]%3==0 || x[i]%5==0)
      sum+=1;
     ++i;
  }
  printf("%d\n",sum);
  return 0;
}
