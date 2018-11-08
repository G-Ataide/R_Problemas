#include <stdio.h>

unsigned long long int fat(unsigned long long int n){
  unsigned long long int fat=1;
  if(n==0){
    return 1;
  }
  while(n > 1){
    fat = fat * n;
    n--;
  }
  return fat;
}

int main(){
  int i,j;
  scanf("%i",&i);
  for(j=0;j<i;j++){
    int tam=0;
    unsigned long long int num;
    scanf("%lld",&num);
    num = fat(num);
    while(num/10!=0){
      num/=10;
      tam++;
    }
    printf("%i\n",tam+1);
  }

}
