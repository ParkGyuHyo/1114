#include<stdio.h>

int sum = 1;
void out(void);

int main()
{
	int sum=0;
	
	printf("sum = %d\n", sum);
	out();
	
	return 0;
}

void out(void)
{
	printf("sum = %d\n", sum);
}
