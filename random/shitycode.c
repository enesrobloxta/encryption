#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <locale.h>

int hatabul(){

}

 int main(){
     setlocale(LC_ALL, "Turkish");
     
     srand((unsigned)time(NULL)*100);
     int tips;
     int a;
     int u;
     printf("kaç tane tip olacagını giriniz?\n");
     scanf("%d",&tips);
     printf(" her tipte kaç tanesayı olacağını seçin\n");
     scanf("%d",&a);
     a=u;
     int sayi[1000];
     int tip[1000];
     int i=0;

    //rastgele sayı
    for(int j=0;j<tips;j++){
        tip[j]= rand()%8999+1000;
             for(;i<a;i++){
                sayi[i]=rand()%8999+1000;
                printf("%d\n",sayi[i]);
    }
    a=a+u;
    }

     /* arrayin elemanlarının eşit olup olmadıgını kntrol etmeliyim */
    
    for (int i=0;i<20;i++){
        int j=i+1;
        
        for(;sayi[i]!=sayi[j];){

            j=j+1;

        }
        if(sayi[i]==sayi[j]){
            sayi[i]=sayi[i]+1;
            printf("aynı sayı bulundu\n");
        }
    }

    for(int i=0;i<20;i++){
        printf("%d\n",sayi[i]);
    }



    }

