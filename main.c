#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	//Rastgele sayý üretmek için baþlangýç sayýsýný(seed) zamana baðlýyorum//
	
	srand(time(NULL));
	
	float bakiye=(float) (rand() % 2000);
	float cekilecek=0;
	
	printf("*****Bankamiza Hos Geldiniz*****\n");
	printf("Su anki bakiyeniz %.2f\n",bakiye);
	
	return 0;
}
