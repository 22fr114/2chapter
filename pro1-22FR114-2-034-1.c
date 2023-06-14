#include<stdio.h>
#include<math.h>
int main(void){
  float a;
  scanf("%f",&a);
  if(a>=0)
    printf("%f\n",sqrt(a));
  else
    printf("%fi\n",sqrt(fabs(a)));
  return 0;
}
    
    
