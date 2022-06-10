#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){

FILE *fp;

setlocale(LC_ALL, "Turkish");//türkçe karakterleri kullanmak için ekledim ama işe yaramadı galiba
srand((unsigned)time(NULL)*127);//rand() ın rastgeleliğini artırmak için

//string kısmı
char str[10000];
    printf("metini girinizi\n");
    fgets(str,10000,stdin);//std girişten string alıyon
int len=strlen(str);

int sayi[10][128];

//file kısmı
fp=fopen("config.txt","r");//config.txt iyi okumak amaçlı açıyor

    for(int i=0;i<10;i++){
        for(int j=0;j<128;j++){
            fscanf(fp,"%d\n",&sayi[i][j]);//içindeki bilgileri okuyup atıyor
        }
    }

fclose(fp);

int r=rand()%10;
//tipi belirtecek
    
    printf("%d234\n",r);
    //bu döngü sadece ascii cahrlarıyla çalışıyor
    for(int i=0;i<=len;i++){
        for(int j=0;j<=127;j++){
            if(str[i]==j){
                printf("%d\n",sayi[r][j]);//girdiğin karakterlerin iki falzası şifre alıyon
                //null char ve bilmediğim bi şey daha var onlar ekleniyor 
                  
            }
        }
    }
    
    //config teki sayıları atamak için test dosyasındaki demo yu kullandım belki işine yarar


}
