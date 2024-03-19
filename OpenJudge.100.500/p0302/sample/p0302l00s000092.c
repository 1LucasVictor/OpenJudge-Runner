#include <stdio.h>
#include <string.h>
#define N 14
#define MAX 1000000
 
char G[MAX][N];
int top=0;
 
 
int getChar(char c){
  if(c=='A') return 1;
  else if(c == 'C') return 2;
  else if(c=='G') return 3;
  else if(c=='T') return 4;
  else return 0;
}
 
int get(char a[]){
  int sum=0;
  int p=1,i;
  for( i = 0; i < strlen(a); i++){
    sum += p*(getChar(a[i]));
    p *= 5;
  }
  return sum;
}
 
int g1(int data){return data % MAX;}
int g2(int data){return 1 + (data % (MAX-1));}
 
int find(char a[]){
  int key,i,g;
  key = get(a);
  i=0;
  while(1){
    g = (g1(key)+ i * g2(key)) % MAX;
    if(strcmp(G[g],a)==0) return 1;
    else if(strlen(G[g])==0) return 0;
    i++;
  }
  return 0;
}
 
int insert(char a[]){
  int key,i,g;
  key = get(a);
  i=0;
  while(1){
    g = (g1(key) + i * g2(key)) % MAX;
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
  char a[MAX][3],c[MAX],d[MAX];
 
  for(i=0;i<MAX;i++){
    G[i][0] = '\0';
  }
  scanf("%d",&b);
  for(i=0;i<b;i++){
    scanf("%s%s",a[i],c);
  if(a[i][0] == 'i'){
    insert(c);
  }
  else{
    if(find(c)){
      printf("yes\n");
      
    }
    else{
      printf("no\n");
      
    }
  }
}
return 0;
}
