#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
int main(void){

	int n,q;
	scanf("%d",&n);
	scanf("%d",&q);
	int i,j;
	int p[n+1];
	char moji[n][50];
	for(i=0; i<n; i++){
		scanf("%s %d",moji[i],&p[i]);
		//printf("入力した文字は%s\n",moji[i]);
	}
	
	int queuenum=n-1;
//	int queue[1000];
	int a[n+1];
	for(i=0; i< n; i++){
		a[i]=i;
	}
	int sec=0;
	int k=0;
	while(k<n){
		if(p[0]-q>0){
			int tmp=p[0]-q;
			int num=a[0];
			for(j=1; j<n; j++){
				p[j-1]=p[j];
				a[j-1]=a[j];
			}
			a[queuenum]=num;
			p[queuenum]=tmp;
		//	printf("上に上がる%d\n",p[queuenum]);
			sec+=q;
		//	printf("処理時間:%d\n",sec);
		}else{
			printf("%s %d\n",moji[a[0]],p[0]+sec);
			sec+=p[0];
			for(j=1; j<n-k; j++){
				p[j-1]=p[j];
				a[j-1]=a[j];
			}
			k++;
			queuenum--;
		}
	}
	return 0;
}
