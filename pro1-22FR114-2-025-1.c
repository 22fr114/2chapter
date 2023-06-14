#include<stdio.h>
#define  DZ(x,y)   (sqrt(x*x-y*y)) 
#include<math.h>
int main(void){
  float x,y,s,t;
  scanf("%f%f",&x,&y);
  t=x*x-y*y;
  
  if(t>=0)
    printf("%f\n",DZ(x,y));
  
  else{
    t=t*(-1);
      printf("j%f\n",sqrt(t));
  }
  
  
  printf("%f\n",DZ(23.8,12.4));
  return 0;
}
  
  
  
