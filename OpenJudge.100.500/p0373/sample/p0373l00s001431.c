int main(){
	int H,W,i,j;
	while(1){
		scanf("%d %d",&H,&W);
		if(H==0 && W==0)break;
		for(i=1;i<=H;i++){
			for(j=1;j<=W;j++){
				if(i==1 || i==H)printf("#");
				else if(j==1 || j==W)printf("#");
				else printf(".");
			}
			printf("\n");
			if(i==H)printf("\n");
		}
	}
	return 0;
}