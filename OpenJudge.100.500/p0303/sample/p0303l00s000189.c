#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

// return track_count;
int NeedTrack(int max,int obje[],int n){
	int re = 0;
	int val = 0;
	for(int i = 0; i < n; i++){
		if(max < obje[i]){ //本来なら載せれないので
			return 10000000;
		}else if(val + obje[i] <= max){
			val += obje[i];
		}else{
			re++;
			val = obje[i];
		}
	}
	return re+1;
}




int main() {
	int n,k;
	scanf("%d",&n);
	scanf("%d",&k);
	
	int list[n];
	int max = 0;
	
	//まずは代入していく。
	for(int i = 0; i < n; i++){
		scanf("%d",&list[i]);
		if(max < list[i]){
			max = list[i];
		}
	}
	
	int left = 0;
	int right = max * n;
	int mid;
	
	int retu = -1;
	for(;left <= right;){
		mid = (left + right) / 2;
		int ch = NeedTrack(mid,list,n);
//		printf("%d\t%d\t%d\t%d\n",left,mid,right,ch);
		if(left == right){
			if(ch <= k){
				retu = mid;
			}
			break;
		}
		if(ch < k){
			right = mid;
		}else if(ch > k){
			left = mid + 1;
		}else{
			if(mid == retu){
//				printf("break_b\n");
				break;
			}else{
				right = mid;
				retu = mid;
			}
		}
		
	}
	
	printf("%d\n",retu);
	return 0;
}




