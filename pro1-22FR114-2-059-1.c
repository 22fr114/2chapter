#include<stdio.h>
int main(void){
  int a,b=0;
  for( ; ; ){
    
      scanf("%d",&a);
      
      if(a==0)
	break;
      
      
      
      else if(b<a)
       b=a;
	
    }
  printf("%d\n",b);
  return 0;
}
