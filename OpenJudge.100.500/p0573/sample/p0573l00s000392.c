#include <stdio.h>

int 
main(){
	char s[4];
	int i;
	char tmp[4];
	int j=0;
	scanf("%s",s);
	static int cnt[4];
	int k;
	int l=0;
	for(i=0;i<4;i++){
		tmp[j]=s[i];
		for(k=i+1;k<4-i;k++){
			if(tmp[j]==s[k])cnt[l]++;
		}
		if(cnt[l]!=0)l++;
	}
	if(cnt[0]*cnt[1] == 1)printf("Yes\n");
	else printf("No\n");

 return 0;
}