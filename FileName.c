#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");
    int kop;
    int rub;
    int cet;
    printf("введите стоимость в копейках: ");
    scanf("%d", &cet);
    rub = cet / 100;
    kop = cet % 100;
    char* cklon;
    switch (kop)
    {
    case 11:
    case 12:
    case 13:
    case 14:
        cklon = "копеек";
        break;
    default:
        switch (kop % 10)
        {
        case 1:
            cklon = "копейка";
            break;
        case 2:
        case 3:
        case 4:
            cklon = "копейки";
            break;
        default:
            cklon = "копеeк";
            break;

        }
    }
    printf("%d рубл. ", rub);
    printf("%d %s", kop, cklon);

}













