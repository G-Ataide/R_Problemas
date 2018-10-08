#include <stdio.h>

unsigned long long int primo(long long int n){
  long long int i,test=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return 1;
}

int main(){
  int num;
  while(scanf("%i",&num)!=EOF){
    for(i=0;primo(num+i)==1;i++){
      printf("%i\n",i);
    }
  }
}
