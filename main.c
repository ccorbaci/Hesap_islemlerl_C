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
	printf("*****Lutfen Cekmek Istediginiz miktari giriniz..*****\n");
	scanf("%f",&cekilecek);
	
	if(cekilecek<=bakiye)
	{
		bakiye=bakiye-cekilecek;
		printf("Cekilen Para Miktari: %.2f\n",cekilecek);
		printf("Kalan Para Miktari: %.2f\n",bakiye);
		printf("Tesekkurler");
	}
	return 0;
}
