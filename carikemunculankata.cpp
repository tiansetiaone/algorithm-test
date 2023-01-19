#include <stdio.h>
#include <string.h>


int main(){
    int i,j=0,banyak,katake[20],muncul=0;
    char kata[20][20],cari[20];
    printf("Masukan banyak kata: ");
    scanf("%d",&banyak);
    for(i=0;i<banyak;i++){
        printf("Masukan kata %d: ",i+1);
        scanf("%s",kata[i]);
    }
    printf("Masukan Kata Yang di cari ");
    scanf("%s",&cari);
    for(i=0;i<banyak;i++){
        if(strcmp(cari,kata[i])==0){
            muncul++;
            katake[j]=i+1;
            j++;
        }
    }
    j=0;
    printf("kata %s muncul %d kali yaitu di index:",cari,muncul);
    for(i=0;i<banyak;i++){
        if(katake[j]==i+1){
            printf("\n ke-%d ",katake[j]);
            j++;
        }
    }
}