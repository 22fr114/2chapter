#include<stdio.h>
#include<math.h>
int main(void){
  float a,b=0,c=1,i=0,s,t;
  while(a!=-1){
    scanf("%f",&a);
    if(a==-1)
      break;
    
    b+=a;
    c*=a;
    ++i;
    s=b/i;
    t=pow(c,1/i);
    printf("相加平均＝%f\n相乗平均＝%f\n",s,t);
  }
  return 0;
}
  
  
  
