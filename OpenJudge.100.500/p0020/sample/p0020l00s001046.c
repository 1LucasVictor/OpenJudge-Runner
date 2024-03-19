#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<malloc.h>
#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
 
#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<malloc.h>

int main()
{
	int i, n, vert_ab=-1, vert_cd=-2;
	double x1,y1,x2,y2,x3,y3,x4,y4,slope_ab=-1,slope_cd=-2;

	scanf("%d", &n);

	for(i=0; i<n; i++){
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);

		if(x1!=x2)
			slope_ab = (y1-y2)/(x1-x2);
		else
			vert_ab = 1;
		if(x3!=x4)
			slope_cd = (y3-y4)/(x3-x4);
		else
			vert_cd = 1;

		if(slope_ab==slope_cd || vert_ab==vert_cd)
			printf("YES\n");
		else
			printf("NO\n");

		slope_ab = -1;
		slope_cd = -2;
		vert_ab = -1;
		vert_cd = -2;
	}

	return 0;

}