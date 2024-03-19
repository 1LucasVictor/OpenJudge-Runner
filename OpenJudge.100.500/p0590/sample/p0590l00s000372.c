int main (void){

    int a,b,c,d,e,k,ans;

    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&k);

        if(b-a<=k&&c-a<=k&&d-a<=k&&e-a<=k&&c-b<=k&&d-b<=k&&e-b<=k&&d-c<=k&&e-c<=k&&e-d<=k){

            puts("Yay!\n");

    }else{

        puts(":(\n");

    }

    return 0;

}