#include<stdio.h>
#include<string.h>


int main(){

	int stl=0,k;
	char str[21],str2[21];
	scanf("%s",str);
	stl=strlen(str);
	
	for(k=0;k<=stl;k++){
		str2[k]=str[stl-k-1];
	}
	
	printf("%s\n",str2);
        return 0;

} 