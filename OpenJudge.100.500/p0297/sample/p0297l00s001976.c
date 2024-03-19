#include <stdio.h>
#define len 100005
typedef struct q{
    char name[100];
    int time;
}q;
q pro[len];
int head,tail,n;
q enqueue(q x){
    pro[tail]=x;
    tail=(tail+1)%len;
}
q dequeue(void){
    q x=pro[head];
    head=(head+1)%len;
    return x;
}
int main(void){
    int n,max,total=0,i;
    q x;
    scanf("%d %d",&n,&max);
    for(i=0;i<n;i++)
        scanf("%s %d",pro[i].name,&pro[i].time);
    head=0,tail=n;
    while(head != tail){
        x=dequeue();
        if(x.time <= max){
            total+=x.time;
            printf("%s %d\n",x.name,total);
        }
        else{
            total+=max;
            x.time-=max;
            enqueue(x);
        }
    }
    return 0;
}