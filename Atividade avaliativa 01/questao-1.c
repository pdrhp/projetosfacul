#include <stdio.h>
#include <stdlib.h>


int main() {
	int A;
	int B;
	int C;
	int D;
	
	printf("Digite os valores de A, B, C e D: ");
	scanf("%d %d %d %d", &A, &B, &C, &D);
	
	int DIFERENCA = A*B - C*D;
	
	printf("(%d * %d) - (%d * %d)", A, B, C, D);
	printf("\n%d - %d", A*B, C*D);
	printf("\n%d", DIFERENCA);
	printf("\nA diferença dos produtos AB e CD e: %d", DIFERENCA);
		
}
