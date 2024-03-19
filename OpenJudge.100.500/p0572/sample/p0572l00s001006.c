#include <stdio.h>
 
int main(void) {
int L,R,i,j,k,a;
scanf("%d %d\n",&L,&R);
a=2019;
  k=0;
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
printf("%d\n",a);
}