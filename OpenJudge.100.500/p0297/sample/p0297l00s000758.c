#include<stdio.h>
#include<string.h>
#define LEN 100005
typedef struct part
{
    char name[100];
    int t;
}p;
p Q[LEN];
int head,tail,n;
void enqueue(p x)
{
    Q[tail]=x;
    tail=(tail+1)%LEN;
}
p dequeue()
{
    p x;
    x=Q[head];
    head=(head+1)%LEN;
    return x;
}
int compare(int a,int b){return a<b?a:b;}
int main()
{
    int elaps=0,c,q,i;
    p u;
    scanf("%d%d",&n,&c);
    for(i=1;i<=n;i++)
    {
        scanf("%s%d",Q[i].name,&Q[i].t);
    }
    head=1;
    tail=n+1;
    while(head!=tail)
    {u=dequeue();
    q=compare(c,u.t);
    u.t-=q;
    elaps+=q;
    if(u.t>0)
    {
        enqueue(u);
    }
    else printf("%s %d\n",u.name,elaps);}
return 0;
}
