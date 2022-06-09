#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
FILE *fp;

//hadi hadi
setlocale(LC_ALL, "Turkish");
srand((unsigned)time(NULL)*127);

//string kısmı
char str[10000];
    printf("metini girinizi\n");
    fgets(str,10000,stdin);
int len=strlen(str);


int sayi[10][128];
int cev[10][128];
fp=fopen("config.txt","r");
if(!fp){
//yazma kısmı gerekmicek çünkü bu dosyayaı bir kere oluşturup her yerde kullancaz programı yükleyen kişiler yüklerken
//o dosyayıda yüklicek 
fclose(fp);
fp=fopen("config.txt","w");

    for(int i=0;i<10;i++){
        for(int j=0;j<128;j++){
            sayi[i][j]=rand()%8999+1000;
            fprintf(fp,"%d\n",sayi[i][j]);
        }
    }
fprintf(fp,"\n\n\n Turi ip ip ip \nIp ip ip ip tsha ik \nIp tura ip ik \nEugh eugh isha ik turisha \nTuri ip ip ip \nIp ip ip ip tsha ik \nIp tura ip ik \nEugh eugh isha ik turisha");
fclose(fp);

}
else{
fclose(fp);
fp=fopen("config.txt","r");

    for(int i=0;i<10;i++){
        for(int j=0;j<128;j++){
            fscanf(fp,"%d\n",&cev[i][j]);
            
        }
    }
fclose(fp);
}
if(fp!=NULL){
fp=fopen("config.txt","r");

    for(int i=0;i<10;i++){
        for(int j=0;j<128;j++){
            fscanf(fp,"%d\n",&cev[i][j]);
            
        }
    }
fclose(fp);
}

//rastgele sayı atama kısmı(bunu sabit bir şekilde yap)

    //10 tip yap
    //encryption kısmı

    int r=rand()%8999+1000;

    //printf("%d",r);
    //tipi belirtecek

    //bu döngü sadece ascii cahrlarıyla çalışıyor
    for(int i=0;i<=len;i++){
        for(int j=0;j<=127;j++){
            if(str[i]==j){
                printf("%d\n",sayi[i][j]);
                
            }

        }
    }

}

