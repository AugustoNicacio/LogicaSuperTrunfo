#include <stdio.h>
 
int main() {
    char codigo_Carta_A[2];
    char Estado_A[3];
    char Nome_Cidade_A[20];
    int População_A;
    float PIB_A;
    int pontos_turisticos_A;

    char Carta_B[2];
    char Estado_B[3];
    char Cidade_B[20];
    int População_B;
    float PIB_B;
    int pontos_turisticos_B;
    
    printf("Digite o código da Carta 01: ");
    scanf(" %c", &codigo_Carta_A);
    
    printf("Digite a sigla do Estado 01: ");
    scanf(" %s", &Estado_A);
    
    printf("Digite o nome da Cidade 01, sem espaços: ");
    scanf(" %s", &Nome_Cidade_A);
    
    printf("Digite a População da Cidade 01: ");
    scanf(" %d", &População_A);
    
    printf("Digite o PIB da Cidade 01: ");
    scanf(" %f", &PIB_A);
    
    printf("Digite os Pontos Turísticos da Cidade 01: ");
    scanf(" %d", &pontos_turisticos_A);
    
    printf("Digite o código da Carta 02: ");
    scanf(" %c", &Carta_B);
    
    printf("Digite a sigla do Estado 02: ");
    scanf(" %s", &Estado_B);
   
    printf("Digite o nome da Cidade 02, sem espaços: ");
    scanf(" %s", &Cidade_B);
   
    printf("Digite a População da Cidade 02: ");
    scanf(" %d", &População_B);
    
    printf("Digite o PIB da Cidade 02: ");
    scanf(" %f", &PIB_B);
   
    printf("Digite os Pontos Turísticos da Cidade 02: \n");
    scanf(" %d", &pontos_turisticos_B);
    
    printf("Código da Cidade 01: %c\n", codigo_Carta_A);
    printf("Estado 01: %s\n", Estado_A);
    printf("Cidade 01: %s\n", Nome_Cidade_A);
    printf("População 01: %d mil habitantes\n", População_A);
    printf("PIB 01: R$ %.7f milhões\n", PIB_A);
    printf("Turismo 01: %d Pontos turísticos\n\n", pontos_turisticos_A);

    printf("Código da Cidade 02: %c\n", Carta_B);
    printf("Estado 02: %s\n", Estado_B);
    printf("Cidade 02: %s\n", Cidade_B);
    printf("População 02: %d mil habitantes\n", População_B);
    printf("PIB 02: R$ %.7f milhões\n", PIB_B);
    printf("Turismo 02: %d Pontos turísticos\n\n", pontos_turisticos_B);



    if (PIB_A > PIB_B) 
    printf("A cidade vencedora com maior PIB é:\n");
    printf("Cidade: %s\n", Nome_Cidade_A);
    
 
    return 0;
}
