#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	printf("%d", sizeof(short int));
	//2
	printf("%u", sizeof(short int));
	//2
	printf("%lu", sizeof(short int));
	//2
	printf("%zd", sizeof(short int));
	//2
	printf("%d\n", sizeof(int));
	//x86 -> 4, x64 -> 4

	printf("%d %d", sizeof(long int), sizeof(long long int));
	//4 8
	printf("%d %d %d", 0b00000111, 012, 0x10);
	//7 10 16

	printf("%o %d %x %X", 26, 26, 26, 26);
	//32 26 1a 1A
	printf("%#o %#d %#x %#X", 26, 26, 26, 26);
	//032 26 0x1a 0x1A

	printf("%d", 84585858586858LL);
	//772659434
	printf("%lld", 84585858586858LL);
	//84585858586858

	int i = 2147483647;
	printf("%d %d %d\n", i, i + 1, i + 2);
	//2147483647 - 2147483648 - 2147483647
	unsigned int j = 4294967295;
	printf("%u %u %u\n", j, j + 1, j + 2);
	//4294967295 0 1

	char a = '\n';
	printf("%c%c%c", a, a, a);
	//
	//
	//

	printf("Hello\007\n");
	//\007 -> 蜂鸣 -> 八进制
	
	printf("%f %.2f %lf %e %E %g %G", 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0);
	//1.000000 1.00 1.000000 1.000000e+00 1.000000E+00 1 1
	
	char* s = "dadadadadadada";
	printf("%s\n", s);
	printf(s);
	//dadadadadadada
	//dadadadadadada

	printf("%d", 1.211);
	//-1992864825
	printf("%d", (int)1.211);
	//1

	float salary;
	printf("\aEnter your desired monthly salary:");
	printf("$_______\b\b\b\b\b\b\b");
	scanf("%f", &salary);
	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
	printf("\rGee!\n"); //\r -> 光标回到当前行的开头
	//Enter your desired monthly salary : $4000.000
	//
	//Gee!$4000.00 a month is $48000.00 a year.
	return 0;
}