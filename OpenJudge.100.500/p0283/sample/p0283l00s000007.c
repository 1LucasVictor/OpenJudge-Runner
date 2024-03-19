#include <stdio.h>
#define MAX 8
#define ON 1
#define OFF -1
#define TRUE 2
#define FALSE 3
//recursive
int x[MAX];//yoko,
int y[MAX];//tate
int r[2*MAX-1],l[2*MAX-1],c[MAX][MAX];
void set(){
  int i,j;
  for(i=0;i<MAX;i++){
    y[i]=x[i]=ON;
    for(j=0;j<MAX;j++)c[i][j]=FALSE;
  }
  for(i=0;i<MAX*2-1;i++)
    l[i]=r[i]=ON;
}
void output(){
  int i,j;
  for(i=0;i<MAX;i++)
    for(j=0;j<MAX;j++) if(c[i][j]==TRUE && x[i]!=j) return;
  for(i=0;i<MAX;i++){
    for(j=0;j<MAX;j++)
      (x[i]==j) ? printf("Q") : printf(".");
    printf("\n");
  }
}
void calc(int i){
  int j;
  if(i==MAX) output();
  for(j=0;j<MAX;j++){
    if(y[j]==OFF || l[i+j]==OFF || r[i-j+MAX-1]==OFF) continue;
    x[i]=j;
    y[j]=l[i+j]=r[i-j+MAX-1]=OFF;
    calc(i+1);
    x[i]=y[j]=l[i+j]=r[i-j+MAX-1]=ON;
  }
}
int main(){
  int i,num,s,t;
  set();
  scanf("%d", &num);
  for(i=0;i<num;i++){
    scanf("%d%d",&s,&t);
    c[s][t]=TRUE;
  }
  calc(0);
  return 0;
}
