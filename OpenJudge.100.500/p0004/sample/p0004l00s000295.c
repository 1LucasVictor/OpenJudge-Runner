/*
*/
#include <stdio.h>
#include <math.h>

int koubai00(int a, int b);
int kouyaku00(int a, int b);
int small00(int a, int b);

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
		if(a[i]>2000000000||b[i]>2000000000){
			i--;
		}
		i++;
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
	int i;
	for(i=1; i<=2000000000; i++){
		if(i%a==0&&i%b==0){
			break;
		}
	}
	return i;
}

int kouyaku00(int a, int b)
{
	int i=small00(a,b);
	while(1){
		if(a%i==0&&b%i==0){
			break;
		}
		i--;
	}
	return i;
}

int small00(int a, int b)
{
	int smaller;
	if(a<b){
		smaller=a;
	}
	else if(a>b){
		smaller=b;
	}
	else{
		smaller=0;
	}
	return smaller;
}