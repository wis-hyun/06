#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a, b, c, d, f;
int main(void) {
	printf("숫자 두개를 입력하세요 :");
	scanf("%d %d", &a, &b);
	int result=sumTwo(a, b);
	printf("결과는 %d\n", result);

	printf("숫자 한개를 입력하세요 :");
	scanf("%d", &c);
	int result2 = square(c);
	printf("결과는 %d\n", result2);

	printf("비교할 숫자 2개를 입력하세요 :");
	scanf("%d %d", &d, &f);
	int result3 = get_max(d, f);
	printf("두개 중 더 큰 숫자는 %d\n", result3);
}
int sumTwo(int a, int b) {
	return a + b;
}
int square(int n) {
	return n * n;
}
int get_max(int x, int y) {
	if (x > y)
		return x;
	else return y;
}

