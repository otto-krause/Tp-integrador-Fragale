#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
 {
	int i=1,div;
	float nd;
	printf("Ingrese un numero a dividir ");
	scanf("%f",&n);
	printf("Ingrese el divisor ");
	scanf("%d",&div);
	while (div<n){
	n=n-div;
	}
		if (n==div){
			n=n-div;
		}
	printf("El resto es %f",n);
	return 0;
}
