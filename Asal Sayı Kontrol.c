#include<stdio.h>
#include <locale.h>
int asal_kontrol(int sayi);

int main(){
setlocale(LC_ALL, "Turkish");

int girilen_sayi;
printf("Kontrol etmek istedi�iniz say�y� giriniz:");
scanf("%d",&girilen_sayi);

asal_kontrol(girilen_sayi);

return 0;	
}
int asal_kontrol(int sayi){

int sayac = 0;
int i;

if (sayi == 2)printf("%d asal bir say�d�r.\n\n\n",sayi);
else if (sayi==1)printf("%d asal bir say� de�ildir.\n\n",sayi);
else if (sayi==0)printf("%d asal bir say� de�ildir.\n\n",sayi);
else{
	for(i=2;i<=(sayi/2);i++){
		if(sayi%i==0)sayac =+1;
		}	

if(sayac==0)printf("%d say�s� asal bir say�d�r.\n\n",sayi);
else printf("%d say�s� asal bir say� de�ildir.\n\n",sayi);
	}	
}
