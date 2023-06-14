#include<stdio.h>
int main(void){
  int x[100],i,sum;
  for(i=0;i<=99;++i){
    x[i]=i+1;
      if(x[i]%3==0 || x[i]%5==0)
	sum+=1;
  }
  printf("%d\n",sum);
  return 0;
}
