#include<stdio.h>
int main()
{
	int sum=0, i;
	for (i=1; i<1000; i++)
	{
		if (i%3==0 || i%5==0) sum+=i;
	}
	printf("sum of all the multiples of 3 or 5 below 1000: %d", sum);
	system("pause");
	return 0;
}
