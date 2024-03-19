#include<stdio.h>
int main(void){
	
	int s[13],h[13],c[13],d[13];
	int n,i,j,num;
	char sort;
	for(i=0;i<13;i++){
		s[i]=i+1;
		h[i]=i+1;
		c[i]=i+1;
		d[i]=i+1;
	}
	scanf("%d",&n);
	for(i=0;i<n*2;i++){
		scanf("%c %d",&sort,&num);
		switch(sort){
		case 'S':s[num-1]=0;
			break;
		case 'H':h[num-1]=0;
			break;
		case 'C':c[num-1]=0;
			break;
		case 'D':d[num-1]=0;
			break;
		}
	}
	for(i=0;i<13;i++){
		if(s[i]==0)continue;
		printf("S %d\n",s[i]);
	}
	for(i=0;i<13;i++){
		if(h[i]==0)continue;
		printf("H %d\n",h[i]);
	}
	for(i=0;i<13;i++){
		if(c[i]==0)continue;
		printf("C %d\n",c[i]);
	}
	for(i=0;i<13;i++){
		if(d[i]==0)continue;
		printf("D %d\n",d[i]);
	}
	return 0;
}
