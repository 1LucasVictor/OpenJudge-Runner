#include <stdio.h>
int main(){
                  char s[3];
    int c=0,i=0;
    scanf("%s",s);
    for(;i<3;i++){
    	if(s[i]=='1'){
    		c++;
    	}
    }
    printf("%d\n",c);
 return 0;
}
