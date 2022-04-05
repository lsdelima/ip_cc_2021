#include <stdio.h>

#define Max 256

void remove_vogais(char *str, int *vogais){
	
	char aux[Max];
	
	int cont, contaux = 0;
	
	for(cont = 0; str[cont] != '\0'; cont++){
		
		if((str[cont] != 'A') && (str[cont] != 'a') && (str[cont] != 'E') && (str[cont] != 'e') && (str[cont] != 'I') && (str[cont] != 'i') && (str[cont] != 'O') && (str[cont] != 'o') && (str[cont] != 'U') && (str[cont] != 'u')){
			aux[contaux] = str[cont];
			contaux++;
		}
		
		if((str[cont] == 'A') || (str[cont] == 'a')){
			vogais[0] = vogais[0] + 1;
		}
		
		if((str[cont] == 'E') || (str[cont] == 'e')){
			vogais[1] = vogais[1] + 1;
		}
		
		if((str[cont] == 'I') || (str[cont] == 'i')){
			vogais[2] = vogais[2] + 1;
		}
		
		if((str[cont] == 'O') || (str[cont] == 'o')){
			vogais[3] = vogais[3] + 1;
		}
		
		if((str[cont] == 'U') || (str[cont] == 'u')){
			vogais[4] = vogais[4] + 1;
		}
			
	}
	
	sprintf(str,"%s",aux);

}

int main(int argc, char **argv)
{
	char str[Max];
	
	int vogais[5] = {0,0,0,0,0};
	
	scanf("%[^\n]",str);
	
	remove_vogais(str, vogais);
	
	printf("%s\n",str);
	
	printf("a: %d\ne: %d\ni: %d\no: %d\nu: %d", vogais[0], vogais[1], vogais[2], vogais[3], vogais[4]);
	
	return 0;
}

