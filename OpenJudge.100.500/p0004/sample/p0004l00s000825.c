#include <stdio.h>

int main(){
	int a,b;
	int i;
	int GCD=1,LCM;	/*Ååöñ,Å¬ö{*/
	
	while(scanf("%d %d",&a,&b)!=EOF){
		for(i=2;i<=a;i++){				/*½è*/
			if(a%i==0 && b%i==0){		/*öñª©Â©éxÉA							*/
				GCD=i;					/*ÅåöñðXV·éB									*/
			}							/*(iðaÌlÜÅã°Ä¢­ÌÅAÊAÅåöñÉ)	*/
		}
		LCM=(a/GCD)*(b/GCD)*GCD;			/*Å¬ö{ÌvZ*/
		
		printf("%d %d\n",GCD,LCM);
	}
	
	return 0;
}