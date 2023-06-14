#include<stdio.h>
int main(void){
  float s,a=10000,r=1.2,x,t;
  int y,b;
  
  scanf("%f",&x);
  y=x;
  t=x-y;
  if(t!=0 ||x<0){
    printf("エラー\n");
    
  }else{
    s=(a+x)*r;
    b=s;
    if(a-s!=0)
      b+=1;
  }
    printf("%d\n",b);
    
  return 0;
}

  
