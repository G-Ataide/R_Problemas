#include <stdio.h>
long long int fat(long long int n){
  long long int fat=1;
  while(n > 1){
    fat = fat * n;
    n--;
  }
  return fat;
}

int main(){
  long long int c=0,n,m;
  do{
    scanf("%lld",&n);
    scanf("%lld",&m);
    if(n==0 && m==0){printf("BREIKEI");break;}
    c=fat(n)/(fat(n-m)*fat(m));
    printf("%lld things taken %lld at a time is %lld exactly.\n",n,m,c);
  }while(n!=0 && m!=0);
}
