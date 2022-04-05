#include <stdio.h>

void printbytes(const void *endbyte, int n){
	
	unsigned char *pbyte = (unsigned char *)endbyte;
	int cont, cont2, num;
	
	unsigned char byte, tam, bit;
	
	for(cont = 0; cont < n; cont++){
		
		byte = *pbyte;
		tam = 128;
		num = 0;
		
		for(cont2 = 0;cont2 < 8;cont2++){
			bit = byte/tam;
			
			if(bit >= 1){
				
				num = num + tam;
				
			}else{
				
			}
			
			byte = byte % tam;
			tam = tam/2;
		
		}
			
		pbyte++;
		printf("%d,", num);	
	}

}

int main(int argc, char **argv)
{
	double numd;
	unsigned char numuc;
	unsigned short numus;
	unsigned int numui;
	float numf;
	
	scanf("%lf", &numd);
	
	numuc = numus = numui = numf = numd;
	
	printbytes(&numuc, sizeof(unsigned char));
	printf("\n");
	
	printbytes(&numus, sizeof(unsigned short));
	printf("\n");
	
	printbytes(&numui, sizeof(unsigned int));
	printf("\n");
	
	printbytes(&numf, sizeof(float));
	printf("\n");
	
	printbytes(&numd, sizeof(double));
	printf("\n");
	
	return 0;
}
