#include <stdio.h>
int main(void)
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		float x1,x2,x3,x4,y1,y2,y3,y4,s1,s2;
		scanf("%f %f %f %f %f %f %f %f",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		s1=(y2-y1)/(x2-x1);
		s2=(y4-y3)/(x4-x3);
		if(s1==s2)	puts("YES");
		else 		puts("NO");
	}
	return 0;
}