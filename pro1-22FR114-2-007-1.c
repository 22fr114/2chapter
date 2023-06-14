#include<stdio.h>
int main(void){
  int  a;
  scanf("%d",&a);
  a= a % 2;
  switch(a){
  case 0:
    printf("even\n");
    break;
  case 1:
    printf("odd\n");
    break;
  default:
    printf("Illegal\n");
  }
  return 0;
}
  
  

  
