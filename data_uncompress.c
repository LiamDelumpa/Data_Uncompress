#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	double dbuff;
	int ibuff;
	int ch;				//initial character to read
	int n;				
	int size;			//variable for size of string
	int i, j, k;				
	int count = 0;

	while((ch = getchar()) != EOF){
		//printf("%c\n", ch);
		if(ch == 'i'){
			j = getchar();
			//if(j == NULL) printf("Input error: no size\n");
			for(i=0; i<= j; i++){
				fread(&ibuff, 4 , 1, stdin);
				printf("%d", ibuff);
				count++;
			}
			//if (count != j) printf("Input error: not enoughd doubles");
			printf(" ");
		}
		else if (ch == 'd')
		{
			j = getchar();
			//if(j == NULL) printf("Input error: no size\n");
			for(i=0; i<=j; i++){
				fread(&dbuff, 8 , 1, stdin);
				printf("%.10lg", dbuff);
				count++;
			}
			//if (count != j) printf("Input error: not enoughd doubles");
			printf(" ");
		}
		else if (ch == 's'){

			n = getchar();
			for(i=0; i < n+1; i++){ 		//loop to evaluate n+1 contigious strings
				size = getchar();
				//if(size == NULL) printf("Input error: no string size\n");
				for(j=0; j < size+1; j++){
					k = getchar();
					printf("%c", k);
					count++;
				}
				//if(count != size) printf("Input error: not enough chars");
				printf(" ");
			}
		}
		else if (ch == 'n')
		{
			printf("\n");	
		}
		else{
			printf("Input error: bad type\n");
		}

	}
	
	return 0;

}
