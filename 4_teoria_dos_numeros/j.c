#include <stdio.h>

unsigned long long int primo(unsigned long long int n){
  unsigned long long int i,test=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  unsigned long long int a,i,cont=0;
  scanf("%lld",&a);
  for(i=0;a>cont;i++){
    if(primo(i)==1 && i!=1 && i!=0){
      printf("%lld\n",i);
      cont++;
    }
  }
}
