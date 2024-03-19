#include<stdio.h>
#include<string.h>
#define N 14
#define M 1000000
char G[M][N];
int getChar(char c){
  if(c=='A')return 1;
  else if(c == 'C')return 2;
  else if(c=='G')return 3;
  else if(c=='T')return 4;
  else return 0;
}

int getdata(char a[]){
  int sum=0;
  int p=1,i;
  for(i=0;i<strlen(a);i++){
    sum += p*(getChar(a[i]));
    p *= 5;
  }
  return sum;
}

int g1(int data){return
  data % M;
}
int g2(int data){
  return 1+(data % (M-1));
}

int finddata(char a[]){
  int key,i,g;
  key = getdata(a);
  i=0;
  while(1){
    g = (g1(key)+ i*g2(key))%M;
    if(strcmp(G[g],a)==0) return 1;
    else if(strlen(G[g])==0) return 0;
    i++;
  }
  return 0;
}

int insert(char a[]){
  int key,i,g;
  key = getdata(a);
  i=0;
  while(1){
    g = (g1(key) + i*g2(key))%M;
    if(strcmp(G[g],a)==0)return 1;
    else if(strlen(G[g])==0){
      strcpy(G[g],a);
      return 0;
    }
    i++;
  }
  return 0;
}

int main(){
  int i,j=0,b,k;
  char a[M][3],c[M],d[M];
  for(i=0;i<M;i++){
    G[i][0] = '\0';
  }
  scanf("%d",&b);
  for(i=0;i<b;i++){
    scanf("%s%s",a[i],c);
  if(a[i][0] == 'i'){
    insert(c);
  }
  else{
    if(finddata(c)){
      printf("yes\n");
    }
    else{
      printf("no\n");
    }
  }
}
return 0;
}