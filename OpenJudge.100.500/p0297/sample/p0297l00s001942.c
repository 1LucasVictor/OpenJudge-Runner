#include<stdio.h>
#include<string.h>

struct queues {
	char name[11];
	int time;
	int next;
};

int main( void ) 
{
	struct queues ps[100001];
	int i;
	int n,q;
	int cnt,cur,pre;
	int time,res;
	int head;
	
	scanf( "%d%d", &n, &q );
	head=0;
	for( i=0; i<n; i++ ) {
		scanf( "%s%d", ps[i].name, &ps[i].time );
		ps[i].next=i+1;
	}
	
	res=time=cnt=0;
	pre=cur=head;
	while( cnt<n ) {
		res=ps[cur].time-q;
		if( res <= 0 ) {
			time+=ps[cur].time;
			printf( "%s %d\n", ps[cur].name, time );
			
			if( head == cur ) {
				head=ps[cur].next;
			} else {
				ps[ pre ].next=ps[cur].next;
			}
			cnt++;
		} else {
			time+=q;
			ps[cur].time=res;
			pre=cur;
		}
		cur=ps[cur].next;
		
		if( n<=cur ) { 
			cur=head;
		}	
	}
	
	return 0;
}