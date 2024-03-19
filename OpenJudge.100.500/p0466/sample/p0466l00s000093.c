#include<stdio.h>
#include<string.h>
int main(void)
{
	int i,j,len,len2,y,x;
	char s[11],a[11];
	scanf("%s",a);
	scanf("%s",s);
	len=0; len2=0; y=0; x=0;
	len=strlen(a);
	len2=strlen(s);
	for(i=0;i<len;i++){
		if(a[i]==s[i]){
			y++;
		}
		else{
			x++;
		}
	}
	if(x<1){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}