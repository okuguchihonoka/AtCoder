#include<stdio.h>

int main(void){

  int a,b;

  scanf("%d\n%d",&a,&b);
  
  if(a >= 0 && a <= 2000){
    if(b >= 0 && b <= 2000){
      printf("%d\n",a - b);
    }
  }
  
  return 0;
}
