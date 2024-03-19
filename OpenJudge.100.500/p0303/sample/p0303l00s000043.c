#include<stdio.h>
#include<limits.h>

int f(int n,int *w,int p,int k)//最大積載量を仮定した時に必要な台数を返す
{
	int i,cnt=0,sum=0;
	for(i=0;i<n;i++){
		if(cnt==k||w[i]>p) return i;//台数が上限または最大積載量以上の荷物ありなら終了
		if(w[i]<=p-sum) sum+=w[i];
		else{
			cnt++;
			sum=0;
			i--;
		}
	}
	return n;
}

int main(void)
{
	int i,n,k,w[1000000];
	int right=INT_MAX,left=0,mid,result;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++) scanf("%d",&w[i]);
	
	while(right-left>1){//二分探索 right,left,midは最大積載量
		mid=(right+left)/2;
		result=f(n,w,mid,k);
		if(result>=n) right=mid;
		else left=mid;
	}
	
	printf("%d\n",right);
	return 0;
}
