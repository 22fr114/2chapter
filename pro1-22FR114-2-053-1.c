#include<stdio.h>
int main(void){
  int n,i,s;
  scanf("%d",&n);
  for(i=1;i<=n;++i){
    if(i%3==1)
      printf("1");
    if(i%3==2)
      printf("2");
    if(i%3==0)
      printf("3");
  }
  
  return 0;
}
