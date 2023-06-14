#include<stdio.h>
int main(void){
  int a,b,c,d;
  for(a=1;a<=9;++a){
    for(b=1;b<=9;++b){
      for(c=1;c<=9;++c){
	for(d=1;d<=9;++d){
	  if(a+b+c+d==10) printf("%d,%d,%d,%d(%d+%d+%d+%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a+b+c-d==10) printf("%d,%d,%d,%d(%d+%d+%d-%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a+b-c+d==10) printf("%d,%d,%d,%d(%d+%d-%d+%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a+b-c-d==10) printf("%d,%d,%d,%d(%d+%d-%d-%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a-b+c+d==10) printf("%d,%d,%d,%d(%d-%d+%d+%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a-b+c-d==10) printf("%d,%d,%d,%d(%d-%d+%d-%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a-b-c+d==10) printf("%d,%d,%d,%d(%d-%d-%d+%d=10)\n",a,b,c,d,a,b,c,d);
	  if(a-b-c-d==10) printf("%d,%d,%d,%d(%d-%d-%d-%d=10)\n",a,b,c,d,a,b,c,d);
	}
      }
    }
  }
  return 0;
}
