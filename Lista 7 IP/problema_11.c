#include <stdio.h>
#include <stdlib.h>

typedef struct casa{
  int np;
  
  int cons;

}casa;

typedef struct consumo{
  int np;
  
  int consmed;

}consumo;



int main(void)
{

  int imov, cont, cont2, cidade = 1;
  float totalcons, totalp;
  casa *vetcasa;
  consumo * vetconsumo, aux;

  
  do{

    scanf("%d", &imov);

    totalcons = 0 ;totalp = 0;
    
    vetcasa = (casa*) malloc (imov * sizeof(casa));
    vetconsumo = (consumo*) malloc (imov * sizeof(consumo));
    

    if ((imov <= 0) || (imov > 1000000)) return 0;

    for(cont=0;cont<imov;cont++){

      scanf("%d %d", &(vetcasa[cont].np), &(vetcasa[cont].cons));

      (vetconsumo[cont].np) = (vetcasa[cont].np);

      (vetconsumo[cont].consmed) = (int)((vetcasa[cont].cons)/(vetcasa[cont].np));

      totalcons += (vetcasa[cont].cons);

      totalp += (vetcasa[cont].np);
        
    }

		for(cont = 0;cont < imov;cont++){
			
			for(cont2 = (cont+1);cont2 < imov;cont2++){
				
				if (vetconsumo[cont].consmed >= vetconsumo[cont2].consmed){
					
					aux = vetconsumo[cont];
					
					vetconsumo[cont] = vetconsumo[cont2];
					
					vetconsumo[cont2] = aux;

				}   
			}
		}

    printf("Cidade# %d:\n", cidade);

    for(cont=0;cont<imov;cont++){

      printf("%d-%d ", (vetconsumo[cont].np), (vetconsumo[cont].consmed));
        
    }

    printf("\nConsumo medio: %.2f m3.\n\n", (totalcons/totalp));


    cidade++;

  }while(imov --);
  
  free(vetcasa);
  free(vetconsumo);

	return 0;
}

