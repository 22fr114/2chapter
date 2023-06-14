#include<stdio.h>
int main(void){
  int x,i;
  while(i!=-1111){
    scanf("%d",&i);
    x=i%3;
    switch(x){
    case 0:
      printf("zero\n");
      break;
    case 1:
      printf("one\n");
      break;
    case 2:
      printf("two\n");
      break;
    default:
      printf("Error\n");
      break;
    }
  }
    return 0;
}

      
