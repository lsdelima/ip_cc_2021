#include <stdio.h>

#define MAX 5000

int main(int argc, char **argv)
{
	int info, cont, ali;
	
	char str[MAX];
	
	do{
		
		info = scanf("%[^\n]%*c", str);
		
		if(info == EOF) break;
		
		ali = 0;
		for(cont = 0; str[cont] != '\0'; cont++){
			
			if (ali % 2 == 0){
				if (((str[cont]) >= 65) && ((str[cont]) <= 90)){ str[cont]= str[cont]; ali++;
				}else if (((str[cont]) >= 97) && ((str[cont]) <= 122)){ str[cont]= str[cont] - 32; ali++;
			}}else{
				if (((str[cont]) >= 65) && ((str[cont]) <= 90)){ str[cont]= str[cont] + 32; ali++;
				}else if (((str[cont]) >= 97) && ((str[cont]) <= 122)){ str[cont]= str[cont]; ali++;
			
			}}
		
		}
		
		printf("%s\n", str);
		
		
	}while(info != EOF);
	
	return 0;
}
