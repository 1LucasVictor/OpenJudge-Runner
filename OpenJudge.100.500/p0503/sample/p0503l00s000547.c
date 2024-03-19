# include <stdio.h>

int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	int flag = 0;
	for(int i = 0;i<N;i++){
		scanf("%d",&a[i]);
		if(i!=0){
			int j = 0; int p = i - 1;
			
			while(j<=p){
				if(a[i] == a[j]||a[i] == a[p]){
					flag = 1;
					printf("NO");
					break;
				} 
				j++;
				p--;
			}
		}
		
		if(flag == 1){
			break;
		}
	}
	if(flag == 0){
		printf("YES");
	}
	
	
	
	
}