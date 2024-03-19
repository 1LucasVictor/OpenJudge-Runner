int main(void){
    int n,i=0,a,min,max,sum;
    scanf("%d",&n);
    while(1){
    if(i>=n)
 	break;
    scanf("%d",&a);
    if(i==0){
	min=a;
        max=a;
    }if(min>a)
	min=a;
    if(max<a)
	max=a;
    sum+=a;
    i++;
    }
    printf("%d %d %d\n",min,max,sum);
    return 0;
}