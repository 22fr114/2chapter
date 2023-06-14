#include<stdio.h>
int main(void){
  char a,b;
  scanf("%c",&a);
  b=a+10;
  if(('A'<=b && b<='Z') || ('a'<=b && b<='z')){
    printf("%c\n",b);
  }
  else
    {
      printf("out of range\n");
    }
  return 0;
}
    
