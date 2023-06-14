#include<stdio.h>
int main(void){
  int i,x;
  while(i!=-1){
    scanf("%d",&i);
    x=i%2;
    switch(x){
      
      case 0:
	printf("0\n");
	break;
    case 1:
      printf("1\n");
      break;
    }
  }
  return 0;
}
  
