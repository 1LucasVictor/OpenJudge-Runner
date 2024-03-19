#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void){
	int n,a=0,i,save;
	int one, two, three;
	bool tri=false;
	bool result[100];
		
	memset(result,false,sizeof(result));
	
	scanf("%d",&n);
	save = n;
	
	while(n!=0){
		scanf("%d %d %d",&one,&two,&three);
		
		if((one*one)+(two*two)==(three*three)){
			tri = true;
		}else if((one*one)+(three*three)==(two*two)){
			tri = true;
		}else if((two*two)+(three*three)==(one*one)){
			tri = true;
		}
		
		switch(tri){
			case true  : result[a]=true;
				     break;
			case false : result[a]=false;
				     break;
		}
		n--;
		a++;
		tri = false;
	}
	
	for(i=0;i<save;++i){
		if(result[i]==true){
			printf("YES\n");
		}else if(result[i]==false){
			printf("NO\n");
		}
	}
	
	return 0;
}