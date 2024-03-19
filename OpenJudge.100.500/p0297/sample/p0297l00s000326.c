#include<stdio.h>
#define MAX_i 200000

typedef struct process{
    char name[11];
    int time;
}pr;
void enqueue(pr x);
pr dequeue();
pr p[MAX_i];
int head,tail;

int main(void){
    int n,q,i,sum=0;
    pr x;
    
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%s %d",p[i].name,&p[i].time);
    }
    head=0;
    tail=n;
    while(head!=tail){
        x=dequeue();
        if(x.time<=q){
            sum+=x.time;
            printf("%s %d\n",x.name,sum);
        }else{
            sum+=q;
            x.time-=q;
            enqueue(x);
        }
    }
    return 0;
}

void enqueue(pr x){
    p[tail]=x;
    if(tail+1==MAX_i){
        tail=0;
    }else{
        tail++;
    }
}

pr dequeue(){
    if(head+1==MAX_i){
        head=0;
        return p[MAX_i-1];
    }else{
        head++;
        return p[head-1];
    }
}
