#include<stdio.h>
int main(void){
  float a,n=0,sum=0,ave;
  while(a!=0)
    {
      scanf("%f\n",&a);
      n+=1;
      sum+=a;
    }
  ave=sum/(n-1);
  printf("%f\n",ave);
}

      
