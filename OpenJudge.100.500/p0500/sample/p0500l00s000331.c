#include<stdio.h>

int main(){
	int N,M;
	int s[10], c[11];
	int shyaku = 9, sjuu = 9, sichi = 9 ;
	int f = 0, d = 0, e = 0;
	scanf("%d %d",&N,&M);
	
	for (int a = 0; a < M;a++){
		scanf("%d %d", &s[a], &c[a]);
    }
		for(int b=0;b<M;b++){
			if(s[b] == 1){
				if(shyaku > c[b]){
					shyaku = c[b];
				f++;
                }
			}

			if(s[b] == 2){
				if(sjuu > c[b]){
					sjuu = c[b];
				d++;
                }
			}

			if(s[b]==3){
				if(sichi > c[b]){
					sichi = c[b];
				e++;
                }
		}

        }
		if(f == 0){
			shyaku = 0;
        }
		if (d == 0){
			sjuu = 0;
        }
		if(e == 0){
			sichi = 0;
        }
  
  if(N==3 && shyaku == 0){
  printf("-1");
    return 0;
  }else if(N==2 && sjuu==0){
  printf("-1");
    return 0;
  }

		printf("%d", 100 * shyaku + 10 * sjuu + sichi);

		return 0;
	}

