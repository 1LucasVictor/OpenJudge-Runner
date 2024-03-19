#include<stdio.h>
#include<string.h>
int main(void)
{
	char str[201]={0,},str1[201]={0,},str2[201]={0,};
	int n,h,size,i;
    
    while(1){
		scanf("%s", &str);
		if(str[0]=='-') break;
		size=strlen(str);
		scanf("%d", &n);
		for(i=0;i<n;i++){
			scanf("%d", &h);
			if(size>h){
				strcpy(str1,&str[h]);
				str[h]='\0';
				strcpy(str2,&str[0]);
				strcat(str1,str2);
				strcpy(str,str1);
			}

		}
		printf("%s\n",str);
	}
	return 0;   
}