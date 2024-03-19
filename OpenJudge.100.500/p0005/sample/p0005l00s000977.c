#include <stdio.h>
int main(){
	int i=0,j=0;
	char str1[21],str2[21];
    scanf("%s",str1);
	while (str1[i]) {
		i++;
	}
	str2[i]='\0';
	i--;
	while (i>=0) {
		str2[j]=str1[i];
		i--;
		j++;
	}
	printf("%s\n",str2);
}