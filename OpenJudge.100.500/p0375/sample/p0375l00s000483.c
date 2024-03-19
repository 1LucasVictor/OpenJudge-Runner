#include<stdio.h>

void Hantei();
int n,i,k,x=0;
int three[10000];

int main(){
	scanf("%d",&n);
	Hantei();
	for(i=0;i<k;i++)printf(" %d",three[i]);
	printf("\n");
	
	return 0;
}

void Hantei(){
	for(x=1,i=1;i<=n;i++){
		if(((x%3)==0)||((x%10)==3)){
			three[k]=x;
			k++;
		}else if(x>=10){
			while(1){
				x=x/10;
				if((x==3)||(x%10)==3){
					three[k]=i;
					k++;
					break;
				}else if(x<10)break;
			}
		}
		x=i+1;
	}
	return;
}
