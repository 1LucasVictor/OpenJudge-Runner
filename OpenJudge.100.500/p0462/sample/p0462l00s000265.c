#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int main(){
  long long int a;
  double ans,b;
  char s[100];
    

  //scanf("%lld %lf",&a,&b);
  if(fgets(s,sizeof(s),stdin) == 1);
  a = atol(strtok(s, " "));
  b = atof(strtok(NULL, " "));
  //printf("%lld\n",a);
  //printf("%f\n",b);
  ans = ((double)a)*b;
  printf("%lld\n",(long long int)ans);
  
  return 0;
}