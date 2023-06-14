#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(b<a){
    c=a;
    a=b;
    b=c;
    printf("%d\n%d\n",a,b);
  }
  return 0;
}
  
