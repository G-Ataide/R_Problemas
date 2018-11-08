#include <stdio.h>

int primo(long long int n){
  long long int i,test=0;
  for(i=2;i*i<=n;i++){
    if(n%i==0) return 0;
  }
  return 1;
}

int main(){
  char palavra[200];
  while(scanf("%s",palavra)!=EOF){
    int i,result=0;
    for(i=0;palavra[i]!='\0';i++){
      if(palavra[i]>=65 && palavra[i]<=90){
        result+=palavra[i]-38;
      }else if(palavra[i]>=97 && palavra[i]<=122){
        result+=palavra[i]-96;
      }
    }
    if(primo(result)==1){
      printf("It is a prime word.\n");
    }else{
      printf("It is not a prime word.\n");
    }
  }
}
