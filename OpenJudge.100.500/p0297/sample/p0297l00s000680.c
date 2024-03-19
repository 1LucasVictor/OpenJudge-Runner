#include<stdio.h>
#include<string.h>
struct Process
{
    char name[11];
    int tim;
};

struct Process dequeue(struct Process *Q,int *head)
{
    *head = *head + 1;
    return Q[*head - 1];
}

void enqueue(struct Process x,struct Process *Q,int *tail)
{
    Q[*tail] = x;
    *tail +=1;
}


int main()
{
    int n,c,cnt=0,box=0,ksn=0;
    scanf("%d %d",&n,&c);
    int tail=n,head=0;
    char nmtmp[11],tmp;
    struct Process p[n+1];
    for(int i=0;i<n;i++)
    {
        scanf("%s", p[i].name);
        scanf("%d", &p[i].tim);
       /* while((tmp=getchar())!=' ')
        {
            if(!(tmp=='\n'||tmp=='\r'))
            {
                nmtmp[cnt] = tmp;
                cnt++;
            }
        }
        strcpy(p[i].name,nmtmp);
        scanf("%d",&box);
        p[i].tim = box;
        cnt=0;
        box=0;*/
    }
    while(head!=tail)
    {
        if(tail > n) tail = 0;
        struct Process x = dequeue(p,&head);
        if(head > n) head =0;
        if(x.tim < c)
        {
            ksn += x.tim;
            x.tim = 0;
        }
        else 
        {
            ksn += c;
            box = x.tim;
            box -= c;
            x.tim = box;
        }
        if(x.tim == 0)
        {
            printf("%s %d\n", x.name,ksn);
        }
        else
        {
            enqueue(x,p,&tail);
        }
    }
    return 0;
}
