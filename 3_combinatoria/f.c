#include <stdio.h>

int main(){
  unsigned long long int num,i=0,result=0;
  scanf("%lld",&num);
  result = (num/5) + (num/25) + (num/125);
  printf("%lld",result);
}
