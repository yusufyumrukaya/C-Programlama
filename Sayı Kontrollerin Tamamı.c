#include <stdio.h>
#include <locale.h>
#include <math.h>

int asal_kontrol(int sayi);
int carpan_bulma(int sayi);
int armstrong_sayisi(int sayi);
int polindrom_kontrol(int sayi);

int main(){
setlocale(LC_ALL, "Turkish");
int girilen_sayi;
printf("Kontrol etmek istedi�iniz say�y� giriniz:");
scanf("%d",&girilen_sayi);
asal_kontrol(girilen_sayi);
carpan_bulma(girilen_sayi);
armstrong_sayisi(girilen_sayi);
polindrom_kontrol(girilen_sayi);
	
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
int carpan_bulma(int sayi){
int i , carpanlar; 
int sayac =0;
int mukemmel_kontrol = 0;
printf("�ARPANLAR:\n");
for(i=1;i<=(sayi);i++){
	if(sayi%i==0){
		sayac +=1;
		mukemmel_kontrol +=i;
		printf("%d.�arpan: %d\n",sayac,i);}
	}
	printf("\n\n");
	if(mukemmel_kontrol/2==sayi)printf("%d say�s� m�kemmel say�d�r.\n\n",sayi);
	else printf("%d say�s� m�kemmel say� de�ildir.\n\n",sayi);
}
int armstrong_sayisi(int sayi){
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

int son_basamak;
int toplam= 0;
int sayi_kopya2 = sayi;
while(sayi_kopya2>0){
	
	son_basamak = sayi_kopya2%10;
	toplam += pow(son_basamak,basamak);
	sayi_kopya2=sayi_kopya2/10;
	if(sayi_kopya2<=9){
		toplam +=pow(sayi_kopya2,basamak);
		break;
	}
}	
if(toplam == sayi)printf("%d say�s� bir Armstrong say�s�d�r.\n\n",sayi);
else printf("%d say�s� bir Armstrong say�s� de�ildir.\n\n",sayi);
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
	
if (sayi == toplam)printf("%d say�s� polindrom bir say�d�r.\n\n",sayi);
else printf("%d say�s� polindrom bir say� de�ildir.\n\n",sayi);	
}


