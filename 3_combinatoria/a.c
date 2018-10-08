#include <stdio.h>

int main(){
  int s;
  scanf("%d", &s);
  int t = (s>>1) + ((s&1) ? 2 : 1);
  printf("%d:\n", s);
  for(int i = 2; i < t; i++){
    int r = s % ((i << 1) - 1);
    if(r == 0 || r == i) printf("%d,%d\n", i, i-1);
    if(s % i == 0) printf("%d,%d\n", i, i);
  }
  return 0;
}
