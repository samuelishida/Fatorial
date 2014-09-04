#include <stdio.h>

double fat(int a)
{
	double res=a;
	while(a-1)
		res*=--a;
	return res;
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%.f\n",fat(a));
	return 0;
}
