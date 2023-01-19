#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(int argc, char *argv[]) {
	//Rastgele sayý üretmek için baþlangýç sayýsýný(seed) zamana baðlýyorum//
	
	srand(time(NULL));
	//C kütüphanesinde rastgele sayý uretimini saglayan rand() fonksiyonu.Her çaðrýldýðýnda farklý bir sayý üretir.
	//Fakat rand fonksiyonu her defasýnda ayný sayýdan(seed) baslayarak sayý urettýgýnden programý her calýstýrdýgýmýzda ayný sayýyý verir.
	//Bunu önlemek için srand() fonk. kullanmak gerekir.seed içinde varolan saati verdiðimizde her seferinde farklý bir sayý üretecektir.
	
	float bakiye=(float) (rand() % 2000);
	float cekilecek=0;
	//Rastgele üretilen sayýyý max. 2000 de tutmak için ise rand() fonk ile üretilen sayý degeri,2000 sayýsý ile mod iþlemine tabi tutulur.
	//Örneðin; rand fonk. 4581 üretecek olursa 4581/2000 iþleminin sonucundan kalan atanýr.Ýþlemin sonucu olarak 581 deðerini alýr.Bu bölme iþleminde kalan daima bölünenden küçük olacaktýr.
	
	printf("*****Bankamiza Hos Geldiniz*****\n");
	printf("Su anki bakiyeniz %.2f\n",bakiye);
	printf("*****Lutfen Cekmek Istediginiz miktari giriniz..*****\n");
	scanf("%f",&cekilecek);
	
	if(cekilecek<=bakiye)
	//Eðer çekilecek sayý bakiyeden küçük ise aþaðýdaki blok devreye girecek, Kalan mikrarý da kullanýcý ile paylaþacaktýr.
	{
		bakiye=bakiye-cekilecek;
		printf("Cekilen Para Miktari: %.2f\n",cekilecek);
		printf("Kalan Para Miktari: %.2f\n",bakiye);
	}
	
	
	
		
	printf("Program Sonlandi.Tesekkurler");
	return 0;
}
