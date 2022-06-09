#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){

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
            printf("%d\n",sayi[i][j]);
        }
    }


}