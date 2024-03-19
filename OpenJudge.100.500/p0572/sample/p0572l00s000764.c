#include <stdio.h>
 
int main(void) {
int L,R,i,j,k,a;
scanf("%d %d\n",&L,&R);
a=2019;
if(R-L<2019){
for(j=L;j<=R;j++){
	for(i=L;i<=j;i++){
		if(i<j){
			k=(i*j)%2019;
			if(a>k){
				a=k;
			}
		}
	}
}
}else{
	L=0;
	R=2018;
	for(j=L;j<=R;j++){
	for(i=L;i<=j;i++){
		if(i<j){
			k=(i*j)%2019;
			if(a>k){
				a=k;
			}
		}
	}
}
}
printf("%d\n",a);
}