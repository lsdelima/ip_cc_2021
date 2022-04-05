// fiquei na duvida como realizar a questao. Então pesquisei na internet e achei uma solução no site <http://muitomaiscodigoss.blogspot.com/2018/04/uri-problema-1263-aliteracao-solucao.html> e adaptei a linha de raciocinio deste codigo/codigo ao meu codigo. 

#include <stdio.h>

#define MAX 5000

int main(int argc, char **argv)
{
	int info, cont, alicont, tamanho, letra;
	
	char str[MAX], *letrant;
	
	do{
		
		info = scanf("%[^\n]%*c", str);
		
		if(info == EOF) break;
		
		alicont = 0;
		letra = '\0';
		letrant = NULL;
		tamanho = 0;
		
		for(cont = 0;str[cont] != '\0';cont++){  
			if ((str[cont] <= 90) && (str[cont] >= 65)) str[cont] = str[cont] + 32;
		}
		
		
		for(cont = 0; str[cont] != '\0'; cont++){
			if ((str[cont] != ' ') && (!letrant || *letrant == ' ')){
				if (letra == str[cont]){
					tamanho++;
					
				}else{
					if (tamanho > 1){
                        alicont++;
					}
                    tamanho = 1;
                    
                    letra = str[cont];
				}	
			}
			letrant = &str[cont];		
		}
		
		if (tamanho > 1){
            alicont++;
		}
		
		printf("%d\n",alicont);
		
	}while(info != EOF);
	
	return 0;
}
