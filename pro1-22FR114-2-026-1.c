#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d",&a);
  b=a%3;
  switch(b){
  case 0:
    printf("zero\n");
    break;
  case 1:
    printf("one\n");
    break;
  default:
    printf("Error\n");
  }
  return 0;
}
