#include<stdio.h>

int main(){
	int n,a,b,c,d,ch=1,cr=0;
  	scanf("%d %d %d %d %d ", &n,&a,&b,&c,&d);
  	char s[n];
  	a--;b--;c--;d--;
  	fgets(s,sizeof(s),stdin);
  	s[a] = 'A';s[b] = 'B';
  	int mm;
	if(c > d){ mm = c;} else{ mm = d;}
  	for(int i=a;i<mm;i++){
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
      	for(int i=a;i<=mm;i++){
        	if(s[i]=='.' && s[i+1]=='.' && s[i+2]=='.' && ch==1){
             	printf("Yes\n");
              	ch=0;
            }
        }
    } else{
      printf("Yes\n");
    }
  	return 0;
  
}