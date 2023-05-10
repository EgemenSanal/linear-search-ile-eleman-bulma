#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	int boyut;
	int arananEleman;
	
	printf("DIZININ BOYUTUNU GIRINIZ\n");
	scanf("%d",&boyut);
	
	int dizi[boyut];
	printf("ELEMANLARI GIRINIZ\n");
	for(i = 0;i < boyut;i++) //girilen sayilari alma
		scanf("%d",&dizi[i]);
	
	
	printf("BULMAK ISTEDIGINIZ ELEMANI GIRINIZ\n");
	scanf("%d",&arananEleman);
	
	
	for(i = 0;i <boyut;i++){ // linear search
		if(dizi[i] == arananEleman){ // aranan eleman bulunursa elemani ekrana yazdirma
			printf("ARADAGINIZ ELEMAN BULUNDU = %d",dizi[i]);
			exit(0);
			
		}
	}
	for(i = 0;i < boyut;i++){ // aranan eleman bulunamazsa bunu belirtme
		if(dizi[i] != arananEleman){
			printf("ARADIGINIZ ELEMAN DIZIDE YOK\n");
			exit(0);
		}
	}
	
	
	return 0;
}
