#include <stdio.h>

//prototypy

float mil_n_km(float mil);

float km_n_mil(float km);

float k_n_w(float konie);

float kmh_n_ms(float kmh);

float f_n_c(float f);

int main() {
    int nr = 1;

    while(nr){
        printf("Wybierz opcje\n1 - Mile na kilometry\n2 - Kilometry na mile\n3 - Konie mechaniczne na waty\n4 - Kilometry na godzine na metry na sekunde\n5 - Stopnie Fahrenheita na stopnie Celsjusza\n 0 - zakoncz program\n");
        scanf("%d", &nr);

        if (nr == 1){
            float mile;
            printf("Podaj ile mil:\n");
            scanf("%f", &mile);
            printf("%f mil to %f kilometrow:\n", mile, mil_n_km(mile));
        }
        else if (nr == 2){
            float kilometry;
            printf("Podaj ile kilometrow:\n");
            scanf("%f", &kilometry);
            printf("%f kilometrow to %f mil\n", kilometry, km_n_mil(kilometry));
        }

        else if (nr == 3){
            float konie;
            printf("Podaj ile koni:\n");
            scanf("%f", &konie);
            printf("%f koni to %f watow\n", konie, k_n_w(konie));
        }
        else if (nr == 4){
            float kmh;
            printf("Podaj ile kmh:\n");
            scanf("%f", &kmh);
            printf("%f kmh to %f ms\n", kmh, kmh_n_ms(kmh));
        }

        else if (nr == 5){
            float f;
            printf("Podaj ile stopni Fahrenheita:\n");
            scanf("%f", &f);
            printf("%f stopni Fahrenheita to %f stopni Celsjusza\n", f, f_n_c(f));
        }

        else if (nr == 0){
            printf("Dziekujemy za skorzystanie z programu\n");
        } else
            printf("Wybrano niepoprawna opcje, sprbuj ponownie");
    }
    return 0;
}

//definicje

float mil_n_km(float mil){
    return mil*1.6;
}

float km_n_mil(float km){
    return km/1.6;
}

float k_n_w(float konie){
    return konie*735;
}

float kmh_n_ms(float kmh){
    return kmh/3.6;
}

float f_n_c(float f){
    return (f-32)*(5/9.0);
}
