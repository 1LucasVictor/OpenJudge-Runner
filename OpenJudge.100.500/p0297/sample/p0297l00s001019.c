#include<stdio.h>
#include<string.h>

struct queues {
	char name[11];
	int time;
};

int main( void ) 
{
	struct queues ps[100001];
	struct queues tmp;
	int i,j;
	int n,q;
	int start;
	int time,res;	
	
	scanf( "%d%d", &n, &q );
	for( i=0; i<n; i++ ) {
		scanf( "%s%d", ps[i].name, &ps[i].time );
	}
	
	res=time=start=0;
	while( start<n ) {
		res=ps[start].time-100;
		if( res <= 0 ) {
			time+=ps[start].time;
			ps[start].time=time;
			start++;
		} else {
			time+=100;
			ps[start].time=res;
			strcpy( tmp.name, ps[start].name );
			tmp.time=ps[start].time;
			for( j=start+1; j<n; j++ ) {
				strcpy( ps[j-1].name, ps[j].name );
				ps[j-1].time=ps[j].time;
			}
			strcpy( ps[n-1].name, tmp.name );
			ps[n-1].time=tmp.time;
		}
	}
	
	for( i=0; i<n; i++ ) {
		printf( "%s %d\n", ps[i].name, ps[i].time );
	}
	
	return 0;
}