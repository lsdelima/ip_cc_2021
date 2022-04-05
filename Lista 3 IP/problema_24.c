#include <stdio.h>

int main(int argc, char **argv)
{
	int a ,b ,c , div=2, primo = 0, cont, MMC = 1;
	
	scanf("%d %d %d", &a, &b, &c);
	
	do{
		do{
			if ((a % div == 0) || (b % div == 0) || (c % div == 0)){
			printf("%d %d %d :%d\n",a ,b, c, div);
			
			MMC = MMC * div;
			
			}
			
			if (a % div == 0) a = a / div;
			
			if (b % div == 0) b = b / div;
			
			if (c % div == 0) c = c / div;
			
		
		}while((a % div == 0) || (b % div == 0) || (c % div == 0));
		
		do{
			div ++;primo = 0;
			
			for (cont = 1; cont <= div; cont++){
				if (div%cont ==0) primo++;
				
			}
			
		}while(primo!=2);
		
	}while((a > 1) || (b > 1) || (c > 1));
	
	printf("MMC: %d", MMC);
	
	return 0;
}

