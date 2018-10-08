#include <stdio.h>

int main(){
  long long int n0,n1,n2,n3,n4,n5,cont=1;
  do{
    scanf("%lld",&n0);
    if(n0==0){break;}
    n1 = 3*n0;
    if(n1%2==0){
      n2=n1/2;
    }else{
      n2=(n1+1)/2;
    }
    n3=3*n2;
    n4=n3/9;
    if(n1%2==0){
      n5=2*n4;
    }else{
      n5=2*n4+1;
    }
    if(n5%2==0){
      printf("%lld. even %lld\n",cont,n4);
    }else{
      printf("%lld. odd %lld\n",cont,n4);
    }


    cont++;
  }while(n0!=0);

}
