int main(void){
	double x1,x2,x3,x4,y1,y2,y3,y4;
	double d1,d2;
	int n;
	
	scanf("%d",&n);
	
	for(;n > 0;n--){
		scanf("%lf %lf %lf %lf %lf %lf %lf %lf",&x1,&y1,&x2,&y2,&x3,&y3,&x4,&y4);
		if(x1-x2==0||x3-x4==0){
			if(x1-x2 == x3-x4){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else if(y1-y2==0||y3-y4==0){
			if(y1-y2==y3-y4){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}else{
			if((y2-y1)/(x2-x1) == (y4-y3)/(x4-x3)){
				printf("YES\n");
			}else{
				printf("NO\n");
			}
		}
	}
	
	return 0;
}