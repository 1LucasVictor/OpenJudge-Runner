#include<stdio.h>
#include<string.h>
 
typedef struct {
  char name[10];
  int t;
}Process;
 
 
void enqueue(Process);
Process dequeue(void);
 
Process Q[100000];
int n,q;
int ttime;
int i,j;
 
int main(void){
 
  int count=0;
  Process stack[1000];
 
  scanf("%d %d", &n, &q);
 
  for ( i = 0; i < n; i++){
    scanf("%s", Q[i].name);
    scanf("%d", &Q[i].t);
  }
 
  for(i=0;i<n+j;i++){
  stack[count] = dequeue();
  if(stack[count].t != -1)
  enqueue(stack[count++]);
  }
 
  return 0;
}
 

void enqueue(Process x){
 
  printf("%s %d\n",x.name,x.t);
}
 
Process dequeue(void){
 
  int flag=0;
 
    if(Q[i].t <= q){
      ttime += Q[i].t;
      Q[i].t = ttime;
      flag=1;
    } 
    else{
      ttime += q;
      Q[n+j].t = Q[i].t - q;
      strcpy(Q[n+j].name,Q[i].name);
      j++;
    }
 
    if(flag==0)
      Q[i].t = -1;
 
      return Q[i];
       
}