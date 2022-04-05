#include <stdio.h>

int main(int argc, char **argv)
{
	int ano;
	
	scanf("%d", &ano);
	
	if(ano > 1872){
		if(((ano % 4 == 0) && (ano % 100 != 0)) || (ano % 400 == 0)){
			printf("ANO BISSEXTO");
		 }else printf("ANO NAO BISSEXTO");
	} else {
	printf("ANO NAO BISSEXTO");
	}
	
	return 0;
}

