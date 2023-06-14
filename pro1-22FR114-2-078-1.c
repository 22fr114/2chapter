#include<stdio.h>
int main(void){
  int x[20],i,j,tmp;
  for(i=0;i<=19;++i){
    scanf("%d",&x[i]);
  }
  for(i=0;i<=19;++i){
    for(j=i+1;j<=19;++j){
      if(x[i]>x[j]){
	tmp=x[i];
	x[i]=x[j];
	x[j]=tmp;
      }
    }
  }
  j=0;

  for(i=19;i>=17;i=i-1){
			++j;
			
			printf("%d番大きい%d\n",j ,x[i]);
   
  }
  return 0;
}

  
