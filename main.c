#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int islem;
	int bakiye;
	
	printf("bakiyenizi giriniz :");
	scanf("%d",&bakiye);
	
	int tutar;
	
	printf(" İslemler\n1:para cekme\n2-para yatirma\n3-havale yapma\n4-bakiye sorgulama\n5-kart iade\n\n\n");
	
	printf("islmei seciniz :");
	scanf("%d",&islem);
	
	switch(islem){
		
		case 1:
			printf("Bakiyeniz : %d\n",bakiye);
			printf("cekilecek tutari giriniz :");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("bakiye yetersiz\n");
			}
			bakiye-=tutar;
			printf("bakiyeniz : %d",bakiye);
			break;
			
		case 2:
			printf("Bakiyeniz : %d\n",bakiye);
			printf("yatirilacak tutari giriniz :");
			scanf("%d",&tutar);
			
			bakiye+=tutar;
			printf("bakiyeniz : %d",bakiye);
			break;
			
		case 3:
			printf("Bakiyeniz : %d\n",bakiye);
			printf("havale yapilacak tutari giriniz :");
			scanf("%d",&tutar);
			if(tutar>bakiye){
				printf("bakiye yetersiz\n");
			}
			bakiye-=tutar;
			printf("bakiyeniz : %d",bakiye);
			break;
			
		case 4:
			printf("bakiyeniz : %d",bakiye);
			break;
			
		case 5:
			printf("kart iade edildi.\n");
			break;
			
		default:
			printf("lutfen gecerli bir secim yapınız");
			break;
			
	
	}
	

	
	return 0;
}
