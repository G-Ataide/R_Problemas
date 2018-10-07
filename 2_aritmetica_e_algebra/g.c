#include <stdio.h>
#include <math.h>

int main(){
  int t,i,x;
  long long int y;
  scanf("%i",&t);
  for(i=0;i<t;i++){
    scanf("%lld",&y);
    printf("%.0f\n",sqrt(y));
  }
}
