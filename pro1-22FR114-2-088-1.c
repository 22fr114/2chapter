#include<stdio.h>
int main(void){
  int a,b,c;
  for(a=1;a<=100;++a){
    for(b=1;b<=100;++b){
      for(c=1;c<=100;++c){
	if(a*a==b*b+c*c || b*b==a*a+c*c || c*c==a*a+b*b){
	  printf("(%d,%d,%d)\n",a,b,c);
	}
      }
    }
  }
  return 0;
}

  
