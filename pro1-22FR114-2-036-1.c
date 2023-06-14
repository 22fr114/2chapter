#include<stdio.h>
int main(void){
  int a,b,kekka;
  char op;
  scanf("%c",&op);
  scanf("%d%d",&a,&b);
  switch(op){
  case '+': kekka=a+(b); break;
  case '-': kekka=a-(b); break;
  case '*': kekka=a*(b); break;
  }
  printf("%d\n",kekka);
  return 0;
}
  
