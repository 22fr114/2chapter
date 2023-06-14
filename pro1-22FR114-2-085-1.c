#include<stdio.h>
#define max 100
int main(void){
  double m[max][max]={0.0};
  int i,j,n;
  do{
    printf("何次");
    scanf("%d",&n);
  }while(n<1);

  for(i=0;i<n;++i)
    m[i][i]=1.0;

  for(i=0;i<n;++i){
    for(j=0;j<n;++j){
      printf("%3.0f",m[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  return 0;
}
