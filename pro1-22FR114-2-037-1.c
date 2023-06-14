#include<stdio.h>
int main(void){
  char a;
  scanf("%c",&a);
  if('A'<=a && a<='Z')
    printf("%c\n",a);
  if('a'<=a && a<='z')
    printf("%c\n",a=a-32);
  return 0;
}
    
