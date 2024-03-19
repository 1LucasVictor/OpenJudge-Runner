#include<stdio.h>
#include<string.h>
#include<ctype.h>


int main(){

  char s[1000], c[10], r[1000];
  int q, i, j, a, b;

  scanf("%s", s);
  scanf("%d", &q);
  for(i=0;i<q;i++){
    scanf("%s", c);
    if(strcmp(c,"replace")==0){
      scanf("%d %d %s", &a, &b, r);
      for(j=a;j<=b;j++) s[j]=r[j-a];
    }else if(strcmp(c,"reverse")==0){
      scanf("%d %d", &a, &b);
      for(j=a;j<=b;j++) r[j-a]=s[j];
      for(j=0;j<b-a+1;j++) s[b-j]=r[j];
    }else if(strcmp(c, "print")==0){
      scanf("%d %d", &a, &b);
      for(j=a;j<=b;j++) printf("%c", s[j]);
      printf("\n");
    }
  }

  return 0;
}