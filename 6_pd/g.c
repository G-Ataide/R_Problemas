#include <stdio.h>

unsigned long long int fibonacci(int num){
  if(num==1 || num==2){
    return 1;
  }
  else{
    return fibonacci(num-1) + fibonacci(num-2);
  }
}

int main(){
  int i,j,n;
  while(scanf("%i",&n)!=EOF){
    printf("%lld\n",fibonacci(n));
  }
  return 0;
}
