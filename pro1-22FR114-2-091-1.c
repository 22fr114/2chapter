#include<stdio.h>
int main(void){
  int i,j,sum=0,flag;

  for(i=2;i<=100;++i){
    flag=0;
    for(j=2;j<i;++j){
      if(i%j==0){
	flag=1;
	break;
      }
    }
    if(flag==0)
      sum+=i;
  }
  printf("%d\n",sum);
  return 0;
}
