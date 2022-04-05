#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int num;
	
	scanf("%d", &num);
	
	if (num >= 0 && num <= 255){
		
		if(num>=128){
		printf("1");
		num = num - 128;
		}else printf("0");
		
		
		if(num>=64){
		printf("1");
		num = num - 64;
		}else printf("0");
	
	
		if(num>=32){
		printf("1");
		num = num - 32;
		}else printf("0");
		
		if(num>=16){
		printf("1");
		num = num - 16;
		}else printf("0");
	
		if(num>=8){
		printf("1");
		num = num - 8;
		}else printf("0");
		
		if(num>=4){
		printf("1");
		num = num - 4;
		}else printf("0");
		
		if(num>=2){
		printf("1");
		num = num - 2;
		}else printf("0");
		
		if(num>=1){
		printf("1");
		num = num - 1;
		}else printf("0");
		
		}
	else{ 
		printf("Numero invalido!");
	}
	
	return 0;
}

