#include<stdio.h>

int main() {


	int a, b;
	printf("Input number: ");
	scanf("%d", &a);

	while (a >= 10)
	{
		printf("%d.", a / 100);
		printf("%d.", (a % 100) / 10);
		printf("%d", a % 10);
		
		b = 1;
		while (a >= 10) {

			b *= a % 10;
			a /= 10;
		}
		
		b *= a;
		a = b;	

		if (a / 10 == 0)
			printf(" = 0\n");
	 	else printf(" = %d\n", b);
	}
	return 0;
}
