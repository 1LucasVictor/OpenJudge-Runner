#include <stdio.h>
#include <stdlib.h>

int main(){
  typedef struct{
    char name[20];
    int time;
    //task before;
    //task next;
  } Task;
  Task task[300000]; 
  //task que[100000];
  int n,q,c,z=0;


  scanf("%d%d",&n,&q);
  for(c=0;c<n;c++){
    scanf("%s %d",task[c].name,&task[c].time);
  }
  /*
  for(c=0;c<n;c++){
    printf("%s %d\n",task[c].name,task[c].time);
  }
  */
  c=0;
  while(1){
    if(task[c].time > q){
      task[c].time -= q;
      z += q;
    }else if(task[c].time <= q){
      z += task[c].time;
      task[c].time = 0;
    }
    
    if(task[c].time > 0){
      task[n] = task[c];
      n++;
    }
    else if(task[c].time <= 0){
      printf("%s %d\n",task[c].name,z);
    }
    
    if(c==n-1)break;
    c++;
  }
  return 0;
}

