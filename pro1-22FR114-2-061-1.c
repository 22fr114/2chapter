#include<stdio.h>
int main(void){
  int j,s,i,tmp,flag,number[100];
  for(i=0; ;++i){
    scanf("%d",&number[i]);
    if(number[i]==0)
      break;
  }
  s=i;
  for(i=0;i<s;++i){
    for(j=i+1;j<s;++j){
      if(number[i]>number[j]){
	tmp=number[i];
	number[i]=number[j];
	number[j]=tmp;
      }
    }
  }
  for(i=s-1;i>=0;i--){
    printf("%d\n",number[i]);
  }
  return 0;
}

