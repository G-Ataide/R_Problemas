#include <stdio.h>
#include <math.h>

int main(){
  int a,b,i,result,soma=0,aux;
  scanf("%i%i",&a,&b);
  result = pow(a,b);
  printf("%i\n",result);
  while(result/10!=0){
    aux = result%10;
    printf("AUX = %i",aux);
    printf("RESULT = %i",result);
    result = result/10;
    soma+=aux;
  }
  printf("%i\n",soma);
}
