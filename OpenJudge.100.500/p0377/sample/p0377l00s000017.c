#include <stdio.h>


void sort(int x[],int len){
	int i,j;
	int tmp;
	for(i = 0;i < len;i++){
		for(j = 0;j < len-1-i;j++){
			if(x[j] > x[j+1]){
				tmp = x[j];
				x[j] = x[j+1];
				x[j+1] = tmp;
			}
		}		
	}
}
void ans(int x[],char type,int len){
	int i,j;

	for(i = 0,j = 1;i < len;i++,j++){
		if(x[i] > j){
			printf("%c %d\n",type,j);
			i--;	
		}
	}
}

int main(void){
	char type;
	int number;
	int n;
	int s[14],h[14],c[14],d[14];
	int sc,hc,cc,dc;
	sc=hc=cc=dc=0;
	int i,j,cou=0;

	scanf("%d",&n);
	for(i = 0;i < n;i++){
	scanf(" %c%d",&type,&number);
		switch(type){
			case 'S':
				s[sc++] = number;
				break;
			case 'H':
				h[hc++] = number;
				break;
			case 'C':
				c[cc++] = number;
				break;
			case 'D':
				d[dc++] = number;
				break;
		}
	}
	sort(s,sc);
	sort(h,hc);
	sort(c,cc);
	sort(d,dc);
	ans(s,'S',sc);
	ans(h,'H',hc);
	ans(c,'C',cc);
	ans(d,'D',dc);
	
	return 0;
}