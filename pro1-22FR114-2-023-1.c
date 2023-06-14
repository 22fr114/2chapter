#include<stdio.h>
int main(void){
  int a;
  scanf("%d",&a);
  if(a%2==0)
    printf("X\n");
    else
      printf("1\n");
  if(a%2==1 && a%5==0)
    printf("5\n");
  return 0;
}
