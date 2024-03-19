char buf[1<<20];sz;
N,H;
main()
{
	read(0,buf,1<<20);
	for(;;)
	{
		char k=buf[sz++];
		if(k<'0')break;
		N=N*10+k-'0';
	}
	for(;;)
	{
		char k=buf[sz++];
		if(k<'0')break;
		H=H*10+k-'0';
	}
	for(int i=0;i<N;i++)
	{
		int A=0;
		for(;;)
		{
			char k=buf[sz++];
			if(k<'0')break;
			A=A*10+k-'0';
		}
		H-=A;
	}
	puts(H>0?"No":"Yes");
}