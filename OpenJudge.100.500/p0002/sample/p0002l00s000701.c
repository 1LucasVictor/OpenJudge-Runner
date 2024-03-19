#include<stdio.h>
#include<math.h>
int main(void)
{
	int k[100][3],ct;
	int mem=0;
	scanf("%d",&ct);
	for(int f1=0;f1<ct;f1++){
		scanf("%d %d %d",&k[f1][0],&k[f1][1],&k[f1][2]);
	}
	for(int f=0;f<ct;f++){
		for(int f1=0;f1<3;f1++){
			for(int f2=0;f2<3;f2++){
				if(k[f][f1]>k[f][f2]){
					mem=k[f][f1];
					k[f][f1]=k[f][f2];
					k[f][f2]=mem;
				}
			}
		}
	}
	for(int f1=0;f1<ct;f1++){
		if(pow((double)k[f1][0],2)==pow((double)k[f1][1],2)+pow((double)k[f1][2],2)){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}