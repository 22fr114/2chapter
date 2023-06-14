#include<stdio.h>
int main(void){
  float a,b,s,t;
  
  printf("何時");
  scanf("%f",&a);
  printf("何分");
  scanf("%f",&b);
  s=a*60*0.5+b*6;
  printf("%f\n",s);
  return 0;
}
  
