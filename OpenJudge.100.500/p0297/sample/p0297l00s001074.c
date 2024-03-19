#include<stdio.h>
#include<string.h>
#define LEN 100005

typedef struct pp
{
    char name[100];
    int  t;
}P;

P Q[LEN];
int head,tail,n;


void enqueue(P p)
{
    Q[tail]=p;
    tail=(tail+1)%LEN;

}


P dequeue()
{
    P p=Q[head];
    head=(head+1)%LEN;
    return p;
}

int min(int a,int b)
{
    return a<b?a:b;//???????°????
}
int main()
{
    int elaps=0,c;
    int i,q;
    P p;
    scanf("%d %d",&n,&q);
    for( i=1;i<=n;i++)
    {
        scanf("%s",Q[i].name);
        scanf("%d",&Q[i].t);
    }
    head=1,tail=n+1;
    while(head!=tail)
    {
        p=dequeue();
        c=min(q,p.t);
        p.t-=c;
        elaps+=c;
        if(p.t>0)
            enqueue(p);
        else{
            printf("%s %d\n",p.name,elaps);
        }
    }

    return 0;


}