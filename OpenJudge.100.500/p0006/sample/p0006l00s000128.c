#include <stdio.h>

int main(){
	int n;
	double sum=100000.0,risi,kiriage;
	int i;
	
	scanf("%d",&n);
	for(i=0;i<n;i++){
		risi=sum*0.05;
		sum+=risi;
		sum=(double)((int)sum/1000);	/*sumÌ100ÌÊÈºØèÌÄ*/
		sum*=1000.0;
		
		kiriage=risi;			/*sumÍ100ÌÊÈº©ç0ÈÌÅArisiÅ\ª*/
		while(kiriage>=1000){
			kiriage-=1000.0;
		}
		if(kiriage>0){
			sum+=1000;
		}
	}
	
	printf("%d\n",(int)sum);
	
	return 0;
}