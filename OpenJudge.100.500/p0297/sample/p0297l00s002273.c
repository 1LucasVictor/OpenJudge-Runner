#include<stdio.h>
#define size 1000000

        struct process{
                char name[10];
                int time;
        };
        struct process p[size],now_process;
        int head,tail;

        void enqueue(struct process new_process){
                p[tail]=new_process;
                tail=tail+1;
        }

        struct process dequeue(){
                struct process out_process=p[head];
                head=head+1;
                return out_process;
        }



int main(void){
        int n,q;
        int clock=0;
        scanf("%d",&n);
        scanf("%d",&q);
        int i;
        for(i=0;i<n;i++){
                scanf("%s",p[i].name);
                scanf("%d",&p[i].time);
        }
        head=0;
        tail=n;
        while(head!=tail){
                now_process=dequeue();
                if(now_process.time<=q){
                        clock=clock+now_process.time;
                        printf("%s %d\n",now_process.name,clock);
                }else{
                        now_process.time=now_process.time-q;
                        clock=clock+q;
                        enqueue(now_process);
                }
        }

        return 0;
}