#include<stdio.h>
int main(void){
  int x[20],i,even=0,odd=0,Mult;
  for(i=0;i<=19;++i){
    scanf("%d",&x[i]);
    if(x[i]%2==0)
      even+=x[i];
    else
      odd+=x[i];
  }
  Mult=even*odd;
  printf("%d\n",Mult);
}

 
      
