#include<stdio.h>
#include<locale.h>
#include<math.h>

int mukemmel_sayi(int sayi);

int main(){

setlocale(LC_ALL, "Turkish");
int girilen_sayi;
printf("Kontrol etmek istedi�iniz say�y� giriniz:");
scanf("%d",&girilen_sayi);

mukemmel_sayi(girilen_sayi);
		
return 0;	
}

int mukemmel_sayi(int sayi){
int i , carpanlar; 
int sayac =0;
int mukemmel_kontrol = 0;

for(i=1;i<=(sayi);i++){
	if(sayi%i==0){
		sayac +=1;
		mukemmel_kontrol +=i;
	}
	}
	printf("\n\n");
	if(mukemmel_kontrol/2==sayi)printf("%d say�s� m�kemmel say�d�r.\n\n",sayi);
	else printf("%d say�s� m�kemmel say� de�ildir.\n\n",sayi);
}
