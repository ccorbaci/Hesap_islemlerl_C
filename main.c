#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	//Rastgele say� �retmek i�in ba�lang�� say�s�n�(seed) zamana ba�l�yorum//
	
	srand(time(NULL));
	//C k�t�phanesinde rastgele say� uretimini saglayan rand() fonksiyonu.Her �a�r�ld���nda farkl� bir say� �retir.
	//Fakat rand fonksiyonu her defas�nda ayn� say�dan(seed) baslayarak say� urett�g�nden program� her cal�st�rd�g�m�zda ayn� say�y� verir.
	//Bunu �nlemek i�in srand() fonk. kullanmak gerekir.seed i�inde varolan saati verdi�imizde her seferinde farkl� bir say� �retecektir.
	
	float bakiye=(float) (rand() % 2000);
	float cekilecek=0;
	//Rastgele �retilen say�y� max. 2000 de tutmak i�in ise rand() fonk ile �retilen say� degeri,2000 say�s� ile mod i�lemine tabi tutulur.
	//�rne�in; rand fonk. 4581 �retecek olursa 4581/2000 i�leminin sonucundan kalan atan�r.��lemin sonucu olarak 581 de�erini al�r.Bu b�lme i�leminde kalan daima b�l�nenden k���k olacakt�r.
	
	printf("*****Bankamiza Hos Geldiniz*****\n");
	printf("Su anki bakiyeniz %.2f\n",bakiye);
	printf("*****Lutfen Cekmek Istediginiz miktari giriniz..*****\n");
	scanf("%f",&cekilecek);
	
	if(cekilecek<=bakiye)
	//E�er �ekilecek say� bakiyeden k���k ise a�a��daki blok devreye girecek, Kalan mikrar� da kullan�c� ile payla�acakt�r.
	{
		bakiye=bakiye-cekilecek;
		printf("Cekilen Para Miktari: %.2f\n",cekilecek);
		printf("Kalan Para Miktari: %.2f\n",bakiye);
	}
	
	
	
		
	printf("Program Sonlandi.Tesekkurler");
	return 0;
}
