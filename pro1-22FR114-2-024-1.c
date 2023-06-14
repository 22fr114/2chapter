#include<stdio.h>
int main(void){
  int a,b,c,d;
  scanf("%d%d%d",&a,&b,&c);
  d=b*b-4*a*c;
  if(d>0)
    printf("異なる二つの実数解\n");
  else if(d==0)
    printf("１つの実数解\n");
  else
    printf("異なる２つの虚数解\n");
  
  return 0;
}
