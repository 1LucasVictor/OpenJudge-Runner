#include<stdio.h>
#include<stdlib.h>
#define mymalloc(p,n) {p = malloc((n)*sizeof(*p));if ((p)==NULL) {printf("not enough memory?\n"); exit(1);};}

main(){
	int n,k,i,p,tmpP,tmpK,flag,max;
	int *w;
	scanf("%d %d",&n,&k);
	mymalloc(w,n+1);
	w[0]=0;
	max=0;
	for(i=1;i<=n;i++){
		scanf(" %d",&w[i]);
		if(max<w[i]){
			max=w[i];
		}
		w[i]+=w[i-1];
	}
	p=w[n]/k;
	if(p<max){
		p=max;
	}
	while(1){
		tmpP=p;
		tmpK=1;
		flag=0;
		for(i=1;i<=n;i++){
			if(w[i]>tmpP){
				tmpP+=p;
				tmpK++;
			}
			if(tmpK>k){
				flag=1;
				break;
			}
		}
		if(flag==0){
			break;
		}
		p++;
	}
	printf("%d\n",p);
	free(w);
	return 0;
}
		