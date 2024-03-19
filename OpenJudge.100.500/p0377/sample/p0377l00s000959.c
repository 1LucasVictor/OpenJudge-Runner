#include<stdio.h>

int main(){
	int n;
	long s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char c;
		int d;
		scanf(" %c %d",&c,&d);
		switch(c){
			case 'S':d+=13*0;break;
			case 'H':d+=13*1;break;
			case 'C':d+=13*2;break;
			case 'D':d+=13*3;break;
		}
		s|=1L<<--d;
	}
	for(int i=0;i<52;i++)if(~s>>i&1)printf("%c %d\n","SHCD"[i/13],i%13+1);
}

