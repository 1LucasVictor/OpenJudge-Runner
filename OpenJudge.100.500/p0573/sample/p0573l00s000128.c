#include <stdio.h>

int main(void) {
    int cnt =0;
    int cnt2 =0;
    char temp;
	char a[4];
	for(int i = 0;i < 4;i++){
	    scanf("%c",&a[i]);
	}
	for(int i = 0;i< 4;i++){
	    
	   if(a[0] != a[i]){
	       cnt2++;
	   }
	    
	    
	}
	
    if(cnt2 == 2){
        printf("Yes");
    }else{
        printf("No");
    }
	return 0;
	
}

