#include <stdio.h>

int main() {
    int voto1, voto2, voto3;
    float media;
    printf("Inserisci il primo voto: ");
    scanf("%d", &voto1);
    printf("Inserisci il secondo voto: ");
    scanf("%d", &voto2);
    printf("Inserisci il terzo voto: ");
    scanf("%d", &voto3);
    media = (voto1 + voto2 + voto3) / 3.0;
    printf("La media dei voti è: %.2f\n", media);

    return 0;
}
