#include <stdio.h>
#include <math.h>



int main(){
  int a,i,j,qt=0, k;
  int digito;
  do{
    scanf("%i",&a);
    if(a==0){break;}
    qt=sqrt(a);
    i=qt;
    for(j=0;qt!=0;j++){
      qt/=10;
    }
    k=j;
    while((j-1)>0){
      i /= 10;
      j--;
    }
    i *= (k-1)*10;
    printf("%i\n",i);
  }while(a!=0);
}
