#include <stdio.h>
#include <math.h>

#define Max 1000

void contvogais(char *str, int *vogais){
	
	int cont;
	
	for(cont = 0; str[cont] != '\0'; cont++){
		
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
	

}

int main(int argc, char **argv)
{
	char str1[Max], str2[Max], str3[Max*2];
	
	int vogais1[5] = {0,0,0,0,0}, vogais2[5] = {0,0,0,0,0}, cont, contstr, contpont = 0;
	
	double dist;
	
	scanf("%[^\n]",str3);
	
	for (contstr = 0;str3[contstr] != '\0';contstr++){
		if (str3[contstr] == ';') contpont++;
		
	}
	
	if (contpont == 1){
		
		for (contstr = 0;str3[contstr] != ';';contstr++){
			str1[contstr] = str3[contstr];
			str1[contstr + 1] = '\0';
		}
		
		cont = 0;
		for (contstr = (contstr + 1);str3[contstr] != '\0';contstr++){
			str2[cont] = str3[contstr];
			str2[cont + 1] = '\0';
			cont++;
		}
		
		contvogais(str1, vogais1);

		contvogais(str2, vogais2);
		
		printf("(");
		for (cont = 0; cont < 5; cont++){
				if(cont+1 >= 5)printf("%d)\n",vogais1[cont]); 
				else printf("%d,",vogais1[cont]); 
		}	
		
		printf("(");
		for (cont = 0; cont < 5; cont++){
				if(cont+1 >= 5)printf("%d)\n",vogais2[cont]); 
				else printf("%d,",vogais2[cont]); 
		}
		
		dist = sqrt((pow((vogais1[0] - vogais2[0]), 2)) + (pow((vogais1[1] - vogais2[1]), 2)) + (pow((vogais1[2] - vogais2[2]), 2)) + (pow((vogais1[3] - vogais2[3]), 2)) + (pow((vogais1[4] - vogais2[4]), 2)) );

		printf("%.2lf", dist);
		
	} else{
		printf("FORMATO INVALIDO!");
	}

	return 0;
}
