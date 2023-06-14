#include<stdio.h>
#define PAI 3.14159
int main(void){
  float r,s,l;

  do{
    scanf("%f",&r);
  l=2*r*PAI;
  s=r*r*PAI;
 
    printf("mennseki%.4f  ennshuu%.4f\n",s,l);
  }while(r>=0);
  return 0;
}
  
    
    
