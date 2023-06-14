#include<stdio.h>
int main(void){
  float g,l,s,t;
  printf("体重");
  scanf("%f",&g);
  printf("身長");
  scanf("%f",&l);
  s=(l-100)*0.9;
  t=(g-s)/s*100;
  if(t>=10){
    printf("太りすぎです。\n");
  }else if(t<=-10){
      printf("瘦せすぎです。\n");
    }else{
      printf("標準です。\n");
    }

  return 0;
}
  
  
  
