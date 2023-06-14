#include<stdio.h>
int main(void){
  int i=0,sum=0;
  while(i<20000)
    {
      i+=2;
      sum+=i;
     
    }
  printf("%d\n",sum);
  return 0;
}
  
