#include<stdio.h>
#include<string.h>

void pr(void);
void rev(void);
void rep(void);

char str[1001];

int main(){
  int count, i;
  char com[8];

  scanf("%s %d",str,&count);

  for(i=0;i<count;i++){
    scanf("%s",com);

    if(strcmp(com,"print")==0) pr();
    else if(strcmp(com,"reverse")==0) rev();
    else if(strcmp(com,"replace")==0) rep();
  }
  
  return 0;
}


void pr(void){
  int a, b;
  
  scanf("%d %d",&a,&b);
  for(;a<=b;a++) printf("%c",str[a]);
  printf("\n");  
}

void rev(void){
  int a, b, i;
  char sub;

  scanf("%d %d",&a,&b);
  for(i=0;i<=(b-a)/2;i++){
    sub=str[a+i];
    str[a+i]=str[b-i];
    str[b-i]=sub;
  }
}

void rep(void){
  int a, b, i;
  char change[1001];

  scanf("%d %d %s",&a,&b,change);
  for(i=0;i+a<=b;i++) str[a+i]=change[i];
}

