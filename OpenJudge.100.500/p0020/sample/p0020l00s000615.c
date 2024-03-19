#include <stdio.h>

#define A 0
#define B 1
#define C 2
#define D 3
#define X 0
#define Y 1


int main()
{
	double xy[4][2];
	int n,
		i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf"
		,&xy[A][X],&xy[A][Y] , &xy[B][X],&xy[B][Y] , &xy[C][X],&xy[C][Y],&xy[D][X],&xy[D][Y]);
		
		if( (xy[B][Y]-xy[A][Y])/(xy[B][X]-xy[A][X]) == (xy[D][Y]-xy[C][Y])/(xy[D][X]-xy[C][X]) ){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	return 0;
}