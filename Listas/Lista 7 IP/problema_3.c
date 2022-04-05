#include <stdio.h>
#include <string.h>

#define MAX 512

typedef struct{
	
	char nome[MAX];
    
    char natal[MAX];
    
}natal;

int main(void){
	
	int info, cont, est; 
  
	natal vet[24];
  
	char pais[MAX];

	  sprintf(vet[0].nome,"brasil");
	  sprintf(vet[0].natal,"Feliz Natal!");

	  sprintf(vet[1].nome,"alemanha");
	  sprintf(vet[1].natal,"Frohliche Weihnachten!");

	  sprintf(vet[2].nome,"austria");
	  sprintf(vet[2].natal,"Frohe Weihnacht!");

	  sprintf(vet[3].nome,"coreia");
	  sprintf(vet[3].natal,"Chuk Sung Tan!");

	  sprintf(vet[4].nome,"espanha");
	  sprintf(vet[4].natal,"Feliz Navidad!");

	  sprintf(vet[5].nome,"grecia");
	  sprintf(vet[5].natal,"Kala Christougena!");

	  sprintf(vet[6].nome,"estados-unidos");
	  sprintf(vet[6].natal,"Merry Christmas!");

	  sprintf(vet[7].nome,"inglaterra");
	  sprintf(vet[7].natal,"Merry Christmas!");

	  sprintf(vet[8].nome,"australia");
	  sprintf(vet[8].natal,"Merry Christmas!");

	  sprintf(vet[9].nome,"portugal");
	  sprintf(vet[9].natal,"Feliz Natal!");

	  sprintf(vet[10].nome,"suecia");
	  sprintf(vet[10].natal,"God Jul!");

	  sprintf(vet[11].nome,"turquia");
	  sprintf(vet[11].natal,"Mutlu Noeller");

	  sprintf(vet[12].nome,"argentina");
	  sprintf(vet[12].natal,"Feliz Navidad!");

	  sprintf(vet[13].nome,"chile");
	  sprintf(vet[13].natal,"Feliz Navidad!");

	  sprintf(vet[14].nome,"mexico");
	  sprintf(vet[14].natal,"Feliz Navidad!");

	  sprintf(vet[15].nome,"antardida");
	  sprintf(vet[15].natal,"Merry Christmas!");

	  sprintf(vet[16].nome,"canada");
	  sprintf(vet[16].natal,"Merry Christmas!");

	  sprintf(vet[17].nome,"irlanda");
	  sprintf(vet[17].natal,"Nollaig Shona Dhuit!");

	  sprintf(vet[18].nome,"belgica");
	  sprintf(vet[18].natal,"Zalig Kerstfeest!");

	  sprintf(vet[19].nome,"italia");
	  sprintf(vet[19].natal,"Buon Natale!");

	  sprintf(vet[20].nome,"libia");
	  sprintf(vet[20].natal,"Buon Natale!");

	  sprintf(vet[21].nome,"siria");
	  sprintf(vet[21].natal,"Milad Mubarak!");

	  sprintf(vet[22].nome,"marrocos");
	  sprintf(vet[22].natal,"Milad Mubarak!");

	  sprintf(vet[23].nome,"japao");
	  sprintf(vet[23].natal,"Merii Kurisumasu!");


	do{
		est = 0;

		info = scanf("%s", pais);

		if(info == EOF)break;
    
		for(cont = 0;cont < 24;cont++){ 
		
			if((strcmp(vet[cont].nome, pais)) == 0){
		  
				printf("%s\n",vet[cont].natal);
       
				est++;
			
			}
      
		}
    
		if(est == 0) printf("-- NOT FOUND --\n");

	}while(info != EOF);
 
  return 0;
}
