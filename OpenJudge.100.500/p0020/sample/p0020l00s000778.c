#include<stdio.h>
#include<math.h>

int main(){
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double a1=0,a2=0;
	char hantei1='A',hantei2='B';
	int n,i;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		
		if(x1!=x2)a1=(y1-y2)/(x1-x2);
		else if(x1==x2)hantei1='T';
		if(x3!=x4)a2=(y3-y4)/(x3-x4);
		else if(x3==x4)hantei2='T';
		
		//printf("%f%f %c%c\n",a1,a2,hantei1,hantei2);
		
	if(a1==a2 || hantei1==hantei2=='T')printf("YES\n");
	else printf("NO\n");
		
		hantei1='A';
		hantei2='B';
		a1=0;
		a2=0;
	}
	
	
return 0;
}