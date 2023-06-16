#include <stdio.h>



int main(){
	
	int l,cm;
	float area;
	
	printf("\n Digite o numero de lados do poligono:");
	scanf("%d",&l);
	printf("\n Digite a medida em cm dos lados:");
	scanf("%d",&cm);
	
	if(l == 3){
		area=(cm*cm)/2;
	    printf("Esse poligno e um triangulo com area:",&l);
		
	}
else{
	if(l==4){
		area=(cm*cm);
	}
}


return 0;
}