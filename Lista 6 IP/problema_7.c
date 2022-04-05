#include <stdio.h>

#define Max 6

int main(int argc, char **argv)
{
	int cont, cont2 , vet[Max][Max], maior, amp;
	
	for (cont = 0; cont< Max; cont++){
		for (cont2 = 0;cont2 < Max; cont2++){
		scanf("%d", &vet[cont][cont2]);
		
		}
		
	}
	
	maior = vet[0][0] + vet[0][1] + vet[0][2] + vet[1][1] +  vet[2][0] + vet[2][1] + vet[2][2];
	
	for (cont = 0; cont< Max; cont++){
		for (cont2 = 0;cont2 < Max; cont2++){
			amp = 0;
			if((cont + 3 <= Max) && (cont2 + 3 <= Max)){
				amp =  vet[cont][cont2] + vet[cont][cont2+1] + vet[cont][cont2+2] + vet[cont+1][cont2+1] +  vet[cont+2][cont2] + vet[cont+2][cont2+1] + vet[cont+2][cont2+2];
				if (amp > maior) maior = amp;
				
			}
			
		
		}
		
	} printf("%d\n", maior);
	
	return 0;
}

