#include <stdio.h>

int showMenu()
{
    int choice;
    printf("------- MENU ----------\n");
    printf("1 - Adicao de numeros\n");
    printf("2 - Subtracao de numeros\n");
    printf("3 - Multiplicacao de numeros\n");
    printf("4 - Dividir de numeros\n");
    printf("5 - Sair\n");
    printf("-------------------------------------------\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &choice);

    if (choice < 1 || choice > 5)
        choice = 0;

    return choice;
}

int menu()
{

    int choice;

    do
    {

        choice = showMenu();

    } while (!choice && printf("Opcao nao e valida\n"));

    return choice;
}

int repite()
{
    int choice;

    do

    {
        printf("Deseja continuar ou sair\n");
        printf("0 - Sair\n");
        printf("1 - Continuar\n");
        scanf("%d", &choice);
        if (choice == 0)
        {
            printf("Obrigado por usar a calculadora\n");
        }

    } while ((choice < 0 || choice > 1) && printf("Opcao nao e valida\n"));

    return choice;
}

float input1()
{
    float n1;
    printf(" \n Enter the first number: ");
    scanf(" %f", &n1); // take fist number
    return n1;
}
float input2()
{
    float n2;
    printf(" \n Enter the first number: ");
    scanf(" %f", &n2); // take fist number
    return n2;
}

void doMenuChoice(int choice)
{
    switch (choice)
    {
    case 1:
        add();
        break;
    case 2:
        sub();
        break;
    case 3:
        mult();
        break;
    case 4:
        div();
        break;
    case 5:
        out();
        break;
    }
}

void main()
{
    int choice;
    float n1, n2;
    do
    {
        choice = menu();

        doMenuChoice(choice);

    } while (repite());
}

// ADD

add()
{
    float n1, n2,res;
    n1 = input1();
    n2 = input2();
    res=n1+n2;
    printf("a adição entre %f & %f é de %.2f \n",n1,n2,res);
}

//Sub
sub()
{
    float n1, n2,res;
    n1 = input1();
    n2 = input2();
    res=n1-n2;
    printf("a subtração entre %f & %f é de %.2f \n",n1,n2,res);
}

//Mult
mult()
{
    float n1, n2,res;
    n1 = input1();
    n2 = input2();
    res=n1*n2;
    printf("a multiplicação de %f por %f é de %.2f \n",n1,n2,res);
}

//Div
div()
{
    float n1, n2,res;
    n1 = input1();
    n2 = input2();
    if (n2 == 0)   // if n2 == 0, take another number  
        {  
        printf (" \n divisor náo pode ser 0!!! Tente outro valor \n");  
        scanf ("%d", &n2);        
        }  
    res = n1 / n2; // divide two numbers  
    printf (" a divisão de %f por %f é de: %.2f \n", n1, n2, res);   
}

out(){
    printf("Obrigado por usar a calculadora\n");
    exit(0);
}