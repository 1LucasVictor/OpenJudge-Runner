#include<stdio.h>
#include<string.h>
  typedef struct{

    char pname[100];
    int runtime;

  }process;

process runprocess[100100];

int head,tail;
void enqueue(int);
int dequeue();

int main(){


  int sumdata,rtime,i,data,sumtime;

  sumtime = 0;
  head = 0;
  tail =0;

  scanf("%d%d",&sumdata,&rtime);


  for(i = 0; i < sumdata; i++){

    scanf("%s%d",runprocess[i].pname,&runprocess[i].runtime);

  }

  tail =  sumdata;

  while(head != tail){

    data = dequeue();

    data = data  - rtime;

    if(data > 0){

      enqueue(data);
      sumtime = sumtime + rtime;

	}

    else{

      sumtime = sumtime + runprocess[head-1].runtime;
      printf("%s %d\n",runprocess[head -1].pname,sumtime);

	}

  }

  return 0;
}

void enqueue(int data){

  

  strcpy(runprocess[tail].pname,runprocess[head -1].pname);
  runprocess[tail].runtime = data;
  tail = tail + 1;

}

int dequeue(){

  head = head + 1;

  return runprocess[head -1].runtime;

}