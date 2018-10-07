#include <stdio.h>
#include <math.h>

int main(){
  int n1,n2,resto;
  scanf("%i%i",&n1,&n2);
  resto=n1%n2;
  while(resto!=0){
    n1=n2;
    n2=resto;
    resto=n1%n2;
  }
  printf("%i",n2);
}
