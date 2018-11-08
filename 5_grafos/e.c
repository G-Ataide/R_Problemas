#include <stdio.h>

long long int result[256]={0};
unsigned long long int cont=0;

unsigned long long int bin(unsigned long long int n){
  if(n==0){
    result[++cont] = 0;
    return 0;
  }else if(n==1){
    result[++cont] = 1;
    return 0;
  }else{
    result[++cont] = n%2;
    bin(n/2);
  }
}

int main(){
  unsigned long long int n;
  int i;
  scanf("%lld",&n);
  bin(n);
  for(;cont>0;cont--){
    printf("%lld\n",result[cont]);
  }
}
