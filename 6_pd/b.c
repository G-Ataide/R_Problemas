#include <stdio.h>

int main(){
  char str[100];
  int n,j;
  scanf("%i",&n);
  for(j=0;j<n;j++){
    scanf("%s",str);
    int i;
    for(i=0;str[i]!='\0';i++);
    if(i<=10){
      printf("%s\n",str);
    }else{
      printf("%c",str[0]);
      printf("%i",i-2);
      printf("%c\n",str[i-1]);
    }
  }
  return 0;
}
