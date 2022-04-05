#include <stdio.h>

#define MAX 200

int main(int argc, char **argv)
{
	char str[MAX], str2[MAX];
	
	int t, cont, cont2, cont3, contfreq, freq, contchar, auxcont, dif; 
	
	scanf("%d", &t);
	
	if(t >= 1){
	
		for(cont = 1;cont <= t;cont++){ 
		
			scanf("%*c%[^\n]", str);
			
			for(cont2 = 0;str[cont2] != '\0';cont2++){  
				if ((str[cont2] <= 90) && (str[cont2] >= 65))  str[cont2] = str[cont2] + 32;
			}
			
			freq = 1, contchar = 0; contfreq = 0;
			
			for(cont2 = 0;str[cont2] != '\0';cont2++){  
				for(cont3 = 0;str[cont3] != '\0';cont3++){ 
					if ((str[cont2] == str[cont3]) && ((str[cont2] >= 97) && (str[cont2] <= 122)))contfreq++;
				
				}
				
				if(contfreq >= freq){
					freq = contfreq;
					str2[contchar] = str[cont2];
					str2[contchar+1] = '\0';
					contchar++;
					
				}contfreq = 0;
				
			}
			
			for (cont2 = 0; str[cont2] != '\0'; cont2++){
                str[cont] = EOF;
			}cont3 = 0; auxcont = 0;
			
			printf("%s\n",str);
			
			do{ 
			
			dif = 0;
            for (cont2 = 0; str[cont2] != '\0'; cont2++){         
                if (str2[cont3] == str[cont]){
                    dif = 1;
                    break;
                }   
            }
            
            if (dif == 0){
                str[auxcont] = str2[cont3];
                str[auxcont+1] = '\0';
                auxcont++;
            }
            
			cont3++;
			}while(str2[cont3] != '\0');
			
			

		}
	
	}
	return 0;
}

