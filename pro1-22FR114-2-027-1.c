#include<stdio.h>
int main(void){
  int a;
  scanf("%d",&a);
  if(a%3==0){
    printf("zero\n");
  }else if(a%3==1){
    printf("one\n");
  }else{
    printf("Error\n");
  }
  return 0;
}
  
