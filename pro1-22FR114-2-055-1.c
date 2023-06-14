#include<stdio.h>
#include<math.h>
int main(void){
  long double n,i,x;
  for(i=1; ;++i)
    {
      x=pow(2,i);
      
      if(100000000<=x && x<=200000000){
      printf("%Lf\n",i);
      break;
      }
      
	
      
    }
  return 0;
}

      
