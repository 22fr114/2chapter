#include<stdio.h>
int main(void){
  int i,sum=0,number[5],ave;
  for(i=0;i<=4;++i){
    scanf("%d\n",&number[i]);
  }
  for(i=0;i<=4;++i){
    sum+=number[i];
  }
  ave=sum/5;
  printf("%d\n%d\n",sum,ave);
  return 0;
}
