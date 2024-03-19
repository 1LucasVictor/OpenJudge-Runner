#include<stdio.h>
#define N 100005

typedef struct pp{
  char name[100];
  int t;
}P;
P s[N];
void enqueue(P);
P dequeue(void);
int compare(int, int);
int top, tail;

int main(){

  int i,j,k,T,TT=0;
  P GX;
  

  scanf("%d%d",&k,&T);
  for(i=1;i<=k;i++){
    scanf("%s%d",s[i].name,&s[i].t);
  }
  top=1;
  tail=k+1;
  while(top!=tail){
    GX = dequeue();
    j = compare(GX.t,T);
    GX.t-=j;
    TT+=j;
    if(GX.t > 0) {enqueue(GX);}
    else {
      printf("%s %d\n",GX.name,TT);
    }
  }
  
  return 0;
}

void enqueue(P x){
  s[tail] = x;
  if(tail+1 == N)
    tail =0;
  else tail++;
}

P dequeue(){
  P x;
  x = s[top];
  if(top + 1 == N)
    top = 0;
  else
    top++;
  return x;
}

int compare(int a,int b){
  if(a>b) return b;
  else return a;
}
  