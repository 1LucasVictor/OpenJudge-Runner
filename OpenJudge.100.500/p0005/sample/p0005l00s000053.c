#include <stdio.h>
int main(){
	int i=0,j=0;
	char str1[21],str2[21];
    scanf("%s",str1);
	while (1) {
		if (str1[i]=='\0') {
			str2[i]='\0';
			break;
		}else{
			for (j=i;j>0;j--) {
				str2[j]=str2[j-1];
			}
			str2[0]=str1[i];
		}
		i++;
	}
	printf("%s\n",str2);
}