#include <stdio.h>
#include <string.h>
#include <ctype.h>

float toplam(float x, float y);
float fark(float x, float y);
float carpim(float x, float y);
float bolum(float x, float y);
int sayimi(char x[]);

int main(){
    int sayac = 5;
    float ans = 0;
    char giris1[15];
    char giris2[15];
    char islem;
    float sayi1;
    float sayi2;
    printf("PROGRAMA GİRİLEBİLECEK SAYI UZUNLUĞU: 15 BASAMAK\nPROGRAMIN KABUL ETTİĞİ İŞLEMLER: +,-,x,/\n");
do{

    do{
        printf("\nlütfen ilk sayıyı giriniz: ");
        scanf("%s", &giris1[0]);
        if (strcmp(giris1, "ans")==0){
            sayi1 = ans;
            break;
        }
        else if (sayimi(giris1)==1){
            sscanf(giris1, "%f", &sayi1);
            break;
        }
        else {
            continue;
        }
    }
    while(sayac > 1);

    do{
        printf("lütfen ikinci sayıyı giriniz: ");
        scanf("%s", &giris2[0]);
        if (strcmp(giris2, "ans")==0){
            sayi2 = ans;
            break;
        }
        else if (sayimi(giris2)==1){
            sscanf(giris2, "%f", &sayi2);
            break;
        }
        else {
            continue;
        }
    }
    while(sayac > 1);

    printf("lütfen yapmak istediğiniz işlemi giriniz:");
    scanf(" %c", &islem);

    switch(islem){
        case '+':
        ans = toplam(sayi1,sayi2);
        printf("%f", ans);
        break;

        case '-':
        ans = fark(sayi1,sayi2);
        printf("%f", ans);
        break;

        case 'x':
        ans = carpim(sayi1,sayi2);
        printf("%f", ans);
        break;

        case '/':
        ans = bolum(sayi1,sayi2);
        printf("%f", ans);
        break;

        default:
        printf("BÖYLE BİR İŞLEM YOK\n");
        
    }
}
while(sayac>1);
}

float toplam(float x, float y){
    float sum = x+y;
    return sum;
}

float fark(float x, float y){
    float diff = x-y;
    return diff;
}

float carpim(float x, float y){
    float prd = x*y;
    return prd;
}

float bolum(float x, float y){
    float divis = x/y;
    return divis;
}

int sayimi(char x[]){
    int sayimidir;
    for (int i = 0; x[i] != '\0'; i++){
        if (!isdigit((unsigned char)x[i])){
            sayimidir = 0;
            break;
        }
        else {
            sayimidir = 1;
            break;
        }
    }
    return sayimidir;
}