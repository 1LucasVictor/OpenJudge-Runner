#include<stdio.h>
int main(void){
	char tr[30];
	int i=0,j,k,l,in[10]={ 0 },out[10]={ 0 };
	
	while(scanf("%d",&tr[i])!=EOF){i++;}
	
	for(j=0,k=0,l=0;j<i;j++){
		switch(tr[j]){
			case 1:
				in[k]=1;
				k++;
				break;
			case 2:
				in[k]=2;
				k++;
				break;
			case 3:
				in[k]=3;
				k++;
				break;
			case 4:
				in[k]=4;
				k++;
				break;
			case 5:
				in[k]=5;
				k++;
				break;
			case 6:
				in[k]=6;
				k++;
				break;
			case 7:
				in[k]=7;
				k++;
				break;
			case 8:
				in[k]=8;
				k++;
				break;
			case 9:
				in[k]=9;
				k++;
				break;
			case 10:
				in[k]=10;
				k++;
				break;
			case 0:
				k--;
				out[l]=in[k];
				l++;
				break;
			default :
				break;
		}
	}
	for(i=0;i<l;i++){
		printf("%d\n",out[i]);
	}
	return 0;
}