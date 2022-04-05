   #include <stdio.h>
     
    #define Max 256
     
    void strclean(char *str, char *clr){
        
        char aux[Max], igual = 0;
        
        int cont, cont2, contaux = 0;
        
        for(cont = 0; str[cont] != '\0'; cont++){
            
           for(cont2 = 0; clr[cont2] != '\0'; cont2++){
			   if(str[cont] == clr[cont2])igual++; 
			     
            }
            
            if( igual == 0){
                aux[contaux] = str[cont];
                aux[contaux + 1] = '\0';
                contaux++;
           }igual = 0;
    
        }
        
        sprintf(str,"%s",aux);
     
    }
     
    int main(int argc, char **argv)
    {
        char str[Max];
        
        char clr[Max];
        
        scanf("%[^\n]%*c", str);
        
        scanf("\n%[^\n]", clr);
        
		strclean(str, clr);
        
        printf("%s\n",str);
        
        return 0;
    }
