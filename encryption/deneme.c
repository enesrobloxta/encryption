#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#define LEN 100000

int main(){

//birinci kısım
setlocale(LC_ALL, "Turkish");
srand((unsigned)time(NULL)*127);

// 20 tip 127 sayı koy
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
    
char str[10000];
    printf("metin giriniz :\n");
    scanf("%[^\n]%*c", str);
    puts(str);
int len=strlen(str);
    //ascii code unu kullanarak yap
    //switch-case içinde switch-case kullan, aralık kullan
    // 0 31  ve 127 kullanma

    for(int i=0;i<=len;i++){
        for(int j=0;j<=127;j++){
            if(str[i]==j){
                printf("%d\n",sayi[i%21][j]);
                
            }  
        }
    
    }

}