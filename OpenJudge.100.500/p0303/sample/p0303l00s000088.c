#include<stdio.h>
#include<stdlib.h>
#define mymalloc(p,n) {p = malloc((n)*sizeof(*p));if ((p)==NULL) {printf("not enough memory?\n"); exit(1);};}
#define centering center=(right-left)/2+left

main(){
	int n,k,i,p,tmpI,flag,max,center,left,right;
	int *w;
	scanf("%d %d",&n,&k);
	mymalloc(w,n+1);
	w[0]=0;
	max=0;
	for(i=1;i<=n;i++){
		scanf(" %d",&w[i]);
		if(max<w[i]){max=w[i];}
		w[i]+=w[i-1];
	}
	if(w[n]/k>max){
		p=w[n]/k;
	}else{
		p=max;
	}
	
	while(1){
		tmpI=0;
		for(i=1;i<k;i++){
			left=tmpI;
			right=n;
			centering;
			flag=0;
			while(right-left>1){
				if(w[center]>p+w[tmpI]){
					right=center;
					centering;
				}else{
				if(w[center]<p+w[tmpI]){
					left=center;
					centering;
				}else{
					tmpI=center;
					flag=1;
					break;
				}}
			}
			if(flag!=1){
				tmpI=left;
			}
		}
		if(w[n]<=w[tmpI]+p){
			break;
		}
		p++;
	}
	printf("%d\n",p);
	free(w);
	return 0;
}
		