#include<stdio.h>
int main(void){
  int a,b,i;
  scanf("%d",&a);
  for(i=2;i<a;++i){
    if(a%i==0){
      b=1;
      break;
    }
  }
  
  if(a<=0){
    printf("Error\n");
  }else if(b!=1 && a!=1){
    printf("OK\n");
  }else{
    printf("NG\n");
  }
  return 0;
}
  
  
  
