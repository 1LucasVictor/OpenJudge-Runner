#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 100000
#define WEIGHT 10000

int check(long long mid, int n, int k, int weight[]){
	int i=0;
	long long tmp;
	
	for(int j=0;j<k;j++){
		tmp=0;
		while(tmp+weight[i]<=mid){
			tmp+=weight[i];
			i++;
			if(i==n)return n;
		}
	}
	return i;
}

int main(){
    int t;
	int track;
	int weight[M];
	long long left=0,right=M*WEIGHT,mid;
	int tmp;
	
	scanf("%d %d",&t,&track);
	
	for(int i=0;i<t;i++){
		scanf("%d",&weight[i]);
	}
	
	while(right-left>1){
		mid=(left+right)/2;
		tmp=check(mid,t,track,weight);
		if(tmp>=t){
			right=mid;
		}else{
			left=mid;
		}
	}
	
	tmp=right;
	
	printf("%d\n",tmp);
	
    return 0;
}

