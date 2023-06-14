#include<stdio.h>
int main(void){
  int a,b,c;
  char s;
  float kekka;
  scanf("%c",&s);
  scanf("%d%d",&a,&b);
  switch(s){
  case '+':kekka=a+(b); break;
  case '-':kekka=a-(b); break;
  case '*':kekka=a*(b); break;
  case '/':kekka=a/(b); break;
  }
  printf("%f\n",kekka);
  return 0;
}
  
