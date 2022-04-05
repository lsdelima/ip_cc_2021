    #include <stdio.h>
     
    #define MAX 1000
     
    int main(int argc, char **argv)
    {
        int n, cont, cont2, aux, dif, sig, contvet = 0;
        
        scanf("%d", &n);
        
        if((n > 0) && (n <= MAX)){
            
            int vet[n], vetcop[n+1];
            
            scanf("%d", &vet[0]);
            
            dif = vet[0];
            
            for(cont = 1; cont < n;cont++){
                scanf("%d", &vet[cont]);
                if(vet[cont] >= dif) dif = vet[cont];
            
            }dif++;
            
             for(cont = 0; cont < (n+1);cont++){
                vetcop[cont] = dif;
            }
            

             for(cont = 0; cont < n;cont++){
				 
				 sig = 0;
				 for(cont2 = 0; cont2 < n;cont2++){
					if (vet[cont] == vetcop[cont2]){ 
					sig = 1; 
					break;
					}
                
				 }
				 
				 if(sig == 0){
					 vetcop[contvet] = vet[cont];
					 
					 contvet++; 
				 }
				 
            }
            
            for(cont = 0;vetcop[cont] != dif;cont++){
                for(cont2 = 0;vetcop[cont2] != dif;cont2++){
                if(vetcop[cont] <= vetcop[cont2]){
                    aux = vetcop[cont2];
                    vetcop[cont2] = vetcop[cont];
                    vetcop[cont]  = aux;
                }
            }
            }
            
            for(cont = 0;vetcop[cont] != dif;cont++){
                printf("%d\n",vetcop[cont]);
            }
            
            
  
        }
        return 0;
   }
