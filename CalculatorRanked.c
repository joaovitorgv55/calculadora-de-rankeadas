
#include <stdio.h>
#include <string.h>


int vitoriasEderrotas(int *quantidade_vitorias, int *quantidade_derrotas) {
    int saldo_vitorias = 0;
    saldo_vitorias = (*quantidade_vitorias - *quantidade_derrotas);

    switch(saldo_vitorias) {
        case 0 ... 10: 
        printf("O Héroi tem saldo de %d sendo de nível ferro \n", saldo_vitorias);
        break;

        case 11 ... 20:
        printf("O Héroi tem saldo de %d sendo de nível bronze\n", saldo_vitorias);
        break;

        case 21 ... 50:
        printf("O Héroi tem saldo de %d sendo de nível prata \n", saldo_vitorias);
        break;
        
        case 51 ... 80:
        printf("O Héroi tem saldo de %d sendo de nível ouro\n", saldo_vitorias);
        break;

        case 81 ... 90:
        printf("O Héroi tem saldo de %d sendo de nível diamante\n", saldo_vitorias);
        break;

        case 91 ... 100:
        printf("O Héroi tem saldo de %d sendo de nível lendário\n", saldo_vitorias);
        break;

        default:
        printf("O Héroi tem saldo de %d sendo de nível imortal\n", saldo_vitorias);
    }

        return saldo_vitorias;

}


int main() {
int vitorias = 0, derrotas = 0, opcao_fim_cod = 0; 

while(opcao_fim_cod != 1) {

printf("quantas vítorias o jogador possui?\n");
scanf("%d", &vitorias);

printf("quantas derrotas o jogador possui?\n");
scanf("%d", &derrotas);

vitoriasEderrotas(&vitorias, &derrotas);

printf("DIGITE 1 PARA ENCERRAR O PROGRAMA OU 2 PARA CLASSIFICAR NOVAMENTE\n");
scanf("%d", &opcao_fim_cod);

}
}