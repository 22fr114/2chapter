#include<stdio.h>
int main(void){
  int i,j;
  for(i=0;i<=4;i++){
    for(j=0;j<=i;j++){
      printf("%d\t",j);
    }
    printf("\n");
  }
  return 0;
}
