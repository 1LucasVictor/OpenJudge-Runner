#include<stdio.h>
#include<math.h>
#include<string.h>

int main(void){
	int i,l,n;
	double x[4],y[4],a,b;
	char s[20],t[20];
	
	
	scanf("%d",&n);
	
	for(;n>0;n--){
		//for(i=0;i<4;i++)scanf("%lf %lf ",&x[i],&y[i]);
		
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x[0],&y[0],&x[1],&y[1],&x[2],&y[2],&x[3],&y[3]);
		
		//for(i=0;i<4;i++)printf("%lf %lf ",x[i],y[i]);
		
		
		for(i=0;i<20;i++){
			s[i]=NULL;
			t[i]=NULL;
		}
		
		a=(y[1]-y[0])/(x[1]-x[0]);
		b=(y[3]-y[2])/(x[3]-x[2]);
		
		sprintf(s,"%lf",a);
		sprintf(t,"%lf",b);
		
		if((int)strcmp(s,t)==0)printf("YES\n");
		else printf("NO\n");
		
	}
	
	return 0;
	
}