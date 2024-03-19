#include <stdio.h>
int main(){

    int count0 = 0;
    int count1 = 0;
    int ans = 0;
    char s[100001] = {'a'};
    scanf("%s",s);


    for (int i = 0; i < sizeof(s); i++) {
        if (s[i] == '0') {
            count0++;
        } else if (s[i] == '1'){
            count1++;
        } else {
            
        }
    }

    if ( count0 >= count1 ) {
        ans = count1*2;
    } else {
       ans = count0*2; 
    }

    printf("%d\n",ans);
	return 0;
}