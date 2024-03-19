#include <stdio.h>

int main(void) {
  int a,b,c,d,i;
  char f[20],g[2000],h[2000];
  scanf("%s",g);
  scanf("%d",&a);
  for(b=0;b<a;b++){
    scanf("%s",f);
    scanf("%d%d",&c,&d);
   if(f[2]=='i'){
    for(i=0;i<=d-c;i++)
    h[i]=g[c+i];
    h[i]='\0';
    printf("%s\n",h);}
   else if(f[2]=='p'){
     scanf("%s",h);
     for(i=0;i<=d-c;i++)
     g[c+i]=h[i];}
   else {
     for(i=0;i<=d-c;i++)
      h[i]=g[d-i];
     for(i=0;i<=d-c;i++)
     g[c+i]=h[i];
   }
  }
  return 0;
}
