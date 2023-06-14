#include<stdio.h>
#define  ES(r)  (r*r*3.141592)
int main(void){
  double x,y,sx,sy;
  scanf("%lf%lf",&x,&y);
  
    sx=ES(x);
    sy=ES(y);
    if(x<y){
      printf("r=%f  S=%.4f\nr=%f  S=%.4f\n",x,sx,y,sy);
  }
  else{
    printf("r=%f  S=%.4f\nr=%f  S=%.4f\n",y,sy,x,sx);
  }
    return 0;
}
    
    
  
