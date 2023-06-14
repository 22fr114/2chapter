#include<stdio.h>
int main(void){
  char str[3];
  int t,a=0,b=0,c=0,i;

  scanf("%c%c%c",&str[0],&str[1],&str[2]);

  
  for(i=0;i<=2;i++){
  if(str[i]=='a')
    a+=1;
  if(str[i]=='b')
    b+=1;
  if(str[i]=='c')
    c+=1;
  
  }

  if(a!=b && b!=c){
  if(a>b)
    t=a;
  else
    t=b;

  if(c>t)
    printf("c\n");
  else if(a>b)
    printf("a\n");
    else
      printf("b\n");
  
  }
  return 0;
}




    
