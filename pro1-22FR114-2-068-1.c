#include<stdio.h>
int main(void){
  int m,n=1,s,sum=0;
  scanf("%d",&m);
  do{
    s=n*n;
    ++n;
    sum+=s;
  }while(sum<=m);
  n=n-1;
  
  printf("%d\n",n);
  sum=0;
  n=1;
  m=519822;
  do{
    s=n*n;
    ++n;
    sum+=s;
  }while(sum<=m);
  n=n-1;
  printf("%d\n",n);
  return 0;
}
    
