#include<stdio.h>
int main(void){
  int a,b,c;
  scanf("%d%d",&a,&b);
  if(b==0){
    printf("Illegal Number\n");
  }
  else{
    c=a/b;
      printf("%d\n",c);
  }
  return 0;
}
    
