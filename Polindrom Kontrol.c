#include<stdio.h>
#include<math.h>
#include<locale.h>

int polindrom_kontrol(int sayi);
int main(){
	
setlocale(LC_ALL, "Turkish");
int girilen_sayi;
printf("Kontrol etmek istediðiniz sayýyý giriniz:");
scanf("%d",&girilen_sayi);

polindrom_kontrol(girilen_sayi);	
		
return 0;
}
int polindrom_kontrol(int sayi){
int i;
int basamak=1;
int sayi_kopya = sayi;
for(i=0; ; i++){
	if(sayi_kopya<=9)break;
	else{
		sayi_kopya = sayi_kopya /10;
		basamak +=1;
	}
}	

int sayi_kopya2 = sayi;
int son_basamak;
int toplam = 0;
int basamak_eksiltme = 1;

while(sayi_kopya2!=0){
toplam += (sayi_kopya2%10)*pow(10,basamak-basamak_eksiltme);
sayi_kopya2 = sayi_kopya2/10;
basamak_eksiltme +=1;
}	
	
if (sayi == toplam)printf("%d sayýsý polindrom bir sayýdýr.\n\n",sayi);
else printf("%d sayýsý polindrom bir sayý deðildir.\n\n",sayi);	
}
