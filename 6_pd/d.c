#include <stdio.h>

int main(){
  unsigned long long int numero,men;
  unsigned long long int vet[256]={0};
  int t,j,z;
  scanf("%i",&j);
  for(t=0;t<j;t++){
    z=0;
    scanf("%lld",&numero);
    while(numero/10!=0){
      if(vet[z]>numero%10){
        
      }

      numero/=10;
      z++;
    }
  }
}
