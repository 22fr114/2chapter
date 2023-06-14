#include<stdio.h>
int main(void){
  int s,n,i,sum=0,sum2=0;
  scanf("%d",&n);
  for(i=0;i<=n;i+=2)
    {
      sum+=i;
    }
  for(s=0;s<=10000;s+=2)
    {
      sum2+=s;
    }
  printf("%d\n%d\n",sum,sum2);
  return 0;
}
