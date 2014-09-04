#include <stdio.h>

double fat(int a)
{
	return (a)?(a*fat(a-1)):(1);
}

int main()
{
	int a;
	scanf("%d",&a);
	printf("%.f\n",fat(a));
	return 0;
}
