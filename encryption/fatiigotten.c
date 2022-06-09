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

char str[1000];
    scanf("%s",&str);
int len=strlen(str);
    //ascii code unu kullanarak yap
    
    for(int j=0,i=0;i<=len;i++,j++){
    switch (str[i])
    {
    //switch-case içinde switch-case kullan, aralık kullan
    case 114 :
        printf("%d",sayi[i][j]);
    break ;
    
    case 82:
        printf("%d",sayi[i][j]);
    break ;

    case 97 :
        printf("%d",sayi[i][j]);
    break;

    case 65:
        printf("%d",sayi[i][j]);
    break;

    case 100 :
        printf("%d",sayi[i][j]);

    break ;

    case 68:
        printf("%d",sayi[i][j]);
    break;
    
        
    }
    }

    

}