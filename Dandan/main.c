#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int a,b,c;
    printf("\n**** Bem vindo ao DMO Capurro ****");
    printf("\n\nResponda as perguntas!\n\n");
    printf("\n\tForma��o do mamilo:\n\n1. Mamilo pouco vis�vel, sem ar�ola\n2. Mamilo n�tido e ar�ola lisa, com di�metro menor que 0,75 cm\n3. Mamilo puntiforme e ar�ola de bordo n�o elevado, com di�metro maior que 0,75 cm\n4. Mamilo puntiforme e ar�ola de bordo elevado, com di�metro maior que 0,75 cm\n");
    printf("\n* Digite o n�mero da op��o (ex:1): ");
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
    printf("\n\tTextura da pele:\n\n1. Fina, gelatinosa\n2. Fina e lisa\n3. Lisa, com discreta descama��o superficial\n4. Grossa, com sulcos superficiais, descama��o de m�os e p�s\n5. Grossa, apergaminhada, com sulcos profundos\n");
    printf("\n* Digite o n�mero da op��o (ex:1): ");
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
    printf("\n\tForma��o da orelha:\n\n1. Chata, disforme, pavilh�o n�o encurvado\n2. Pavilh�o parcialmente encurvado no bordo\n3. Pavilh�o parcialmente encurvado em todo bordo superior\n4. Pavilh�o totalmente encurvado\n");
    printf("\n* Digite o n�mero da op��o (ex:1): ");
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
    printf("\n\tGl�ndulas mam�rias:\n\n1. Aus�ncia de tecido mam�rio\n2. Di�metro menor que 0,5 cm\n3. Di�metro de 0,5 a 1 cm\n4. Di�metro maior que 1 cm\n");
    printf("\n* Digite o n�mero da op��o (ex:1): ");
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
    printf("\n\tPregas plantares:\n\n1. Ausentes\n2. Marcas mal definidas na metade anterior da planta\n3. Marcas bem definidas na metade anterior e sulcos no ter�o anterior\n4. Sulcos na metade anterior da planta\n5. Sulcos em mais da metade anterior da planta\n");
    printf("\n* Digite o n�mero da op��o (ex:1): ");
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
