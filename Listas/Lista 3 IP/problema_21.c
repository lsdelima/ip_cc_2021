#include <stdio.h>

int main(int argc, char **argv)
{
	int T, A, B ,n = 1;
	scanf("%d",&T);

	do{
		scanf("%d %d",&A ,&B);
	
		A = (((A%100)%10)/1)*100 + ((A%100)/10)*10 +  (A/100)*1 ;
		
		B = (((B%100)%10)/1)*100 + ((B%100)/10)*10 +  (B/100)*1 ;
		
		if(A>B){
		printf("%d\n", A);
		}else printf("%d\n", B);
		
		
		
		
		n++;
	}while(n<=T);
	
	
	
	return 0;
}

