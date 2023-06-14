#include<stdio.h>
#include<math.h>
int main(void){
  int n,i,sum=0,s;
  scanf("%d",&n);
  s=sqrt(n)+1;
  printf("%d\n",s);
    for(i=s;i<=n;++i){
    sum+=i;
  }
    printf("%d\n",sum);
  return 0;
}
