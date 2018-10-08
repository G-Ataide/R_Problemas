#include <bits/stdc++.h>

using namespace std;

int main(){
  char num[15];
  int result;
  while(scanf("%s", num), num[0] != '-'){
    if (strlen(num) > 2 && (num[1] == 'x' || num[1] =='X')){
      sscanf(num,"%x", &result);
      printf("%d\n", result);
    }else{
      sscanf(num, "%d", &result);
      printf("0x%X\n", result);
    }
  }
  return 0;
}
