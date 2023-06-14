#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(a%2==0 && b%2==0)
    printf("%d\n",a+b);
  if(a%2==1 || b%2==1){
    c=a-(b);
    if(c>0)
    printf("%d\n",c);
    else
      printf("%d\n",-(c));
  }
  return 0;
}
  
