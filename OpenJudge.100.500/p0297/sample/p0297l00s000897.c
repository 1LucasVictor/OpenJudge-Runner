#include<stdio.h>
#include<string.h>
#define LEN 100005/*length of queue*/

typedef struct pp{/*ppは構造体タグ名。*/
    char name[100];
    int t;
} P;/*Pが型名。int みたいな感じで呼び出せる*/


int head,tail,n;/*tailは最後の要素の一つ後ろを指す*/
P Q[LEN];


void enqueue(P x){
    Q[tail]=x;
    tail=(tail+1)%LEN;
}

P dequeue(){
    P x=Q[head];
    head=(head+1)%LEN;
    return x;
}

int main(){
    int elaps=0;
    int i,q;
    P u;

    scanf("%d %d",&n,&q);
    
    for(i=1;i<=n;i++){
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].t);
    }
    
    head=1;
    tail=n+1;
    
    while(head!=tail){
        u=dequeue();
        if (u.t-q>0){
            elaps+=q;
            u.t-=q;
            enqueue(u);
        }else{
            elaps+=u.t;
            printf("%s %d\n",u.name,elaps);
        }
    }
    return 0;
}
