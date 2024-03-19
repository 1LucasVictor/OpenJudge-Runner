#include<stdio.h>
int main(){
int a,b,c,d,e,f,g,n,m,x,y,i,z;
int A[100][100],B[100],ab[100]={0};
scanf("%d %d",&n,&m);
for(x=0;x<n;x++){
for(y=0;y<m;y++){
scanf("%d",&A[x][y]);
}	
}
for(z=0;z<m;z++){
scanf("%d",&B[z]);
}
for(a=0;a<n;a++){
for(b=0;b<m;b++){
ab[a]+=A[a][b]*B[b];
}

}
for(i=0;i<n;i++){
	printf("%d\n",ab[i]);
}
return 0;
}