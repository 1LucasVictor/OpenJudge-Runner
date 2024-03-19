#include<stdio.h>
int max;

int main(){

scanf("%d\n",&max);
	int i,q;
	int p[52];
	char c;
	for(i=0;i<max;i++){
		
		if(i==max-1){scanf("%c %d",&c,&q);}
		else{scanf("%c %d\n",&c,&q);}
		switch(c){
			case 'S':p[q-1]=1;break;
			case 'H':p[q-1+13]=1;break;
			case 'C':p[q-1+26]=1;break;
			case 'D':p[q-1+39]=1;break;
		}
	}
	for(i=0;i<51;i++){
		if(p[i]!=1){
			if(i/13 == 0){printf("S %d\n",i+1);}
			else if(i/13 == 1){printf("H %d\n",i+1-13);}
			else if(i/13 == 2){printf("C %d\n",i+1-26);}
			else if(i/13 == 3){printf("D %d\n",i+1-39);}
		}
	}
	if(p[51]!=1){printf("D 13");}
return 0;
}