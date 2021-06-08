#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,c;
    printf("\n**** Bem vindo ao DMO Capurro ****");
    printf("\n\nResponda as perguntas!\n\n");
    printf("\n\tFormação do mamilo:\n\n1. Mamilo pouco visível, sem aréola\n2. Mamilo nítido e aréola lisa, com diâmetro menor que 0,75 cm\n3. Mamilo puntiforme e aréola de bordo não elevado, com diâmetro maior que 0,75 cm\n4. Mamilo puntiforme e aréola de bordo elevado, com diâmetro maior que 0,75 cm\n");
    printf("\n* Digite o número da opção (ex:1): ");
    scanf("%i",&c);
    if(c==1){
        a=0;
        c=0;
    }
    if(c==2){
        a=5;
        c=0;
    }
    if(c==3){
        a=10;
        c=0;
    }
    if(c==4){
        a=15;
        c=0;
    }
    printf("\n\tTextura da pele:\n\n1. Fina, gelatinosa\n2. Fina e lisa\n3. Lisa, com discreta descamação superficial\n4. Grossa, com sulcos superficiais, descamação de mãos e pés\n5. Grossa, apergaminhada, com sulcos profundos\n");
    printf("\n* Digite o número da opção (ex:1): ");
    scanf("%i",&c);
    if(c==1){
        a=a+0;
        c=0;
    }
    if(c==2){
        a=a+5;
        c=0;
    }
    if(c==3){
        a=a+10;
        c=0;
    }
    if(c==4){
        a=a+15;
        c=0;
    }
    if(c==5){
        a=a+20;
        c=0;
    }
    printf("\n\tFormação da orelha:\n\n1. Chata, disforme, pavilhão não encurvado\n2. Pavilhão parcialmente encurvado no bordo\n3. Pavilhão parcialmente encurvado em todo bordo superior\n4. Pavilhão totalmente encurvado\n");
    printf("\n* Digite o número da opção (ex:1): ");
    scanf("%i",&c);
    if(c==1){
        a=a+0;
        c=0;
    }
    if(c==2){
        a=a+8;
        c=0;
    }
    if(c==3){
        a=a+16;
        c=0;
    }
    if(c==4){
        a=a+24;
        c=0;
    }
    printf("\n\tGlândulas mamárias:\n\n1. Ausência de tecido mamário\n2. Diâmetro menor que 0,5 cm\n3. Diâmetro de 0,5 a 1 cm\n4. Diâmetro maior que 1 cm\n");
    printf("\n* Digite o número da opção (ex:1): ");
    scanf("%i",&c);
    if(c==1){
        a=a+0;
        c=0;
    }
    if(c==2){
        a=a+5;
        c=0;
    }
    if(c==3){
        a=a+10;
        c=0;
    }
    if(c==4){
        a=a+15;
        c=0;
    }
    printf("\n\tPregas plantares:\n\n1. Ausentes\n2. Marcas mal definidas na metade anterior da planta\n3. Marcas bem definidas na metade anterior e sulcos no terço anterior\n4. Sulcos na metade anterior da planta\n5. Sulcos em mais da metade anterior da planta\n");
    printf("\n* Digite o número da opção (ex:1): ");
    scanf("%i",&c);
    if(c==1){
        a=a+0;
    }
    if(c==2){
        a=a+5;
    }
    if(c==3){
        a=a+10;
    }
    if(c==4){
        a=a+15;
    }
    if(c==5){
        a=a+20;
    }
    a=a+204;
    b=a;
    printf("\n\n\tRESULTADO: %i semanas e %i dias",a/7,b%7);

}
