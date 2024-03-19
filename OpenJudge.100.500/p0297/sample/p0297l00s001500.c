#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
//
#define MAX_TIME 100000
#define MAX_NAME 100
#define MAX_PROCESS 100000
#define SMAX 1000000
//
int number;
int quantum;
int time[MAX_TIME];
char name[MAX_PROCESS][MAX_NAME];
int tail;
int head;
int sumtime=0;
//
void initialize(void);//キューを初期化する
int isEmpty(void);//キューが空なら１を返す
int isFull(void);//キューが満杯なら１を返す
void enqueue_name(char n,int i);//nameに値を追加する
void enqueue_time(int t);//timeに値を追加する
int dequeue_time(void);//timeから値を取りだす
void input(void);//enqueueの呼び出しを管理する
void queue_in(void);//キューへの標準データ入力を管理する
void cal(void);//計算と処理を行う
//
int main(void)
{
    initialize();
    queue_in();
    while(isEmpty()==0)
    {cal();}
    return 0;
}
//
void initialize(void)
{tail=0;head=0;}
int isEmpty(void)
{
    if(head==tail){return 1;}
    else{return 0;}
}
int isFull(void)
{
    if(head==(tail+1)%(number)){return 1;}
    else{return 0;}
}
void enqueue_name(char n,int i)
{
  if(isFull()){printf("over-flow\n");}
    else
    {
        name[tail][i]=n;
    }
}
void enqueue_time(int t)
{
    if(isFull()){printf("over-flow\n");}
    else
    {
        time[tail]=t;
        if(tail+1==number){tail=0;}
        else{tail++;}
    }
}
int dequeue_time(void)
{
    if(isEmpty()){printf("under-flow\n");}
    else
    {   int x=time[head];
        if((head+1)==number){head=0;}
        else{head++;}
        return x;
    }
}
void input(void)
{
    char str[SMAX];
    int x;
    fgets(str,SMAX,stdin);
    int i=0;
    int linenum=0;
    while(str[i]>=' ')
    {
        while(isspace(str[i])){i++;}
        if(isdigit(str[i]))
        {
            x=0;
            while(isdigit(str[i]))
            {
                x=10*x+(str[i]-'0');
                i++;
            }
            enqueue_time(x);
        }
        else
        {
            while(isspace(str[i])==0)
            {
            enqueue_name(str[i],linenum);
            linenum++;
            i++;
            }
        }
    }
} 
void queue_in(void)
{
    char str[SMAX];
    fgets(str,SMAX,stdin);
    int i=0;
    int j=0;
    while(str[i]>=' ')
    {
        while(isspace(str[i])){i++;}
        if(isdigit(str[i]))
        {
            if(j==0)
            {
                number=0;
                while(isdigit(str[i]))
                {
                    number=10*number+(str[i]-'0');
                    i++;
                }
                number++;
                j++;
            }
            else if(j==1)
            {
               quantum=0;
            while(isdigit(str[i]))
            {
                quantum=10*quantum+(str[i]-'0');
                i++;
            }  
            }
        }
        
    }
    for(int k=0;k<number-1;k++)
    {
        input();
    }
}
void cal(void)
{
    char x[MAX_NAME];
    char z[MAX_NAME];
    sprintf(x,name[head]);
    int y=dequeue_time();
    y-=quantum;
    if(y>0)
    {
        strcpy(name[tail],x);
        enqueue_time(y);
        sumtime+=quantum;
    }
    else
    {
        sumtime+=(y+quantum);
        printf("%s %d\n",x,sumtime);
    }
}
