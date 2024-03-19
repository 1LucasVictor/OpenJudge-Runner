#include<stdio.h>

int main(void){
        int n,q;
        struct process{
                char name[10];
                int time;
                int tag;
        };
        scanf("%d",&n);
        scanf("%d",&q);
        struct process p[n];
        int rest=0,clock=0;
        int i;
        for(i=0;i<n;i++){
                scanf("%s",p[i].name);
                scanf("%d",&p[i].time);
                rest=rest+p[i].time;
                p[i].tag=0;
        }
        while(1){
                for(i=0;i<n;i++){
                        if(p[i].tag==1) continue;
                        else if(p[i].time<=q){
                                p[i].tag=1;
                                clock=clock+p[i].time;
                                rest=rest-p[i].time;
                                printf("%s %d\n",p[i].name,clock);
                        }else{
                                p[i].time=p[i].time-q;
                                clock=clock+q;
                                rest=rest-q;
                        }
                }
                if(rest<=0) break;
        }

        return 0;
}