#include<stdio.h>
int main(void){
  char a;
  scanf("%c",&a);
  switch(a){
  case 'd':
    printf("degree\n");
  break;
  case 'r':
    printf("radian\n");
  break;
  default:
    printf("Illegal\n");
  }
  return 0;
}
