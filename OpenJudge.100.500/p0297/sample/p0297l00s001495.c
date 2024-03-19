#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#define MAX 100000

typedef struct
{
   char name[500];
   int time;   
}Process;
    

int enqueue( Process *p, Process x,int tail,int number);
int dequeue( Process *p, Process x, int head,int number);
void getnew (Process *p, int time,int number, int tail, int head);

int main() {
    int head = 0;
    int tail = 0;
    int number, time;
    
    int readScan = scanf("%d %d", &number, &time);
    Process p[number];
    for(int i=0; i<number; i++)
    {
        int readScan = scanf("%s %d", &p[i].name, &p[i].time);
    }  
    tail = number;

    getnew (p, time,number,head,tail);
    
    
    

return 0;
}


int enqueue( Process* p, Process x,int tail,int number)
{
  
   p[tail].time = x.time;
   strcpy(p[tail].name,x.name);
   if(tail + 1 == number)
      tail = 0;
   else
       tail = tail+1;
   return tail;
}

int dequeue( Process* p, Process x, int head,int number)
{
    
    strcpy(x.name,p[head].name);
    x.time = p[head].time;
    if(head +1 == MAX)
        head = 0;
    else 
        head = head + 1;
    return head;
}
void getnew (Process *p, int time,int number,int head,int tail)
{
    int toltime = 0;
    while(head != tail){   
        if(time == 1)
        {
            printf("%s %d\n",p[head].name,p[head].time);
            head = dequeue( p, p[head],head,number);
        }
        if (p[head].time <= time)
        {
            toltime = toltime + p[head].time;
            printf("%s %d\n",p[head].name, toltime);
            head = dequeue(p ,p[head],head,number);
        }
        if(p[head].time > time)
        {
            toltime = toltime + time;
            p[head].time = p[head].time - time;
            tail = enqueue( p, p[head],tail,number);
            head = dequeue( p, p[head],head,number);
       
        }
    }
}

