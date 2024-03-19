#include <stdio.h>
#include <string.h>

typedef struct pp{
	char name[100];
	int time;
}P;

P Q[100005];
int head,tail,n;

void enqueue(P x)
{
	Q[tail]=x;
	tail=(tail+1)%100005;
}

P dequeue()
{
	P x=Q[head];
	head=(head+1)%100005;
	return x;
}

int min(int a,int b)
{
	return a<b?a:b;
}


int main ()
{
	int e=0,c;
	int i,q;
	P u;
	scanf ("%d %d",&n,&q);
	
	for (int i=1;i<=n;i++)
	{
		scanf ("%s",Q[i].name );
		scanf ("%d",&Q[i].time );
	}
	head=1;tail=n+1;

	while (head!=tail)
	{
		u=dequeue();
		c=min(q,u.time);
		u.time-=c;
		e+=c;
		if (u.time >0) enqueue(u);
		else printf ("%s %d\n",u.name ,e);
	}
}
