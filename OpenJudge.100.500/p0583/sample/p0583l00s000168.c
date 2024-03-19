#include<stdio.h>

int main(){
	int n,a,b,c,d,ch=1,cr=0;
  	scanf("%d %d %d %d %d ", &n,&a,&b,&c,&d);
  	char s[n];
  	a--;b--;c--;d--;
  	fgets(s,sizeof(s),stdin);
  	s[a] = 'A';s[b] = 'B';
  	for(int i=0;i<n-1;i++){
        if(s[i]=='#' && s[i+1]=='#'){
          printf("No\n");
          ch=0;
        }
    }
  	if(c>d){
		if(a<n-3){
      		for(int i=a;i<n-3;i++){ 
              	if(s[i]=='#' && s[i+3]=='#' && ch==1){
              		printf("No\n"); 
                  	ch=0;
                }
            }
        }
      	for(int i=0;i<n-2;i++){
          	if(ch==0){ break;}
        	if(s[i]=='#' && s[i+2]=='#'){ ;}
          	else { cr=1;}
        }
      	for(int i=1;i<n-3;i++){
          	if(ch==0){ break;}
        	if(s[i]=='#' && s[i+2]=='#'){ ;}
          	else { cr=1;}
        }
      	if(cr==0){
        	printf("No\n");
        }
    }
  	if(ch==1)
      printf("Yes\n");
  	return 0;
  
}