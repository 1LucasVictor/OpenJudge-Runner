#include<stdio.h>

#define MAX 100001

typedef struct pros{
    char name[100];
    int time;
}P;
P Q[MAX];
int tail,head;

void enqueue(P x){
    Q[tail]=x;
    tail=(tail+1)%MAX;
}
P dequeue(){
    P x=Q[head];
    head=(head+1)%MAX;
    return x;
}

int min(int a, int b){
    return a<b?a:b;
}

int main(){
    int i, q,n;
int total=0, hiku;
P u;
    scanf("%d%d",&n,&q);
    for(i=1;i<=n;i++){
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].time);
    }
    head=1;
    tail=n+1;
    while(head!=tail){
        u=dequeue();
        hiku=min(q,u.time);
        u.time-=hiku;
        total+=hiku;
        if(u.time>0) enqueue(u);
        else printf("%s %d\n",u.name,total);
        
    }
    return 0;
}
