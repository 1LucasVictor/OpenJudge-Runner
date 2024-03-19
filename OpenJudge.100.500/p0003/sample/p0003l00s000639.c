#include <stdio.h>

int main()
{
    int n[6];
	float x,y;

	while(scanf("%d%d%d%d%d%d",&n[0],&n[1],&n[2],&n[3],&n[4],&n[5])!=EOF){
		x=((n[2]*n[4])-(n[1]*n[5]))/((n[0]*n[4])-(n[1]*n[3]));
		y=((n[2]*n[3])-(n[0]*n[5]))/((n[1]*n[3])-(n[0]*n[4]));

		printf("%.3f %.3f\n",x,y);
	}
	return 0;
}