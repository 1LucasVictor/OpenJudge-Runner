#include<stdio.h>
#define len 100003
typedef struct{
    char na[10];
    int t;
}P;

P Q[len];
int head,tail;
void enqueue(P x){
    Q[tail]=x;
    tail=(tail+1)%len;
    
}

P dequeue(){
    P x=Q[head];
    head=(head+1)%len;
    return x;
}
int laps;

int main(){
    int n,q;
    scanf("%d %d",&n,&q);
    head=0,tail=n;
    int i;
    for(i=0;i<=n-1;i++){
        scanf("%s",Q[i].na);
        scanf("%d",&Q[i].t);
    }
    P u;
    while(head!=tail){
        u=dequeue();
        if(u.t>q){
            u.t-=q;
            laps+=q;
            enqueue(u);
        }else{
            laps+=u.t;
            printf("%s %d\n",u.na,laps);
        }
    }
    return 0;
}

