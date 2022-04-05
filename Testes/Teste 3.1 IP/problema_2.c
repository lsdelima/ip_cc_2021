#include <stdio.h>

#define MAXWORDS 200
#define MAXWORDLEN 64+1

int strsplit(char * str, char m[][MAXWORDLEN], char * sep){
	
	int cont, cont2, contaux = 0, auxcont = 0, igual, pula = 0, tam, maior, maiorv = 0;
	
	for(cont = 0; str[cont] != '\0'; cont++){}
	
	str[cont] = sep[0];
	str[cont+1] = '\0';
	
	for(cont = 0; str[cont] != '\0'; cont++){
		
		igual = 0;
		for(cont2 = 0; sep[cont2] != '\0'; cont2++){
			if((str[cont] == sep[cont2]))igual++;

		}
		
		if(igual == 0){
			m[auxcont][contaux] = str[cont];
            m[auxcont][contaux+1] = '\0';
            contaux++;
            pula = 1; 
            
        }
        
         if((igual != 0) && (pula == 1)){
		
			 auxcont++;
			 pula = 0;
			 contaux = 0;
			
		}
		
  
	}
	
	for(maior = 0; m[0][maior] != '\0'; maior++){}
		
	for(cont = 0; cont < auxcont; cont++){
		
		for(tam = 0; m[cont][tam] != '\0'; tam++){}
		
		printf("(%d)",tam);
		
		if(tam >= maior) maior = tam; 
		
		for(cont2 = 0; m[cont][cont2] != '\0'; cont2++){
			printf("%c", m[cont][cont2]);
			
		}
		
		printf("\n");

	}
	
	for(cont = 0; cont < auxcont; cont++){
		
		for(tam = 0; m[cont][tam] != '\0'; tam++){}
		
		if(maior == tam) maiorv++;
		
			
		}
		
		printf("%d", maiorv);
			
	
	return auxcont--;
}

int main(int argc, char **argv)
{
	char str[MAXWORDS];
        
	char sep[MAXWORDLEN];
	
	char m[MAXWORDS][MAXWORDLEN];
        
	scanf("%[^\n]", str);
        
	scanf("%*c%[^\n]", sep);
	
	strsplit(str, m, sep);
        
	return 0;
}

