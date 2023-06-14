#include<stdio.h>
int main(void){
  char a;
  int i;
  printf("小文字を入力してね");
  scanf("%c",&a);
  for(i=1;i<=5;++i)
    {
    printf("%c\n",a);
    }
  return 0;
}
