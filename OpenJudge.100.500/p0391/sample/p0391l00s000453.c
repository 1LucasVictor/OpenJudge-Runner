#include<stdio.h>
#include<string.h>

int main(void){

	int n,i,j;
	int a,b;
	int sum;
	char work[1001];
	char s[1001];
	char com[8];


	scanf("%s",s);
	scanf("%d",&n);

	for(i=0;i<n;i++){

		for(j=0;j<strlen(work);j++){
			work[j]=NULL;
		}
		for(j=0;j<8;j++){
			com[j]=NULL;
		}

		scanf("%s %d %d",com,&a,&b);
		if(strcmp("replace",com)==0){
			scanf("%s",work);
			sum=0;
			for(j=a;j<=b;j++){
				s[a+sum]=work[sum];
				sum++;
			}
		}
		else if(strcmp("reverse",com)==0){
			sum = 0;
			for(j=b;j>=a;j--){
				work[sum]=s[j];
				sum++;
			}
			sum--;
			for(j=b;j>=a;j--){
				s[j]=work[sum];
				sum--;
			}
		}
		else{
			for(j=a;j<=b;j++)
				printf("%c",s[j]);

			puts("");
		}

	}

	return 0;

}