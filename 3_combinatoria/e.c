#include <stdio.h>

int fat(long long int n){
  long long int fat=1;
  while(n > 1){
    fat = fat * n;
    n--;
  }
  return fat;
}

int main(){
  long long int num,i,result=0;
  for(i=0;i<5;i++){
    scanf("%lld",&num);
    if(num%3==0){result+=fat(num);}
  }
  printf("%lld\n",result);
}
