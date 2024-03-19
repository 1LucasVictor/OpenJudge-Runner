#include<stdio.h>
int kei(int,int);

int A[8][8],a[8],b[8],c[8],d[8],n;

int main(){
	int i,j,r,v;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&r,&v);
		A[r][v]=1;
		a[i]=r;
		b[i]=v;
		c[i]=r-v;
		d[i]=r+v;
	}
	kei(0,0);
	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			if(A[i][j]==1)printf("Q");
			else printf(".");
		}
		printf("\n");
	}
	return 0;
}
int kei(int i,int j){
	int k,e=0;
	while(i<8){
		while(j<8){
		  	for(k=0;k<n;k++){
				if(a[k]==i || b[k]==j || c[k]==i-j || d[k]==i+j){
				    e++;
					break;
				}
			}
			if(e==0){
				a[n]=i;
				b[n]=j;
				c[n]=i-j;
				d[n]=i+j;
				A[i][j]=1;
				n++;
				if(kei(i,j)==0){
					A[i][j]=NULL;
					n--;
				}else return 1;
			}
			e=0;
			j++;
		}
		i++;
		j=0;
	}
	if(n!=8)return 0;
	else return 1;
}

