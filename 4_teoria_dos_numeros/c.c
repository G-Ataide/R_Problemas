#include <stdio.h>

unsigned long long int primo(long long int n){
  long long int i,test=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  unsigned long long int n,i;
  int pri=0;
  scanf("%lld",&n);
  for(i=0;i<n;i++){
    if(primo(i)==1 && i!=0 && i!=1){
      printf("%lld ",i);
      pri++;
    }
  }
  if(pri=0){
    printf("NO\n");
  }else{
    printf("\n");
  }
}
