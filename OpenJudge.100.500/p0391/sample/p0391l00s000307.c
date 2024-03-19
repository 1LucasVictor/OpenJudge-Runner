#include<stdio.h>
#include<string.h>


int main(){

	char str[1000];
	scanf("%s",str);

	char cmd[3][10] = {"replace","reverse","print"}  ;
	

	int command;
	scanf("%d",&command);

	for(int i=0;i<command;i++){
		char cmd1[10];
		scanf("%s",cmd1);
		int num1,num2;
		scanf("%d %d",&num1,&num2);

		int rep = strcmp(cmd[0],cmd1);
		int rev = strcmp(cmd[1],cmd1);
		int pri = strcmp(cmd[2],cmd1);

		if(rep==0){
			char rep_str[1000];
			scanf("%s",rep_str);
			for(int k=0,j=num1;j<=num2;j++,k++){
				str[j] = rep_str[k];
			}
		}
		if(rev ==0){
			int mid = (num1+num2)/2;
			for(int j=num1,k=num2;j<=mid;j++,k--){
				char temp1 = str[j];
				str[j] = str[k];
				str[k] = temp1;
			}
		}
		if(pri==0){
			for(int j=num1;j<=num2;j++){
				printf("%c",str[j]);
			}
			printf("\n");
		}

	}

return 0;
}
