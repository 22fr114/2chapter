#include<stdio.h>
int main(void){
  int a,b,r,tmp,x,y;
  for(a=2;a<=100;++a){
    for(b=2;b<=100;++b){
      x=a;y=b;
      if(a<b){
	r=b%a;
      }else{
      r=a%b;
      }
      
      while(r!=0){
	a=b;
	b=r;
	r=a%b;
      }
      
      if(b==1)
	printf("(%d,%d)\n",x,y);
      a=x;b=y;
    }
  }
  return 0;
}
      
  
