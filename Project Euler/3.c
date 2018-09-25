#include<stdio.h>
#include<math.h>
int main()
{
long int n=600851475143;
long int i, k, flag=0;
for (i=1; i<=sqrt(n); i++)
{
	if(n%i==0) // i is a factor
	{
		for(k=2; k<=sqrt(i); k++) // check if i is a prime
		{
			if(i%k==0) {flag=1; break;}
		}
		if (flag==0) printf("prime factor found: %ld\n", i);
		if (flag==1) printf("composite factor found: %ld\n", i);
	}
}
return 0;
}
