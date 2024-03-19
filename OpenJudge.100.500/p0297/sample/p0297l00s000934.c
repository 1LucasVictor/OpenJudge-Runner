#include<stdio.h>
#define N 100000

typedef struct pp{
    char name[100];
    int t;
}P;

P Q[N];
int head,tail;

void enqueue(P x){
    Q[tail]=x;
    if(tail+1==N)tail=0;
    else tail++;
}

P dequeue(){
    P x;
    x=Q[head];
    if(head+1==N)head=0;
    else head++;
    return x;
}
int main(){
    int time=0,n;
    int i,q;
    P u;
    scanf("%d%d",&n,&q);
    head=1;
    tail=n+1;
    for(i=1;i<=n;i++){
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].t);
    }
    while(head!=tail){
        u=dequeue();
        if(q-u.t>=0){
            time+=u.t;
            printf("%s %d\n",u.name,time);
        }
        else {
            u.t-=q;
            enqueue(u);
            time+=q;
        }
    }
    return 0;
}

