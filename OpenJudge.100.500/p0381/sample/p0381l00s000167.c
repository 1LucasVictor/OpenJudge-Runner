#include<stdio.h>

int main(){
	
	int i,j,k,l;
	int flag;
	int sum,sum_cnt,caseno;
	int s_case[50][2]={0};
	
	for(i=0; i<50; i++){
		scanf("%d %d",&s_case[i][0],&s_case[i][1]);
		if(s_case[i][0]==0 && s_case[i][1]==0){
			break;
		}
	}
	
	caseno = i;
	flag = 0;
	
	for(i=0;i<caseno;i++){
		sum_cnt = s_case[i][1];
		for(j=s_case[i][0]; j>2; j--){
			for(k=j-1; k>1; k--){
				for(l=k-1; l>0; l--){
					if((sum_cnt - j - k - l) == 0){
						flag++;
					}
				}
			}
		}
		printf("%d\n",flag);
		flag = 0;
	}
	
	return 0;
}


