#include<stdio.h>
#include<locale.h>
#include<math.h>

int armstrong_sayisi(int sayi);

int main(){
setlocale(LC_ALL, "Turkish");
int girilen_sayi;
printf("Kontrol etmek istediðiniz sayýyý giriniz:");
scanf("%d",&girilen_sayi);

armstrong_sayisi(girilen_sayi);

return 0;	
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
if(toplam == sayi)printf("%d sayýsý bir Armstrong sayýsýdýr.\n\n",sayi);
else printf("%d sayýsý bir Armstrong sayýsý deðildir.\n\n",sayi);
}
