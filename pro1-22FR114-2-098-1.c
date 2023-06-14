#include<stdio.h>
int main(void){
  float a,b,c,i;
  
  printf("現金");
  scanf("%f",&a);
  printf("年利率");
  scanf("%f",&b);
  printf("預金期間");
  scanf("%f",&c);

  for(i=1;i<=c;++i){
    a*=(1+b/100);
    printf("元利合計=%f\n",a);
  }

  return 0;
}

  
