#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int a, b, c, d, f;
int main(void) {
	printf("���� �ΰ��� �Է��ϼ��� :");
	scanf("%d %d", &a, &b);
	int result=sumTwo(a, b);
	printf("����� %d\n", result);

	printf("���� �Ѱ��� �Է��ϼ��� :");
	scanf("%d", &c);
	int result2 = square(c);
	printf("����� %d\n", result2);

	printf("���� ���� 2���� �Է��ϼ��� :");
	scanf("%d %d", &d, &f);
	int result3 = get_max(d, f);
	printf("�ΰ� �� �� ū ���ڴ� %d\n", result3);
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

