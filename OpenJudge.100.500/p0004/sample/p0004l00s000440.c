#include <stdio.h>

int koubai00(int a, int b);
int kouyaku00(int a, int b);

int main()
{
	int a[10],b[10];
	int i=0,count;
	int koubai[10],kouyaku[10];
	int ret;
	while(1){
		ret=scanf("%d %d",&a[i], &b[i]);
		if(ret==EOF){
			break;
		}
		if(a[i]<=2000000000&&b[i]<=2000000000){
			i++;
		}
	}
	count=i;
	for(i=0; i<count; i++){
		koubai[i]=koubai00(a[i], b[i]);
		kouyaku[i]=kouyaku00(a[i], b[i]);
	}
	for(i=0; i<count; i++){
		printf("%d %d\n",kouyaku[i], koubai[i]);
	}
    return 0;
}

int koubai00(int a, int b)
{
	int small,big;
	if(a<b){
		small=a;
		big=b;
	}
	else if(a>b){
		small=b;
		big=a;
	}
	else{
		return a;
	}
	int r;
	int result;
	while(small!=0){
		r=big%small;
		big=small;
		small=r;
	}
	result=(a/big)*b;
	return result;
}

int kouyaku00(int a, int b)
{
	int small,big;
	if(a<b){
		small=a;
		big=b;
	}
	else if(a>b){
		small=b;
		big=a;
	}
	else{
		return a;
	}
	int r;
	while(small!=0){
		r=big%small;
		big=small;
		small=r;
	}
	return big;
}