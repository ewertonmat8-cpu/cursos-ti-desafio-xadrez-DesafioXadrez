#include <stdio.h>
 
void moverTorre(int casas){

    if (casas>0)
    {
        printf("Direita\n");
        moverTorre(casas -1);
    }
    
}

void moverBispo(int casas){

while (casas--)
{
   for (int i = 0; i < 1; i++)
{
    printf("Cima, ");
    }
     printf("Direita\n");
}
}

void moverRainha(int casas){

    if (casas>0)
    {
       printf("Esquerda\n");
        moverRainha(casas -1);
    }
    
}

void moverCavalo(int casas){

while (casas--)
{
   for (int i = 0; i < 2; i++)
{
    printf("Cima\n");
    }
     printf("Direita\n");
}
}



int main() {

    int torre,bispo,rainha,n;

printf("Escolha uma peça para movimentar:\n");
printf("1 - Torre\n");
printf("2 - Bispo\n");
printf("3 - Rainha\n");
printf("4 - Cavalo\n");
printf("Opção: ");
    scanf("%d",&n);

switch (n)
{
case 1:

printf("A Torre andará 5 casas para a direita:\n");
  
moverTorre(5);
    
break;

case 2:

printf("O Bispo andará 5 casas na diagonal para cima e à direita:\n");
   
moverBispo(5);

break;

case 3:

printf("A rainha andará 8 casas para a esquerda:\n");
   
moverRainha(8);

break;

case 4:

printf("O Cavalo andará 2 casas para cima e 1 casa para a direita:\n");

moverCavalo(1);

break;

default:
   
    printf("Opção inválida!\n");

break;

}

    return 0;
}
