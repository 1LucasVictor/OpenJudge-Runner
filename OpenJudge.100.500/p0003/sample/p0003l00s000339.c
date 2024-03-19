#include<stdio.h>
int main(){
	double a,b,c,d,e,f,g,h,k,n,y[1000],x[1000];
	int i,j=0;
	while(scanf("%lf%lf%lf%lf%lf%lf",&a,&b,&c,&d,&e,&f)!=EOF){
		//printf("%f%f%f",a,b,c);
		g=c*d;
		h=a*f;
		k=g-h;
		g=b*d;
		h=a*e;
		n=g-h;
		y[j]=k/n;
//		if(y[j]>=0){
//			y[j]=y[j]+0.0005;
//		}else{
//			y[j]=y[j]-0.0005;
//		}
			
		g=b*f;
		h=c*e;
		k=g-h;
		g=b*d;
		h=a*e;
		n=g-h;
		x[j]=k/n;
//		if(x[j]>=0){
//			x[j]=x[j]+0.0005;
//		}else{
//			x[j]=x[j]-0.0005;
//		}
		j++;
	}
	for(i=0;i<j;i++){
	printf("%.3f %.3f\n",x[i],y[i]);
}
	return 0;
	
	
}