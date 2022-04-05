#include <stdio.h>

#define Max 128

long int string2int(const char *str){
	
	long int n = 0;
	
	int cont, contuni = 1;
	
	for(cont = 0; str[cont] != '\0'; cont++);
	cont--;
	
	
	for(cont = cont; cont >= 0; cont--){
		
		
		if(str[cont] == '-'){
			n = -n;
		
		}else if(str[cont] == '0'){
			n = (0 * contuni) + n;
		
		}else if(str[cont] == '1'){
			n = (1 * contuni) + n;
		
		}else if(str[cont] == '2'){
			n = (2 * contuni) + n;
		
		}else if(str[cont] == '3'){
			n = (3 * contuni) + n;
		
		}else if(str[cont] == '4'){
			n = (4 * contuni) + n;
		
		}else if(str[cont] == '5'){
			n = (5 * contuni) + n;
		
		}else if(str[cont] == '6'){
			n = (6 * contuni) + n;
		
		}else if(str[cont] == '7'){
			n = (7 * contuni) + n;
		
		}else if(str[cont] == '8'){
			n = (8 * contuni) + n;
		
		}else if(str[cont] == '9'){
			n = (9 * contuni) + n;
		
		}
		
		contuni = contuni * 10;
	}
	
	return n;
}

int main(int argc, char **argv)
{
	char str[Max];
	
	long int n, info;
	
	do{
		
		info = scanf("%s", str);
		
		if (info == EOF) break;
		
		n = string2int(str);
		
		printf("%ld %ld\n", n, n*2);
		
	} while (info != EOF);
	
	return 0;
}

