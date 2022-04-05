#include <stdio.h>

#define Max 499

char *str(int test, char string[]){
	
	int cont;
	
	char str[test];
	
	for(cont = 0; cont < test; cont++){
		str[cont] = string[cont];	
	}
	
	if (test == 0){
		str[0] = '\0';
	}
	
	sprintf(string,"%s",str);
	
	return string;	
}


int main(int argc, char **argv)
{
	int N, test, cont; 
	
	char string[Max];
	
	scanf("%d", &N);
	
	if ((N >= 1) && (N <= 20)){
		
		for(cont = 1;cont <= N; cont++){
		
			scanf("%d", &test);
			
			scanf("%*c%[^\n]", string);
			
			str(test,string);
			
			printf("%s\n",string);
		
		}
			
	}
	
	return 0;
}

