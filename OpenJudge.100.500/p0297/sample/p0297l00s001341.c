#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void enqueue(int);
void dequeue(void);

int Process_time[20000];
char Process_name[20000][11];
int Process[20000];
char end_process[20000][11];
int end_time[20000];
int head=0,tail=1;

int main(){
  int i,j,time;
  int total_time = 0;
  int Process_number;


  scanf("%d %d",&Process_number,&time);
  
  for( tail = 0 ; tail < Process_number ; tail++){
    scanf("%s %d",Process_name[tail],&Process_time[tail]);
  }
  
  while(head != tail){
    
    Process_time[head] -= time; 
    
    if(Process_time[head] > 0) {
      total_time += 100;
      dequeue( );
      enqueue(head -1);
    }
    else{
      total_time = total_time +(Process_time[head] +100);
      printf("%s %d\n",Process_name[head],total_time);
      head++;
	}  
    
	   }


}

void enqueue(int a){
  Process_time[tail] = Process_time[a];
  strcpy(Process_name[tail],Process_name[a]);
	 tail++;
}


void dequeue(void){
  head++; 
}