#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d",&a);
  b=a%2;
  c=a%3;
  if(b==0 || c==0)
    printf("OK\n");
  else
    printf("NG\n");
  return 0;
}
   
