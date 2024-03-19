#include <stdio.h>
#include<math.h>
int sort(const void *a,const void *b){
return *(int*)b-*(int*)a;
}
int main(void)
{
int i;
int a;
char s[20];
scanf("%s",s);
for(i=strlen(s)-1;i>=0;i--){
	
	printf("%c",s[i]);
	
	
	
}
printf("\n");
return 0;
}