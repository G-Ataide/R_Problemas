#include <stdio.h>
#include <math.h>



int main(){
  int a,i,j,qt=0;
  int digito;
  do{
    scanf("%i",&a);
    if(a==0){break;}
    qt=sqrt(a);
    i=qt;
    for(j=0;qt!=0;j++){
      if(qt/10==0){
        digito = qt/10;
      }
      qt/=10;
    }
    printf("Primeiro Digito: %i",digito);
    // for()
    // i*=j;
    // printf("%i",j);
    printf("%i\n",i);
  }while(a!=0);
}
