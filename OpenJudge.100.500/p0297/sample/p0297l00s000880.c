#include<stdio.h>
#define N 100000
 
typedef struct pro{
  char name[10];
  int tim;
}P;
 
P Q[N+1];
int length,quantum;
int top,end;
 
void enqueue(P);
P dequeue(void);
void printqueue(void);
 
main(){

  int i;
  P p;
  int t_time=0;
  int count=0;
   
  scanf("%d %d",&length,&quantum);
   
  top = length/2;
  end = length/2;
   
  for(i=0; i<length; i++){
    scanf("%s %d",p.name,&p.tim);
    enqueue(p);
  }
 
  while(count != length){
     
    p = dequeue(); 
    if(p.tim > quantum){
      t_time += quantum;
      p.tim -= quantum;
      enqueue(p);
    }

    else{
      t_time += p.tim;
      printf("%s %d\n",p.name,t_time);    
      count++;
    }  
  }
  
  return 0;
}
 
void enqueue(P p){
   
  Q[end] = p;
  if(end == length){
    end = 0;
  }

  else
    end++;
}
 
P dequeue(){
  P x; 
 
  x = Q[top];
  if(top == length){
    top = 0;
  }

  else
    top++;
   
  return x;
}
 
void printqueue(void){
  int i;
   
  for(i=top; i!=end; i++){
    if(i==length){
      printf("%s %d ",Q[i].name,Q[i].tim);
      i=0;
      printf("\n");
    }

    printf("%s %d ",Q[i].name,Q[i].tim);
    printf("\n");
  } 
}