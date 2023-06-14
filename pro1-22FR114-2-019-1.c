#include<stdio.h>
int main(void){
  int l,m,n;
  scanf("%d%d%d",&l,&m,&n);
  if(l+m>n && m+n>l && n+l>m){
    printf("ok\n");
  }
  else{
    printf("not\n");
  }
  return 0;
}
  
