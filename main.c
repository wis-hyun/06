#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int combination(int n, int r) {
	int div1, div2; //div1�� ����, div�� �и�
	div1 = factorial(n);
	div2 = factorial(n-r)*factorial(r);
	return(div1/div2);
}

int factorial(int n) {
	int i, res = 1;
	for (i = 1; i <= n; i+=1) {
		res*= i;
	}
	return res;
}

int main(void) {
	int n, r;
	int result;

	printf("c(n,r), n�� r�� �Է����ּ��� : ");
	scanf("%d %d", &n, &r);
	
	result = combination(n, r);
	printf("result is %d\n", result);

}

