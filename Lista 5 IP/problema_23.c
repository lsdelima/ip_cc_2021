#include <stdio.h>

#define Max 22

int main(int argc, char **argv)
{
	int n, cont, cal1, cal2;
	
	char str[Max];
	
	scanf("%d", &n);
	
	if(n>0){
		for(cont = 1;cont <= n;cont++){
			scanf("%*c%[^\n]", str);
			
			cal1 = (((str[0]-48)*1) + ((str[2]-48)*2) + ((str[4]-48)*3) + ((str[6]-48)*4) + ((str[8]-48)*5) + ((str[10]-48)*6) + ((str[12]-48)*7) + ((str[14]-48)*8) + ((str[16]-48)*9)) % 11;
			
			if (cal1 == 10) cal1 = 0;
			
			cal2 = (((str[0]-48)*9) + ((str[2]-48)*8) + ((str[4]-48)*7) + ((str[6]-48)*6) + ((str[8]-48)*5) + ((str[10]-48)*4) + ((str[12]-48)*3) + ((str[14]-48)*2) + ((str[16]-48)*1)) % 11;
	
			if (cal2 == 10) cal2 = 0;
			
			if((cal2 == (str[20]-48)) && (cal1 == (str[18]-48))){
				printf("CPF valido\n");
			}else{
				printf("CPF invalido\n");
			}	
		}
	}
	
	return 0;
}

