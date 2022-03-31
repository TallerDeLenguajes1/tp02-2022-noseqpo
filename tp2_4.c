#include <stdio.h>
#include <stdlib.h>

struct compu
{
    int velocidad;  // entre 1 y 3 Gherz
    int anio;       // entre 2000 y 2017
    int cantidad;   // entre 1 y 4
    char *tipo_cpu; // valores del arreglo tipos
};

char tipos[6][10] = {"Intel",
                     "AMD",
                     "Celeron",
                     "Athlon",
                     "Core",
                     "Pentium"};

void mostrar(struct compu L[]);
void mostrarUna(struct compu L);
void mostrarVieja(struct compu L[]);
void mostrarRapida(struct compu L[]);

int main(int argc, char const *argv[])
{
    struct compu pc[5];
    for (int i = 0; i < 5; i++)
    {
        pc[i].cantidad = 1 + rand() % 4;
        pc[i].anio = 2000 + rand() % 17;
        pc[i].velocidad = 1 + rand() % 3;
        pc[i].tipo_cpu = tipos[rand() % 6];
    }
    mostrar(pc);
    mostrarVieja(pc);
    mostrarRapida(pc);
    getchar();
    return 0;
}

void mostrar(struct compu L[]){
    for (int i = 0; i < 5; i++)
    {
        printf("Procesador %d:\n    ", i+1);
        mostrarUna(L[i]);
    }
}

void mostrarUna(struct compu L){
    printf("\nLa velocidad del procesador es %d GHz", L.velocidad);
    printf("\nEl año del procesador es %d", L.anio);
    printf("\nLa cantidad de nuecleos del procesador es %d", L.cantidad);
    printf("\nEl tipo del procesador es %s", L.tipo_cpu);
    printf("\n \n");
}

void mostrarVieja(struct compu L[]){
    struct compu max = L[0];
    for (int i = 1; i < 5; i++)
    {
        if(L[i].anio<max.anio){
            max = L[i];
        }
    }
    printf("\nLa mas vieja es: ");
    mostrarUna(max);
}

void mostrarRapida(struct compu L[]){
    struct compu max = L[0];
    for (int i = 1; i < 5; i++)
    {
        if(L[i].velocidad>max.velocidad){
            max = L[i];
        }
    }
    printf("\nLa mas rapida es: ");
    mostrarUna(max);
}