#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
 {
	int nfc,ct,pun,np,pmv,mi,vt;
	printf("\n Ingrese el numero de factura ");
	scanf("%d",&nfc);
	 while (nfc!=999) {
		printf("\n Ingrese la cantidad ");
		scanf("%d",&ct);
		printf("\n Ingrese el precio unitario ");
		scanf("%d",&pun);
		printf("\n Ingrese el numero de producto ");
		scanf("%d",&np);
				vt=ct*pun;
					if (vt>mv) {
						mi=vt;
					}
				if (nfc>pmv) {
					pmv=np;
				}
	printf("\n //////////////////////////////////////////////////////////");
	printf("\n Ingrese la factura ");
	scanf("%d",&nfc);
	}
	printf("\n El mayor importe fue %d ",mi);
	printf("\n El producto mas vendido fue %d ",pmv);
	return 0;
}
