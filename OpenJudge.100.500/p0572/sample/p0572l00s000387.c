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
	
	a=0;
}
printf("%d\n",a);
}