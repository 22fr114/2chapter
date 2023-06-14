#include<stdio.h>
int main(void){
  int a,i,ave,sum=0;
  for(i=1;;++i){
    scanf("%d",&a);
    if(a==0)
      break;
    sum+=a;
    ave=sum/i;
  }
  printf("%d\n",ave);
  return 0;
}
