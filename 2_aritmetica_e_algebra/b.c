#include <stdio.h>
int primo(long long int n){
  long long int i,test=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  long long int a,b,c,d;
  scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
  if((primo(a)==1)&&(primo(b)==1)&&(primo(c)==1)&&(primo(d)==1)){
    printf("%lld\n",a*b*c*d);
  }else{
    printf("SEM PRODUTO\n");
  }
}
