#include <stdio.h>

typedef struct{
    char name[11];
    int t;
}QUEUE;

int main(void){
    int i;
    
    int n,q;
    scanf("%d %d",&n,&q);
    
    QUEUE Q[n];
    for(i=0;i<n;i++){
        scanf("%s %d",Q[i].name,&Q[i].t);
    }
    
    int count=0;
    i=0;
    int j;
    while(1){
        if(Q[i].t<=q){
            count=count+Q[i].t;
            printf("%s %d\n",Q[i].name,count);
            Q[i].t=0;
        }else{
            count=count+q;
            Q[i].t=Q[i].t-q;
        }
        i++;
        if(i>=n)i=0;
        j=0;
        while(Q[i].t==0){
            i++;
            if(i>=n)i=0;
            j++;
            if(j>=n)break;
        }
        if(j>=n)break;
    }
}
