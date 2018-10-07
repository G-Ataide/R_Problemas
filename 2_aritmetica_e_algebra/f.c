#include <stdio.h>
int main(){
  long long int n,PROD=1;
  while(scanf("%lld",&n)!= EOF){
    PROD*=n;
  }
  printf("Prod = %lld\n",PROD);
}
