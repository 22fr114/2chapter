#include<stdio.h>
int main(void){
  float a,b,c;
  scanf("%f%f",&a,&b);
  c=(a+(b))/2;
  if(c>=0)
    printf("Plus\n");
  else
    printf("Minus\n");
  return 0;
}
