#include <stdio.h>

int main(int argc, char **argv)
{
	int n, d1 = 1, d2, x, comb = 0;
	
	scanf("%d", &n);
	
	if ((n >= 3) && (n<12)){
		d2 = x = n - 1;
		
		for (d1 = d1; d1 <= x; d1++){
			
			if((d1>=1) &&(d1<=6) && ((d2>=1) && (d2<=6))){
				if( d1 != d2){
					printf("D1: %d, D2: %d\n", d1, d2);
					comb++; 
				}
			}	
				
			d2--;		
		}
		printf("Ha %d possibilidades", comb);
		
	}else{
		
		printf("Combinacao impossivel");
	}
	
	return 0;
}

