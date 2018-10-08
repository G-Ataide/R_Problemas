#include <stdio.h>

int primo(long long int n){
  long long int i,test=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return 1;
}
int main(){
  int a,b,c;
  scanf("%i %i",&a,&b);
  if(a<b){
    c=b;
    b=a;
    a=c;
  }
  int i;
  for(i=a;i>b;i--){
    if(primo(i)==1 && i!=1){
      printf("%i\n",i);
    }
  }
}
