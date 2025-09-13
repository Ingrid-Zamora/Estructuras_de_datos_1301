#include <stdio.h>
#include <stdlib.h>

int main(){
	int numcuenta;
	int numpares[10];
	int i;
	int numfinal;

	printf("\nInserte numero de cuenta: ");
	scanf("%d", &numcuenta);
	
	numfinal = numcuenta % 10;
	
	for(i=0; i<10; i++){
		numpares[i]=(i+1)*2;
	}
	
	printf("\nEl arreglo inverso es: ");
	for(i=9; i>=0; i--){
		printf("| %d |\n", numpares[i]);
	}
	
	if(numfinal>=0 && numfinal<10){
		numpares[numfinal]=-1;
	}
	
	printf("El arreglo final es: ");
	for(i=0; i<10; i++){
		printf("| %d |\n", numpares[i]);
	}
	
	printf("\n");
	
	return 0;
}


