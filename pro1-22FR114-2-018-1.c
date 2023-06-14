#include<stdio.h>
#define   S(r)    (a/4*1.7320508)
int main(void){
  float a;
  scanf("%f",&a);
  if(a>=0){
    printf("%.15f\n",S(a));
  }
  return 0;
}
  
