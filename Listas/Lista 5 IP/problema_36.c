#include <stdio.h>

#define MAX 500000

int main(int argc, char **argv)
{
	int q1, q2, cont, cont2, aux;
	
	scanf("%d", &q1);
	
	scanf("%d", &q2);
	
	if(((q1 > 0) && (q1 <= 500000)) && ((q2 > 0) && (q2 <= 500000))){
		int V1[q1], V2[q2], V[q1 + q2];
		
		for(cont = 0;cont < q1;cont++){
			scanf("%d", &V1[cont]);
			V[cont] = V1[cont];
		}cont2 = cont;
		
		for(cont = 0;cont < q2;cont++){
			scanf("%d", &V2[cont]);
			V[cont2] = V2[cont];
			cont2++;
		}
		
		for(cont = 0;cont < q1 + q2;cont++){
			
			for(cont2 = 0;cont2 < q1 + q2;cont2++){
				if(V[cont] <= V[cont2]){
					aux = V[cont2];
					V[cont2] = V[cont];
					V[cont] = aux;
				}
			}
		
		}
		
		for(cont = 0;cont < q1 + q2;cont++){
			
			printf("%d\n",V[cont]);
		
		}
			
		
	}
	
	return 0;
}

