#include<stdio.h>
int main()
{
    int i;
    char s[3];
  	int ans = 0;
    scanf("%s", &s);
  	for(i=0;i<3;i++){
      if(s[i] == '1'){
          ans++;
      }
    }
	printf("%d",ans);    
    return 0;
}