
int main(){
	int a,b,c,aa[100],n,i,temp;
	
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d %d %d",&a,&b,&c);
		if(a > c){
            temp = c;
            c = a;
            a = temp;
        }
        if(b > c){
            temp = c;
            c = b;
            b = temp;
        }
		
		if(c*c==a*a+b*b){ printf("YES\n");
		}else{ printf("NO\n");
		}
	}
	return 0;
}