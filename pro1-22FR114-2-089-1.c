#include<stdio.h>
int main(void){
  int i,a;
  scanf("%d",&i);
  for(a=1;a<=1000;++a){
    if(a%i==4)
      printf("%d\n",a);
  }
  return 0;
}

  
