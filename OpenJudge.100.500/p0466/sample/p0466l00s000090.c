#include<stdio.h>
#include<string.h>

int main(void){
	char str1[16],str2[16];
	int l1,l2,i,flg=0;
	scanf("%s%*c",str1);
	scanf("%s",str2);
	l1=strlen(str1);
	l2=strlen(str2);
	if(l1!=l2-1){
		puts("No");
	}else{	
		for(i=0;i<l1;i++){
			if(str1[i]!=str2[i]){
				break;
			}else if(i==l1-1){
				flg=1;
			}
		}
		puts((flg==1)?"Yes":"No");
	}
	return 0;
}

	
