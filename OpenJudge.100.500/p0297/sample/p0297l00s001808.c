#include <stdio.h>
int queue[100001];
int head=0,tail=0;
void enqueue(int);
int dequeue();
int main (){
    int n,q,time[100000];
    char name[100000][11];
    int i,tmp,clock=0;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++){
        scanf("%s %d",name[i],&time[i]);
        enqueue(i);
    }

    while(1){
        tmp=dequeue();
        if(tmp<0){
            break;
        }
        time[tmp]-=q;
        if(time[tmp]<=0){
            clock+=q+time[tmp];
            printf("%s %d\n",name[tmp],clock);
        }
        else{
            clock+=q;
            enqueue(tmp);
        }
    }
    return 0;
}

void enqueue(int num){
    int next=(tail+1)%100001;
    queue[tail]=num;
    tail=next;
}

int dequeue(){
    int val;
    if(head==tail){
        return -1;
    }
    val=queue[head];
    head=(head+1)%100001;
    return val;
}
