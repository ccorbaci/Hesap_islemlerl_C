#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	//Rastgele say� �retmek i�in ba�lang�� say�s�n�(seed) zamana ba�l�yorum//
	
	srand(time(NULL));
	
	float bakiye=(float) (rand() % 2000);
	float cekilecek=0;
	
	printf("*****Bankamiza Hos Geldiniz*****\n");
	printf("Su anki bakiyeniz %.2f\n",bakiye);
	
	return 0;
}
