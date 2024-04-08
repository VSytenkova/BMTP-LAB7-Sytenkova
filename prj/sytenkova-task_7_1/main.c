#include <stdio.h>
#include <stdlib.h>

int main(){
    printf("%c%c%c%c%c%c%c %c%c%c%c%c%c%c%c\n", -126, -94, -91, -92, 105, -30, -20, -32, -91, -25, -91, -83, -83, -17, 58);
    char sentence[100], better[100];
    int count = 0;
    int symbol = 0;
    fgets(sentence, sizeof(sentence), stdin);
    for(int i = 0; i < sizeof(sentence); i++){
        if (sentence[i] == 47 && sentence[i+1] == 47 || sentence[i] == 45 || sentence[i] == 59)
            break;
        else {
            if (sentence[i] == 169) symbol = symbol + 1;
            better[i] = sentence[i];
            count = count + 1;
        }
    }
    if (symbol == 0){
        printf("%c%c%c%c%c%c%c %c%c%c %c%c%c%c%c%c%c%c%c",  -112, -91, -25, -91, -83, -83, -17, -95, -91, -89, -93, -82, -85, -82, -31, -83, -88, -27, 58);
        for(int i = 0; i < count; i++){
            if (better[i] != 65 && better[i] != 69 && better[i] != 73 && better[i] != 79 && better[i] != 85 && better[i] != 89
                && better[i] != 97 && better[i] != 101 && better[i] != 105 && better[i] != 111 && better[i] != 117 && better[i] != 121
                && better[i] != -128 && better[i] != -123 && better[i] != -120 && better[i] != -114 && better[i] != -109 && better[i] != -98 && better[i] != -97
                && better[i] != -96 && better[i] != -91 && better[i] != -88 && better[i] != -82 && better[i] != -29 && better[i] != -18 && better[i] != -17
                && better[i] != -14 && better[i] != -13 && better[i] != -12 && better[i] != -11){
                printf("%c", better[i]);
            }
        }
    }
    else printf("%c%c%c%c%c%c%c%c%c %c%c%c %c %c%c%c%c%c%c%c%c %d ", -118, 105, -85, -20, -86, 105, -31, -30, -20, 39, -87, 39, -29, -32, -91, -25, -91, -83, -83, 105, 58, symbol);
    getch();
    return 0;
}

    /*for(int i = 0; i < sizeof(sentence); i++){
        if (sentence[i] == 47 && sentence[i+1] == 47 || sentence[i] == 45 || sentence[i] == 59)
            break;
        else if (sentence[i] == 137 && sentence[i] == 169) count = count + 1;
    }*/

            /*else{
            printf("%c = %ld\n", sentence[i], sentence[i]);
        }*/

        /*for (int i = 1; i < 256; i++){
        printf("%c = %d\n", i, i);
    }*/

/*#include <stdio.h>

int main(void) {
    char qf = 'й';
    printf("%c = %ld\n", qf, qf);
    char mf = 'Й';
    printf("%c = %ld\n", mf, mf);
    char da = -87;
    printf("%c = %d\n", da, da);
}*/

/*#include <stdio.h>

int main(void) {

    char str[100];
    int count = 0;
    printf("%c%c%c%c%c%c%c: ", -126, -94, -91, -92, 105, -30, -20);
    fgets(str, sizeof(str), stdin);
    for (int i = 0; i < 100; i++) {
    if (str[i] == -87) {
        count = count + 1;
        }

    if (str[i] == ';' || str[i] == '-' || (str[i] == '/' && str[i + 1] == '/')) {
        break;
        }
    }
    if (count == 0) {
        printf("%c%c%c%c%c %c%c%c %c%c%c%c%c%c%c%c: ", -112, -17, -92, -82, -86, -95, -91, -89, -93, -82, -85, -82, -31, -83, -88, -27);
        for (int step = 0; step < 100; step++) {
        if (str[step] != -128 && str[step] != -14 && str[step] != -13 && str[step] != -12 && str[step] != -11 && str[step] != -123 && str[step] != -120 && str[step] != -109 && str[step] != -98
        && str[step] != -97 && str[step] != -96 && str[step] != -91 && str[step] != -88 && str[step] != -82 && str[step] != -29 && str[step] != -17 && str[step] != -18 && str[step] != -114) {
        printf("%c", str[step]);
        }
        if (str[step] == ';' || str[step] == '-' || (str[step] == '/' && str[step + 1] == '/')) {
        if (str[step + 1] == '/') printf("/");
        break;
            }
        }
    }
    else printf("%c%c%c%c%c%c%c%c%c \"%c\" %c %c%c%c%c%c: %d", -118, 105, -85, -20, -86, 105, -31, -30, -20, -87, -29, -32, -17, -92, -86, -29, count);
    getchar();
    return 0;
}*/



//        else{
//            printf("%c = %ld\n", sentence[i], sentence[i]);
//        }

    /*
    char qf = 'й';
    printf("%c = %ld\n", qf, qf);
    char mf = 'Й';
    printf("%c = %ld\n", mf, mf);
    char a = 'ї';
    printf("%c = %ld\n", a, a);
    char qq = 'у';
    printf("%c = %ld\n", qq, qq);
    char bq = 'е';
    printf("%c = %ld\n", bq, bq);
    char fg = 'і';
    printf("%c = %ld\n", fg, fg);
    char hg = 'а';
    printf("%c = %ld\n", hg, hg);
    char yh = 'о';
    printf("%c = %ld\n", yh, yh);
    char rh = 'є';
    printf("%c = %ld\n", rh, rh);
    char rg = 'я';
    printf("%c = %ld\n", rg, rg);
    char er = 'и';
    printf("%c = %ld\n", er, er);
    char nm = 'ю';
    printf("%c = %ld\n", nm, nm);
    char bn = 'Ї';
    printf("%c = %ld\n", bn, bn);
    char hn = 'У';
    printf("%c = %ld\n", hn, hn);
    char ol = 'Е';
    printf("%c = %ld\n", ol, ol);
    char kl = 'І';
    printf("%c = %ld\n", kl, kl);
    char lk = 'А';
    printf("%c = %ld\n", lk, lk);
    char dc = 'О';
    printf("%c = %ld\n", dc, dc);
    char sc = 'Є';
    printf("%c = %ld\n", sc, sc);
    char sv = 'Я';
    printf("%c = %ld\n", sv, sv);
    char wb = 'И';
    printf("%c = %ld\n", wb, wb);
    char fw = 'Ю';
    printf("%c = %ld\n", fw, fw); */

    //printf("%c%c%c\n", 137, 142, 147);
