#include<stdio.h>

int main(){
	int n,m,k;
	scanf("%d %d %d",&n,&m,&k);
	int a[n],b[m],i,frag = 0,nfrag = 0,mfrag = 0,kfrag = 0;
	for(i = 0; i < n; i++){
		scanf("%d",&a[i]);
	}
	for(i = 0; i < m; i++){
		scanf("%d",&b[i]);
	}
	while(1){
		frag++;

		if(n == nfrag){
			kfrag += b[mfrag];
			mfrag++;
		} else if(m == mfrag){
			kfrag += a[nfrag];
			nfrag++;
		} else if(a[nfrag] < b[mfrag]){
			kfrag += a[nfrag];
			nfrag++;
		} else {
			kfrag += b[mfrag];
			mfrag++;
		}

		if(kfrag > k){
			frag--;
			break;
		}
	}
	printf("%d",frag);


	return 0;
}
