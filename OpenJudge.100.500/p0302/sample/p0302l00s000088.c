#include<stdio.h>
#include<string.h>
int D[300000000],a,b;
int henkan(char s[12]){
  int i=0,j,a=0,b=0;
  while(s[i]){
    switch(s[i]){
    case 'A':a=1;for(j=0;j<i;j++){a=a*4;}break;
    case 'C':a=2;for(j=0;j<i;j++){a=a*4;}break;
    case 'G':a=3;for(j=0;j<i;j++){a=a*4;}break;
    case 'T':a=4;for(j=0;j<i;j++){a=a*4;}break;
    }
    i++;
    b=a+b;
  }
  return(b);
}
int main(){
  int i,n,F[1000000],f=0,h;
  char com[10],s[20];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s",com);
    scanf("%s",s);
    h=henkan(s);
    if(strcmp(com,"insert")==0){
      D[h]=1;
    }
    else if(strcmp(com,"find")==0){
      if(D[h]==1){
	F[f]=1;
      }
      else if(D[h]!=1){
	F[f]=2;
      }
      f++;
    }
  }
  for(i=0;i<f;i++){
    if(F[i]==1) printf("yes\n");
    else if(F[i]==2) printf("no\n");
    else printf("error\n");
  }
}

