#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 100000
#define WEIGHT 10000

int check(long long mid, int n, int k, int weight[]){
	int i=0;
	long long tmp;
	
	for(int j=0;j<k;j++){ //トラックがある限り
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
    int k; //荷物数
	int track; //トラック
	int weight[M]; //荷物の重さ
	long long left=0,right=M*WEIGHT,mid; //探査用変数
	int tmp;
	
	scanf("%d %d",&k,&track);
	
	for(int i=0;i<k;i++){
		scanf("%d",&weight[i]);
	}
	
	while(right-left>1){
		mid=(left+right)/2;
		tmp=check(mid,k,track,weight);
		if(tmp>=k){
			right=mid;
		}else{
			left=mid;
		}
	}
	
	tmp=right;
	
	printf("%d\n",tmp);
	
    return 0;
}
