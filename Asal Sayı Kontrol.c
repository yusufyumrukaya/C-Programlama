#include<stdio.h>
#include <locale.h>
int asal_kontrol(int sayi);

int main(){
setlocale(LC_ALL, "Turkish");

int girilen_sayi;
printf("Kontrol etmek istediðiniz sayýyý giriniz:");
scanf("%d",&girilen_sayi);

asal_kontrol(girilen_sayi);

return 0;	
}
int asal_kontrol(int sayi){

int sayac = 0;
int i;

if (sayi == 2)printf("%d asal bir sayýdýr.\n\n\n",sayi);
else if (sayi==1)printf("%d asal bir sayý deðildir.\n\n",sayi);
else if (sayi==0)printf("%d asal bir sayý deðildir.\n\n",sayi);
else{
	for(i=2;i<=(sayi/2);i++){
		if(sayi%i==0)sayac =+1;
		}	

if(sayac==0)printf("%d sayýsý asal bir sayýdýr.\n\n",sayi);
else printf("%d sayýsý asal bir sayý deðildir.\n\n",sayi);
	}	
}
