#include<stdio.h>
int main(void){
  char a;
  scanf("%c",&a);
  if(a >= 'A' && a<= 'Z')
  {
    printf("Large\n");
  }
  else if(a>= 'a' && a<= 'z')
    {
    printf("Small\n");
    }
    else
      {
	printf("Not an alphabet\n");
      }
    return 0;
    }
