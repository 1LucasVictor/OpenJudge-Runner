#include<stdio.h>
int main(){
    char s[3];
    int ans = 0;
    // 整数の入力
    scanf("%s%s%s",&s[0],&s[1],&s[2]);
    
  	if(s[0] == s[1] && s[1] == s[2]){
    	puts("No");
    }else{
  		puts("Yes");
    }
    return 0;
}