#include<stdio.h>
int main()
{
	int count = 0;
	int i = 0;
	int n = 0;
	scanf_s("%d", &n);
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)
		{
			count++;
		}
	}
	printf("%d", count);
}
int text(unsigned int n)
{
	int count = 0;
	while (n)
	{
		if ((n % 2) == 1)
		{
			count++;
		}
		n = n / 2;
	}
	return count;
}
#include<stdio.h>
int main()
{
	int i = 0;
	int n = 0;
	scanf_s("%d", &n);
	int len = text(n);
	printf("%d", len);
}
