#include<stdio.h>
void print_binary(int x);

int main()
{
	int n;
	
	printf("정수 입력: ");
	scanf("%d", &n);
	print_binary(n);
	printf("\n");
	return 0;
}

void print_binary(int x)
{
	if(x > 0)
	{
		int a;
		a = x / 2;
		printf("%d\n", a);
		print_binary(a);
		printf("%d", x % 2);
		printf("%d\n", a);
	}
}
