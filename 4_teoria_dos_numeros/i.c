#include <stdio.h>

int main(){
  int result,i;
  char n[20];
  do{
    scanf("%s",n);
    for(i=0;n[i]!='\0';i++);
    if(i>2 && (n[1]=='x'||n[1]=='X')){
      sscanf(n,"%x", &result);
      printf("%i\n",result);
    }else{
      sscanf(n,"%i", &result);
      printf("0x%X\n",result);
    }
  }while(n[0]!='-'&&n[1]!='1');
}
