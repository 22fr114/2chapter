#include<stdio.h>
#include<math.h>
int main(void){
  int i,sum,number[100],total;
  
  scanf("%d",&total);
  
  for(i=0;i<total;++i){
      scanf("%d",&number[i]);
      sum+=fabs(number[i]);
  }
  printf("%d\n",sum);
}

    

    
