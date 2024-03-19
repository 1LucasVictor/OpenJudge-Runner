#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main(){
char s[101];

int N,D;
// scanf("%d %d",&N,&D);
if( scanf("%d %d",&N,&D) == 1);
int X[N],Y[N];
for(int i=0;i<N;i++){
	// scanf("%d %d",&X[i],&Y[i]);	
	if( scanf("%d %d",&X[i],&Y[i]) == 1);
}

// for(int i=0;i<N;i++){
// 	printf("%d %d\n",X[i],Y[i]);	
// }
int num=0;
for(int i=0;i<N;i++){
	double l=sqrt(X[i]*X[i]+Y[i]*Y[i]);
	// printf("%lf\n",l);
	if(l<D || l==D)num++;
}
printf("%d\n",num);


return 0;
// scanf("%d %d",&b,&c);
// scanf("%s",s);
// printf("%d %s\n",a+b+c,s);

}
