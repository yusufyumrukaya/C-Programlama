#include<stdio.h>
#include<locale.h>

int carpan_bulma(int sayi);

int main(){
setlocale(LC_ALL, "Turkish");

int girilen_sayi;
printf("Kontrol etmek istedi�iniz say�y� giriniz:");
scanf("%d",&girilen_sayi);

carpan_bulma(girilen_sayi);	

return 0;	
}

int carpan_bulma(int sayi){
int i , carpanlar; 
int sayac =0;
printf("�ARPANLAR:\n");
for(i=1;i<=(sayi);i++){
	if(sayi%i==0){
		sayac +=1;
		printf("%d.�arpan: %d\n",sayac,i);}
	}
}
