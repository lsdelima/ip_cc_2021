#include <stdio.h>

int main(int argc, char **argv)
{
	int mat, denp; float salmin, salfunc, taximp, impbr, impli, resu;
	
	scanf("%d", &mat);
	scanf("%f", &salmin);
	scanf("%d", &denp);
	scanf("%f", &salfunc);
	scanf("%f", &taximp);
	
	if(salfunc >= (salmin*12)){
		impbr = salfunc * 0.20;
		impli = impbr - (300*denp);
		resu = impli - (salfunc*(taximp/100));	

	}if((salfunc >= (salmin*5)) && (salfunc < (salmin*12))){
		impbr = salfunc * 0.08;
		impli = impbr - (300*denp);
		resu = impli - (salfunc*(taximp/100));	
		
	}if (salfunc < (salmin*5)){
		impbr = 0;
		impli = impbr - (300*denp);
		resu = impli - (salfunc*(taximp/100));	
	}
	
	printf("\nMATRICULA = %d\n", mat);
	printf("IMPOSTO BRUTO = %.2f\n", impbr);
	printf("IMPOSTO LIQUIDO = %.2f\n", impli);
	printf("RESULTADO = %.2f\n", resu); 
	
	if(resu<0){
		printf("IMPOSTO A RECEBER");
	}else if(resu == 0){
		printf("IMPOSTO QUITADO");
	}else if (resu > 0){
		printf("IMPOSTO A PAGAR");
	}
	
	return 0;
}

