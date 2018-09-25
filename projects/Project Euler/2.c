#include<stdio.h>
int main()
{
	//4 million = 4,000,000
	int f[32], i, sum=0;
	f[0]=1;
	f[1]=2;
	for(i=2; i<32; i++)
	{
		f[i]=f[i-1]+f[i-2];
		printf("%d) %d\n", i, f[i]);
	}
	for (i=0;i<32;i++)
	{
		if(f[i]%2==0) sum+=f[i];
	}
	printf("sum of even terms is %d", sum);
	return 0;
}
