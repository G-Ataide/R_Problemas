#include <stdio.h>

int main(){
  int n;
  do{
    int fat=1;
    scanf("%i",&n);
    if(n==-1){break;}
  	while(n > 1){
  		fat = fat * n;
  		n--;
  	}
    printf("%i\n",fat);
  }while(n!=-1);
}
