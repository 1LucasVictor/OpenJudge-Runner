#include <stdio.h>

int pita();

int main(){
	int num,length[2],longest,i,temp,unko;
	scanf("%d",&num);
	for (;num>0;num--){
		longest=0;
		for(i=0;i<3;i++){
			scanf("%d",&temp);	
			if (temp>longest){
				if (longest>0) length[i-1]=longest;
				longest=temp;
			}else{
				length[i-1]=temp;
			}
		}
			
		unko=pita((double)length[0],(double)length[1],(double)longest);
		
		if (unko){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
		
	}
	return 0;
}

int pita(double a,double b,double c){
	return (c*c==a*a+b*b);
}