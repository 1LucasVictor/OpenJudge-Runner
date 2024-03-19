#include<stdio.h>

int main(){
	int N, M;
	int s[5], c[5];
	int flag = 1;
	scanf("%d %d", &N, &M);
	for(int i = 0; i < M; ++i){
		scanf("%d %d", &s[i], &c[i]);
	}
	
	for(int i = 0; i < M; ++i){
			if(s[i] == 1 && c[i] == 0){
				printf("-1");
				goto F;
			}                
		}
		for(int i = 0; i < M - 1; ++i){
			for(int j = i + i; j < M; ++j){
				if(s[i] == s[j] && c[i] != c[j]){
					flag = 0;
					break;
				}
			}
			if(flag == 0){
				break;
			}
		}
		if(flag == 0){
			printf("-1");
			goto F;
		}
		
		for(int i = 0; i < M; ++i){
				for(int j = i + 1; j < M; ++j){
					if(s[i] > s[j]){
						int t = s[i];
						s[i] = s[j];
						s[j] = t;
						t = c[i];
						c[i] = c[j];
						c[j] = t;
					}
				}
			}
	
	if(N == 3){                                 
		if(M == 0)printf("100");
		else if(M == 1){
			if(s[0] == 1) printf("%d00", c[0]);
			else if(s[0] == 2) printf("1%d0", c[0]);
			else printf("10%d", c[0]);
		}
		else{
			int flag_s1_1 = 0;
			for(int i = 0; i < M; ++i){
				if(s[0] == 1){
					if(s[0] == s[M - 1]){
						printf("%d00", c[0]);
						break;
					}
					if(i == 0) printf("%d", c[i]);
					if(i > 0 && s[i] - s[i - 1] == 1) printf("%d", c[i]);
					if(i > 0 && s[i] - s[i - 1] == 2){
						printf("0");
						if(i == M - 1 && s[i] == 3) printf("%d", c[i]); 
					}
					if(i == M - 1 && s[i] != 3) printf("0");
				}
				if(s[0] != 1){
					if(flag_s1_1 == 0){
						printf("1");
						flag_s1_1 = 1;
					}
					if(i == 0) printf("%d", c[i]);
					if(i > 0 && s[i] - s[i - 1] == 1) printf("%d", c[i]);
					if(i == M - 1 && s[i] != 3) printf("0");
				}
			}
		}
		
	}
	if(N == 2){
		if(M == 0) printf("10");
		else if(M == 1){
			if(s[0] == 1) printf("%d0", c[0]);
			else if(s[0] == 2) printf("1%d", c[0]);
		}
		else{
			for(int i = 0; i < M; ++i){
				if(s[0] == 1){
					if(s[0] == s[M - 1]){
						printf("%d0", c[0]);
						break;
					}
					if(i == 0) printf("%d", c[i]);
					if(i > 0 && s[i] - s[i - 1] == 1)printf("%d", c[i]);
				}
				if(s[0] != 1){
					printf("1%d", c[M - 1]);
					break;
				}
			}
		}
	}
	if(N == 1){
		printf("%d", c[0]);
	}
	F:return 0;
}