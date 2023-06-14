#include<stdio.h>
int main(void){
  char a;
  scanf("%c",&a);
  switch(a){
  case 'a':
    printf("apple\n");
    break;
  case 'b':
    printf("banana\n");
    break;
  case 'c':
    printf("cherry\n");
    break;
  default:
    printf("grape\n");
  }
  return 0;
}
