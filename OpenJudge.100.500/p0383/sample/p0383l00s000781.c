#include <stdio.h>

int main(){
	
	int a,b,c;
	
	scanf("%d %d %d",&a,&b,&c);
	
	int first[a][b],second[b][c];
	
	int d,e,f,g,h,i,j,k,m; //ループで使う定数一覧
	
	for(d=0;d<=a-1;d++){
		
		for(e=0;e<=b-1;e++){
			
			scanf("%*c%d",&first[d][e]);
			
		}
		
	}
	
	//一つ目の行列の入力完了
	
	for(f=0;f<=b-1;f++){
		
		for(g=0;g<=c-1;g++){
			
			scanf("%*c%d",&second[f][g]);
			
		}
		
	}
	
	//二つ目の行列の入力完了
	
	int answer[a][c];
	
	for(h=0;h<=a-1;h++){
		
		for(i=0;i<=c-1;i++){
			
			answer[h][i]=0;
			
			for(j=0;j<=b-1;j++){
				
				answer[h][i]+=first[h][j]*second[j][i];
				
			}
			
		}
		
	}
	
	//行列の積の計算完了
	
	for(k=0;k<=a-1;k++){
		
		for(m=0;m<=c-1;m++){
			
			printf("%d",answer[k][m]);
			
			if(m!=c-1)
			
				printf(" ");
			
		}
		
		printf("\n");
		
	}
	
	return 0;
	
}