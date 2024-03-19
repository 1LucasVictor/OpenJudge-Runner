#include<stdio.h>
 
int main(){
	int n,a,b,c,d,ch=1;
  	scanf("%d %d %d %d %d ", &n,&a,&b,&c,&d);
  	char s[n];
  	a--;b--;c--;d--;
  	fgets(s,sizeof(s),stdin);
  	int mm,nn;
	if(c > d){ mm = c; nn=d;} else{ mm = d; nn=c;}
  	for(int i=a;i<mm;i++){
        if(s[i]=='#' && s[i+1]=='#' && ch==1){
          printf("No\n");
          ch=0;
        }
    }
  	if(c>d){
      	for(int i=b;i<=nn-1;i++){
        	if(s[i-1]=='.' && s[i]=='.' && s[i+1]=='.' && ch==1){
             	printf("Yes\n");
              	ch=0;
            }
        }
        if(s[b-1]=='.' && s[b+1]=='.' && ch==1){
            printf("Yes\n");
            ch = 0;
        }
      	if(ch==1){
          printf("No\n");
        }
    } else {
      if(ch==1){
      	printf("Yes\n");
      }
    }
  	return 0;
  
}