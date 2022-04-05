#include <stdio.h>

#define MAX 10000

int main(int argc, char **argv)
{
	int t, contt, contt2, avc;
	
	char strA[MAX], strB[MAX];
	
	scanf("%d", &t);
	
	if((t > 0) && (t <= 100)){
		
		for(contt = 0;contt < t;contt++){
			contt2 = 0, avc = 0;
		
			scanf("%*c%[^ ]",strA);
			
			scanf("%*c%[^\n]",strB);
			
			do{
				
				while(strA[contt2] != strB[contt2]){
					strA[contt2]++;
					avc++;
					if(strA[contt2] == 123)strA[contt2] = 97;
				}
				
			contt2++;		
			}while(strA[contt2] != '\0');
			
			printf("%d\n", avc);
			
		}
		
	}
	
	
	return 0;
}

