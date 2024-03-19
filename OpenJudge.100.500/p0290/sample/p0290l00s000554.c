#include <stdio.h>
#include <math.h>
int gcd(x,y){
  if (y==0){
    return x;
  }else{
    return gcd(y,x%y);
  }
}

int main()
{
  int x,n,i,j,g;
  int count=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&x);
    g=1;
    for(j=1;j<=sqrt(x);j++){
      int m=gcd(j,x);
      if (m>g){
        g=m;
        break;
      }
    }
    if (g==1){
      count++;
    }
  }

  printf("%d\n",count);

  return 0;
}