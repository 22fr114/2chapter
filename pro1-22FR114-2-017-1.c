#include<stdio.h>
#include<math.h>
int main(void){
  float a;
  scanf("%f",&a);
  if(a<0){
    printf("エラー\n");
  }
  else{
    printf("%f\n",sqrt(a));
  }
  return 0;
}
