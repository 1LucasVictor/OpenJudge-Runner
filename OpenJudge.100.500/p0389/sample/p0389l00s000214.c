#include<stdio.h>
#include<string.h>

int main(){
	char str[256],tmp[256],input[16];
	int num,cut,i,j,slen;
	
	while(1){
		fgets(str,sizeof str,stdin);
		if(str[0]=='-'){
			break;
		}
		
		slen=strlen(str);
		slen--;
		str[slen]='\0';
		
		
		fgets(input,sizeof input,stdin);
		sscanf(input,"%d",&num);
		for(i=0;i<num;i++){
			strcpy(tmp,str);
			fgets(input,sizeof input,stdin);
			sscanf(input,"%d",&cut);
			for(j=0;j<slen-cut;j++){
				str[j]=str[cut+j];
			}
			for(j=0;j<cut;j++){
				str[slen-cut+j]=tmp[j];
				
			}
			
		}
		printf("%s\n",str);
	}
	
	
	
	
	
	return 0;
}