#include <stdio.h>

int main(void) {
  int a,b,c,d,g[100][100],t[100],m;
  scanf("%d %d",&a,&b);
  for(c=0;c<a;c++){
   for(d=0;d<b;d++){
     scanf("%d",&g[c][d]);
  }
}
  for(c=0;c<b;c++){
    scanf("%d",&t[c]);
}
  for(c=0;c<a;c++){
  m=0;
  for(d=0;d<b;d++){
    m+=g[c][d]*t[d];
    }
   printf("%d\n",m);
  }
  return 0;
}
