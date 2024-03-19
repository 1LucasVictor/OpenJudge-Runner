#include<stdio.h>
#include<string.h>
#define LEN 50000
typedef struct data{
    char name[1000000];
    int t; 
}math;

math Que[LEN+1];
int total=0,c;
int i,num2,num,sum=0;

void input(){
   scanf("%d %d", &num, &num2);
  for ( i = 1; i <= num; i++){
    scanf("%s", Que[i].name); 
    scanf("%d", &Que[i].t);
  } 
}

void calc(){
  i=1;
  sum=num;
  while(1){
    if(Que[i].t<=num2){
      sum--;
      total+=Que[i].t;
      printf("%s %d\n",Que[i].name,total);
      if(sum==0)break;
    }
    else{
      total+=num2;
      Que[i].t-=num2;
      Que[i+sum].t=Que[i].t;
      strcpy(Que[i+sum].name,Que[i].name);
    }
    i++;
  }
}

int main(){ 
  input();
  calc();
  return 0;
}
