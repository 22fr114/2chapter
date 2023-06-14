#include<stdio.h>
int main(void){
  int i,j;
  int a=20;

  for(j=2;j<=a;j++){
    for(i=2;i<=j;i++){
      if((j%i)==0){
	if(i==j)
	  printf("kekka=%d\n",j);
	else
	  break;
      }
    }
  }
  return 0;
}
