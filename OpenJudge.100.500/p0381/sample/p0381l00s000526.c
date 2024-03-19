#include<stdio.h>
int main(){
	int set;
	int tag;
	int mid;
	int i, j;
	int count = 0;
	
	while(1){
		scanf("%d %d", &set, &tag);
		if(set == 0 && tag == 0){
			break;
		}
		for(i = 1;i < set;i++){
			for(j = i;j <= set;j++){
				mid = tag - (i + j);
				if(mid > i && mid < j){
					count++;
				}
			}
		}
		printf("%d\n", count);
	}
	return 0;
}

