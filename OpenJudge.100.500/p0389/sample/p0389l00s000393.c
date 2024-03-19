#include <stdio.h>

int main() {
  int a,b,c,d,e,f=0;
  char g[1000]={};
  while(1){
    scanf("%s",g);
    if(g[0]!='-'){
      scanf("%d",&a);
      for(b=0;g[b]!='\0';b++){
        f=b+1;}
    for(b=0;b<a;b++){
      scanf("%d",&c);
      for(d=0;d<c;d++){
      g[f+d]=g[d];}
      for(d=0;d<f;d++){
        g[d]=g[c+d];}}
    for(b=0;b<f;b++){
      printf("%c",g[b]);}
    printf("\n");}
    else{break;}}
    return 0;
}
