#include <stdio.h>
	int main(void){
		int n,i,j,k;
		int b;
		char a[100],s[100],h[100],d[100],c[100];
		scanf("%d",&n);
		for(i=0;i<13;i++){
			s[i]=0;
			h[i]=0;
			d[i]=0;
			c[i]=0;
		}
		for(j=0;j<2*n;j++){
			scanf("%c %d",&a[j],&b);
			if(a[j]=='S'){
				s[b-1]=1;
			}else if(a[j]=='H'){
				h[b-1]=1;
			}else if(a[j]=='D'){
				d[b-1]=1;
			}else if(a[j]=='C'){
				c[b-1]=1;
			}
		}

		for(k=0;k<13;k++){
			if(s[k]==0){
				printf("S %d\n",k+1);
			}
		}
		for(k=0;k<13;k++){
			if(h[k]==0){
				printf("H %d\n",k+1);
			}
		}
		for(k=0;k<13;k++){		
			if(c[k]==0){
				printf("C %d\n",k+1);
			}
		}
		for(k=0;k<13;k++){
			if(d[k]==0){
				printf("D %d\n",k+1);
			}
		}
	return 0;
}