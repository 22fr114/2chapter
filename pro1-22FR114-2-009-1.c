#include<stdio.h>
int main(void){
  char a,b,c,max,min,mid;
  scanf("%c\n%c\n%c",&a,&b,&c);
  
  
  if(a<b && c<b){
    max=b;
    if(a>c){
      min=c;
	mid=a;
    }
    else{
	min=a;
	  mid=c;
    }
  }
  
  if(b<a && c<a){
    
    max=a;
    if(b>c){
      min=c;
	mid=b;
    }
    else{
      min=b;
	mid=c;
    }
  }
  if(a<c && b<c){
    max=c;
    if(a>b){
      min=b;
	mid=a;
    }
    else{
      min=a;
	mid=b;
    }
    
  }


  
    
   
  printf("%x\n%x\n%x\n",max,mid,min);
  
  return 0;
}
