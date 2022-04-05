#include <stdio.h>

#define car 10000

int main(int argc, char **argv)
{
	int N, cont, conti, contlet, letra, cons, vog;
	
	char string [car];
	
	scanf("%d", &N);
	
	for(cont = 1;cont <= N;cont++){	
		letra = 0;
		cons = 0;
		vog = 0;
		scanf("%*c%[^\n]", string);
	
		for(conti = 0;string[conti] != '\0';conti++){
			for (contlet = 65; contlet <= 90; contlet++){
				if (((int)string[conti]) == contlet)letra++;
			}
			
			if ((((int)string[conti]) == 65) ||  (((int)string[conti]) == 69) || (((int)string[conti]) == 73) || (((int)string[conti]) == 79) || (((int)string[conti]) == 85)) vog++;
		
			for (contlet = 97; contlet <= 122; contlet++){
				if (((int)string[conti]) == contlet)letra++;
			}
				
			if ((((int)string[conti]) == 97) ||  (((int)string[conti]) == 101) || (((int)string[conti]) == 105) || (((int)string[conti]) == 111) || (((int)string[conti]) == 117)) vog++;
					

		}
		
		cons = letra - vog;
		
		printf("Letras = %d\n", letra);
		printf("Vogais = %d\n", vog);
		printf("Consoantes = %d\n", cons);
		
		
	}
	
	return 0;
}

