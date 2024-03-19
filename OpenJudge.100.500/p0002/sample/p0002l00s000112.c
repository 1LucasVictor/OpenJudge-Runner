#include <stdio.h>
#include <math.h>

int main(){
  int a,b,c,i,n;

  scanf("%d",&n);
  for (i=0;i<n;i++){
    scanf("%d%d%d",&a,&b,&c);
    if (((pow(a,2)+pow(b,2))==pow(c,2)) || ((pow(c,2)+pow(b,2))==pow(a,2)) || (\
(pow(a,2)+pow(c,2))==pow(b,2))){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }

  return 0;
}