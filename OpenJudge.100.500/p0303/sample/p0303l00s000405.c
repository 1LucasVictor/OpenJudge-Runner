#include<stdio.h>
#define max(a,b)            (((a) > (b)) ? (a) : (b))
#define INF 100005
int L[INF];
int main(){
	int n,P=-INF,k,ave=0;//n货个数；P要求；ave均；wei一车量；numb装车量
	scanf("%d%d",&n,&k);
	for(int i=0;i<n;++i){
		scanf("%d",L+i);
		ave+=L[i];
		if(L[i]>P) P=L[i];}
	ave/=k;
	P=max(ave,P);
	while(1){
		int numb=0,i=0,wei=0;
		for(;i<n;){
			if(wei+L[i]<P) wei+=L[i],++i;
			else if(wei+L[i]==P) wei=0,numb++,i++;
			else wei=0,numb++;}
		if(i==n&&wei<P&&wei!=0) numb++;
		if(numb<=k) break;
		else P++;}
	printf("%d\n",P);

	return 0;
}
