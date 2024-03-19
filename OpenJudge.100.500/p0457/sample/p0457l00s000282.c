#include<stdio.h>


int main(){
	int n,m,k,data1[300000],data2[300000];
	
	scanf("%d %d %d",&n,&m,&k);
	int i=0,j=0;
	for(i=0;i<n;i++){
		if(i==n-1){
			scanf("%d",&data1[i]);
			getchar();
		}
		else{
			scanf("%d ",&data1[i]);
		}
	}
	for(i=0;i<m;i++){
		if(i==m-1){
			scanf("%d",&data2[i]);
			getchar();
		}
		else{
			scanf("%d ",&data2[i]);
		}
	}
	int hasil = 0,banyak =0,test=0;
	for(i=0;i<n;i++){
		test += data1[i];
	}
	for(i=0;i<m;i++){
		test += data2[i];
	}
	if(test <= k){
		banyak = n+m;
		printf("%d",banyak);
	}
	else{
		i=0;
		j=0;
		while(hasil<=k){
			if(i!=n-1 && j!=m-1){
				if(data1[i]<=data2[j]){
					hasil += data1[i];
					banyak +=1;
					i+=1;
				}
				else{
					hasil += data2[j];
					banyak +=1;
					j+=1;
				}
			}
			else if(i==n-1){
				hasil+= data2[j];
				banyak +=1;
				j+=1;
			}
			else if(j==m-1){
				hasil += data1[i];
				banyak +=1;
				i+=1;
			}
		}
	printf("%d",banyak-1);
	}
	
	
	
	
	return 0;
}