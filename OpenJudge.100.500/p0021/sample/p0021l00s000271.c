#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX 500
/*
int comp( const void *c1, const void *c2 )
{
  int tmp1 = *(int *)c1;
  int tmp2 = *(int *)c2;

  if( tmp1 > tmp2 )  return -1;
  if( tmp1 < tmp2 )  return  1;

	return 0;
}
*/
int main(void){
	int a[MAX],sum[MAX][MAX];
	int i,j;
	int n,maximum;
	int cnt,cnt2;

	while(1){
		scanf("%d",&n);
		if(n==0)return 0;//I¹ð
	
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		a[n]='\0';//I[Ék¶ð
		cnt=1,cnt2=0;
		for(i=0;i<MAX;i++)for(j=0;j<MAX;j++)sum[i][j]=0;//ú»
		for(i=0;i<n;i++){
			sum[cnt][cnt2]+=a[i];
			for(j=i+1;a[j]!='\0';j++){

				sum[cnt++][cnt2]+=a[j]+sum[cnt-1][cnt2];
				//printf("sum[%d][%d]=a[%d]+sum[%d][%d]=%d+%d=%d\n",cnt-1,cnt2,j,cnt-2,cnt2,a[j],sum[cnt-2][cnt2],sum[cnt-1][cnt2]);
			}
			cnt2++;
		}
		cnt2--;
		cnt--;
		maximum=sum[3][3];
		for(i=cnt2;i>=0;i--){
			for(j=cnt;j>=0;j--){
				if(maximum < sum[j][i])
					maximum=sum[j][i];
					//printf("%d\n",maximum);
			}
		}
		//qsort(sum,strlen(sum),sizeof(int),comp);
		printf("%d\n",maximum);
	}
}