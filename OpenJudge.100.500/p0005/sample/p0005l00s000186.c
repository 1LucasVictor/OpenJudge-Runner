#include<stdio.h>
#include<string.h>
int main(){
	//freopen("in/0006.txt","r",stdin);
	char str[20];
	fgets(str,20,stdin);
	int i=0,len=strlen(str),mid=len/2;
	char c,*ptr=str;
	do{
		int j=len-2*i-1;
		c=*ptr;*ptr=*(ptr+j);*(ptr+j)=c;
		i++;
		ptr+=1;
	}while(i<mid);
	printf("%s\n",str);
	return 0;
}