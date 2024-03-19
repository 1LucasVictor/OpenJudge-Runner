#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
int getkey(char []);
int h1(int);
int h2(int);
int Getc(char);
#define M 1046527
#define L 14
typedef struct a{
  char H[L];
  bool X;
}has;
has hash[M];
void insert(char []);
bool find(char []);
int main(){
  int n,i;
  char X[L],command[7];
  for(i=0;i<M;i++){
    hash[i].X=false;
    hash[i].H[0]='\0';
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%s %s",command,X);
    if(command[0]=='i'){
      insert(X);
    }
    else{
      if(find(X))printf("yes\n");
      else printf("no\n");
    }
  }
  return 0;
}
int Getc(char str){
  if(str=='A')return 1;
  else if(str=='C')return 2;
  else if(str=='G')return 3;
  else if(str=='T')return 4;
  else return 0;
}
int h1(int x){
  return x%M;
}
int h2(int x){
  return 1+(x%(M-1));
}
int getkey(char str[]){
  int sum=0,i,p=1;
  for(i=0;i<strlen(str);i++){
    sum+=p*Getc(str[i]);
    p*=3;
  }
  return sum;
}
void insert(char str[]){
  
  int num,i,h;
  num=getkey(str);
  for(i=0;;i++){
    h=(h1(num)+i*h2(num));
    if(!hash[h].X){
      strcpy(hash[h].H,str);
      hash[h].X=true;
      return;
    }
  }
}
bool find(char str[])
{
  int i,num,h;
  num=getkey(str);
  for(i=0;;i++){
     h=(h1(num)+i*h2(num));
     if(!strcmp(hash[h].H,str))return true;
     else if(strlen(hash[h].H)==0)return false;
  }
  return false;
}

