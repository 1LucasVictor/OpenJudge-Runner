 #include <stdio.h>
 #include <string.h>
 #define mxz 2e5+10
 char a[(int)mxz], b[(int)mxz];
  
 int main(void) {
 	int d = 0;
  
 	scanf("%s", a);
 	scanf("%s", b);
  	

 	if(strcmp(a, b) != 0){
 		for(int c = 0; c <(int)strlen(a); c++){
 			if(a[c] != b[c]){
 				a[c] = b[c];
 				d++;
 			}
 		}
 		printf("%d", d);
 	}else{
 		printf("0");
 	}
  
 	return 0;
 }