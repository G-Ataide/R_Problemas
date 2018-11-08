#include <stdio.h>

int main(){
  int i,num,qt_impar=0,qt,cont=0,ant=0;
  scanf("%i",&qt);
  for(i=0;i<qt;i++){
    scanf("%i",&num);
    if(num%2!=0){
      qt_impar++;
    }
    if(num>ant){
      ant=num;
      cont++;
    }
  }
  if(cont==qt){
    printf("%i %i",1,qt_impar);
  }else{
    printf("%i %i",0,qt_impar);
  }

}
