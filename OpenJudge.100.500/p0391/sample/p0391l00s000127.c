#include<string.h>

int main(){

  int i,j,k=0,n,m1,m2,len;
  char str[1000],mei[10],p[1000],print[1000],rev1[1000],rev2[1000],rev3[1000];

	scanf("%s",str);
	len=strlen(str);
	scanf("%d",&n);

	for(i=0;i<n;i++){
		scanf("%s",mei);
		
    if(strcmp(mei,"print")==0){
      scanf("%d%d",&m1,&m2);
			for(j=m1;j<=m2;j++){
				printf("%c",str[j]);
			}
			puts("");
			
			
	}else if(strcmp(mei,"reverse")==0){
			scanf("%d%d",&m1,&m2);
			for(j=m2+1;j<len;j++){
				rev2[j-m2]=str[j];
				rev3[j]=rev2[j-m2];
			}
		for(j=m2;j>=0;j--){ 
				rev1[m2-j]=str[j];
				rev3[m2-j]=rev1[m2-j];
			}
			strcpy(str,rev3);
			
			
		}else if(strcmp(mei,"replace")==0){
			scanf("%d%d%s",&m1,&m2,p);
			for(j=m1;j<=m2;j++){
				str[j]=p[k];
				if(k<m2-m1+1){
					k++;
					}
			}
		}
	}
	return 0;
}

	
		