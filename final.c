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

//file kısmı
fp=fopen("config.txt","r");

    for(int i=0;i<10;i++){
        for(int j=0;j<128;j++){
            fscanf(fp,"%d\n",&sayi[i][j]);
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


}
