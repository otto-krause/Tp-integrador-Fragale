#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
 {
	int i,n=0,num1=0,resu=0,dea=0,acu=0;
	printf("Ingrese un numero a multiplicar ");
	scanf("%d",&n);
	printf("Ingrese otro numero a multiplicar ");
	scanf("%d",&num1);

	for (i=1;i<=num1;i++) {
	resu=n;
	acu=acu+resu;
	}
	printf("El resultado es %d",acu);
	return 0;
}
