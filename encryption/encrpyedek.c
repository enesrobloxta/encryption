#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){

//birinci kısım
setlocale(LC_ALL, "Turkish");
srand((unsigned)time(NULL)*127);

int tip,tips;
    printf("kac tip?\n");
    scanf("%d",&tip);
    printf("her tipte kac sayi\n");
    scanf("%d",&tips);
int sayi[tip][tips];

    for(int i=0;i<tip;i++){
        for(int j=0;j<tips;j++){
            sayi[i][j]=rand()%8999+1000;
        }
    }

    

}