    #include <stdio.h>
     
    int main(){
    	int x,y;
    	scanf("%d %d",&x,&y);
    	int a,f=0;
    	for(a=0;a<=x;a++){
    		int z=x+a;
    		if(y==2*z){
    			f++;
    			break;
    		}
    	}
    	if(f>0) printf("Yes\n");
    	else       printf("No\n");
    	return 0;
    }