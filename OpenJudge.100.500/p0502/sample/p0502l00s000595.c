#include<stdio.h>
int main()
{
	int n,i,j,cnt,cnt2,a[1000],b[1000];
	cnt=0;
	cnt2=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]%2==0){
			b[i]=a[i];
			cnt++;
		}
	}
	for(i=0;i<cnt;i++){
		cnt2=0;
		if(b[i]%3!=0){
			cnt2++;
		}
		if(b[i]%5!=0){
			cnt2++;
		}
		if(cnt2>=2) break;
	}
	if(cnt2>=2){
		printf("DENIED\n");
	}
	else printf("APPROVED\n");
	return 0;
}