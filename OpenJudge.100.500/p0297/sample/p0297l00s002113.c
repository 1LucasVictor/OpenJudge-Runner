#include<stdio.h>

typedef struct Work{
 char name[11];
 int time;
}Work;


void enque(Work A[],Work x,int **right){

 A[**right]=x;
 (**right)++;
}






Work deque(Work A[],int **right){
int i;
Work temp;
 temp=A[0];
 for(i=1;i<=(**right)-1;i++){ A[i-1]=A[i]; }
 (**right)--;

return temp;
}














int sagyo(Work A[],int Time,int *right,int q){

Work temp;

 if(A[0].time>q){ 
    A[0].time-=q;
    Time+=q;
    temp=deque(A,&right);
    enque(A,temp,&right);
    return Time;
 }
  else if(A[0].time==q){
    Time+=q;
    printf("%s %d\n",A[0].name,Time);
    deque(A,&right);
    return Time;
 }
  else if(A[0].time<q){
    Time=Time+(A[0].time);
    printf("%s %d\n",A[0].name,Time);
    deque(A,&right);
    return Time;
 }




}


int main(){
 int n,q,i;
 int Time=0;
 int total=0;
 int right;
 Work A[100000];

 scanf("%d %d",&n,&q);/*???????????\???*/
right=n;
 for(i=0;i<n;i++){ scanf("%s %d",&A[i].name,&A[i].time); total+=A[i].time; }/*???????????\???*/

while(Time>=0){Time=sagyo(A,Time,&right,q);if(Time==total){break;} }/*????\?*/

return 0;
}