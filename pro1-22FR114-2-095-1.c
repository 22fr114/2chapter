#include<stdio.h>
int main(void){
  int decimal,binary=0,base=1;
  printf("10進数入力してね");
  scanf("%d",&decimal);

  while(decimal>0){
    binary=binary+(decimal%2)*base;
    decimal=decimal/2;
    base=base*10;
  }

  printf("2進数=%d\n",binary);

  return 0;
}

  
