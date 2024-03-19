#include <stdio.h>
#include <memory.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define len 101
int map[len][len],color[len],length[len],queue[len],head=0,tail=1;
void enqueue(int x){
    queue[tail]=x;
    tail=(tail+1)%len;
}
int dequeue(void){
    int x=queue[head];
    head=(head+1)%len;
    return x;
}
void bfs(void){
    int x,i;
    queue[0]=1;
    color[1]=BLACK;
    length[1]=0;
    while(head != tail){
        x=dequeue();
        for(i=0;i<map[x][0];i++){
            if(color[map[x][i+1]] == WHITE){
            enqueue(map[x][i+1]);
            color[map[x][i+1]]=GRAY;
            length[map[x][i+1]]=length[x]+1;
            }
        }
        color[x]=BLACK;
    }
}
int main(void){
    int n,i,o,num,sign;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&sign);
        scanf("%d",&num);
        map[sign][0]=num;
        for(o=1;o<=num;o++)
            scanf("%d",&map[sign][o]);
    }
    bfs();
    for(i=1;i<=sign;i++)
        printf("%d %d\n",i,color[i]==0?-1:length[i]);
    return 0;
}