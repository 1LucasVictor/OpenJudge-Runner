#include<stdio.h>
#define LEN 100005
typedef struct pp{
    char name[50];
    int time;
} P;

P Q[LEN];
int head,tail,n;

void enqueue(P val){
    Q[tail]=val;
    tail=(tail+1)%LEN;
}

P dequeue(){
    P ret=Q[head];
    head=(head+1)%LEN;
    return ret;
}

int min(int a,int b){return a<b?a:b;}

int main(){
    int el=0,c;
    int q;
    P u;
    scanf("%d %d",&n, &q);
    for(int i=1;i<=n;i++){
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].time);
    }
    head=1; tail=n+1;

    while(head!=tail){
        u=dequeue();
        c=min(q,u.time);
        u.time-=c;
        el+=c;
        if(u.time>0) enqueue(u);
        else{
            printf("%s %d\n",u.name, el);
        }
    }
    return 0;

}