#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{
    printf("Test etmek istediğiniz kelimeyi giriniz...\n");
    int i=0;
    setlocale(LC_ALL,"Turkish");
    char kelime[40];
    gets(kelime);
    char tersKelime[40];
   int sayi,sayii;



   /* Alttaki kodlar benim kedri programýmla ayný iþi yapýyor ama ben kendi fonksiyonlarýmý kullanmak istediðim için kendi programýmý yaptým.
   #include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
    setlocale(LC_ALL,"Turkish");
    char kelime[40];
    gets(kelime);
    char tersKelime[40];
    strcpy(tersKelime,kelime);
    strrev(tersKelime);
    if(strcmp(tersKelime,kelime)==0){

        printf("%s polindrom kelimedir",kelime);


    }
    else{
        printf("%s polindrom deðil",kelime);
    }
}




   */


   sayi=strlen(kelime);//Kelime sayısını alıyor ki ters alırken son harfin başladığı yeri öğrenelim.
    sayii=sayi;// Alttaki for döngüsünde sayi değişkeni azalacağı için orjinal sayi deðerini sayii adında bir değişkene yedekledim.
   for(sayi;sayi>=0;sayi--){

    tersKelime[sayi-1]=kelime[i]; //Kelimenin tersini alıyor.
    i++;

   }


for(int k=0;k<sayii;k++){
        menu:
   if(tersKelime[k]==kelime[k]){ //Tek tek polindrom olup olmadığını inceliyor.

     int c=k; // k değiþkenini c ye yedekliyorum ki if in içinde k artmasın.

    if(c+1==sayii){ //c+1 yapıyorum çünkü 1 sonraki dizi alanının boşluk olduğunu anlıyorum çünkü dizi nin içindeki kelimenin uzunluðunu geçtiði için dzinin gerisi boþluk oluyor.
        for(int h=0;h<sayii;h++){//Polindrom u yazdırıyor
            printf("%c",tersKelime[h]);
        }
        printf(" palindromdur"); // son ekleme
        return 0; // program sonlandırıyor
    }

   }
   else{ // Polindrom değilse  direk yazdırıp palindrom  değil diyor.
    for(int h=0;h<sayii;h++){
            printf("%c",kelime[h]);

            if((h+1)==sayii){
        printf(" palindrom değil");
        return 0;
        }
        }





   }
}


}
