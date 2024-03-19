#include<stdio.h>
#include<math.h>

int main(void)
{
	int n;
	scanf("%d",&n);

	int a[n];
	int str[1000];
	scanf("%s",str);

	int i,k;
	int j=0,num=0,cnt=0,gu=0,ok=0;
	int copy[100];
	for(i=0;str[i]!='\0';i++){
		if(str[i]!=' '){
			copy[j]=str[i];
			j++;
		}
		else{
			for(k=j-1;k>=0;k--){
				num+=(copy[k]-'0')*pow(10,k);
			}
			a[cnt]=num;
			cnt++; j=0; num=0;
		}
	}
	for(k=j-1;k>=0;k--){
		num+=(copy[k]-'0')*pow(10,k);
	}
	a[cnt]=num;

	for(i=0;i<=cnt;i++){
		if(a[i]%2==0){
			gu++;
			if(a[i]%3==0||a[i]%5==0){
				ok++;
			}
			else{
				puts("DENIED");
				break;
			}
		}
		if(i==cnt){
			if(gu==0){
				puts("DENIED");
			}
			if(gu==ok&&gu!=0){
				puts("APPROVED");
			}
		}
	}
	return 0;
}
