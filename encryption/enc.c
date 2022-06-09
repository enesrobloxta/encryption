#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main(){
FILE *fp; 

setlocale(LC_ALL, "Turkish");
srand((unsigned)time(NULL)*127);

//string kısmı
char str[10000];
    printf("metini girinizi\n");
    fgets(str,10000,stdin);
int len=strlen(str);


int sayi[10][128];

fp = fopen("log.txt","w");
if(fp==NULL){

    for(int i=0;i<10;i++){
        for(int j=0;j<128;j++){
            sayi[i][j]=rand()%8999+1000;
            fprintf(fp,"%d\n",sayi[i][j]);
        }
    }

}
else{
fclose(fp);
fp = fopen("log.txt","r");

    for(int i=0;i<=9;i++){
        for(int j=0;j<=127;j++){
            fscanf(fp,"%d" ,&sayi[i][j]);
        }
    }


}
fclose(fp);

//rastgele sayı atama kısmı(bunu sabit bir şekilde yap)

    //10 tip yap
    //encryption kısmı

    int r=rand()%8999+1000;

    printf("%d",r);//tipi belirtecek

    //bu döngü sadece ascii cahrlarıyla çalışıyor
    for(int i=0;i<=len;i++){
        for(int j=0;j<=127;j++){
            if(str[i]==j){
                printf("%d",sayi[i][j]);
                
            }

        }
    }
    
    


}