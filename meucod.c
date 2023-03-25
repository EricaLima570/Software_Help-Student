#include <stdio.h>
#include <stdlib.h>
#include <locale.h>   //Para resolver o problema de acentuação no terminal usando o comando de regionalização
#include <string.h>
int main(){
    setlocale(LC_ALL,"Portuguese_Brazil");// vem de locale.h
    //SetConsoleOutputCP( 1252 );
    int c,opcao,e;
    char resposta, nome[40];

    printf("\t*==========================================================================================================*\n");
    printf("\t|                             Seja bem-vindo!                                                              |\n");
    printf("\t|Este é um programa desenvolvido ,especialmente, para alunos do curso de CC que desejem                    |\n");
    printf("\t|                     estudar para as provas .                                                             |\n");
    printf("\t|  Contamos tambem com uma calculadora integrada para calculos basicos e um simple game para descontrair.  |\n");
    printf("\t|                            LET'S GO!!!                                                                   |\n");
    printf("\t*==========================================================================================================*\n");
    printf("\tOla !! Por favor informe seu nome e a seguir pressione \"Enter\".\n\n");
    printf("Digite Apenas o seu primeiro nome : ");

    fgets(nome,40,stdin);//limitando a quantidade de caracteres colocando uma margem de erro para mais 39+1
                           // e finalizando quando der enter

                        //como permitir que a pessoa insira strings com acento???????????????
    system("cls");

    printf("\n");
    printf("\t\t\t\t\t\tOlá,%s",nome);
    printf("\t\t\t\t\tEsse é o Helpstudent !! ");

    printf("\n");
do{
    printf("\t*==========================================================================================================*\n");
    printf("\t|  Escolha o Assunto desejado e em seguida aperte enter.                                                   |\n");
    printf("\t|  0:Sair do programa                                                                                      |\n");
    printf("\t|  1:Questões de Eletrônica                                                                                |\n");
    printf("\t|  2:Questões de Introdução à Ciência da computação                                                        |\n");
    printf("\t|  3:Questões de Logica matematica                                                                         |\n");
    printf("\t|  4:Calculadora                                                                                           |\n");
    printf("\t|  5:Game adivinhação                                                                                      |\n");
    printf("\t*==========================================================================================================*\n");
    //do{

        printf("Que jogo vc escolhe ?");
        scanf("%d",&opcao);
        c=e=0;

        switch(opcao){
            case 0:
                    printf("Saindo.....");
                    break;

            case 1:
                    printf("\t|  1:Questões de Eletrônica                                                                 |\n");

                    getchar();system("cls");//limpo o terminal
                    printf("\n*==================================================*\n");
                    printf("\nQUestão-1)Quanto tempo é necessário para que 312x10^{19} elétrons passem pelo circuito da figura,\n"
                           "se o aperímetro mostra uma leitura de 8 A?\n");
                    printf("A)50,5 s\n"
                           "B)62,4 s\n"
                           "C)70,8 s\n");
                    printf("\nResposta=");
                    scanf("%c",&resposta);
                    if((resposta=='B') || (resposta=='b')){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: B\n");
                        e++;}
                    printf("\n*==================================================*\n");
                    system("pause");//tentar substituir dps por printf("aperte qualquer tecla pra sair");
                    getchar();
                    system("cls");//limpo o terminal


                    printf("\t*==================================================*\n");
                    printf("\nQuestão-2)Uma calculadora que usa uma bateria interna de 3v consome 0,4 mW quando"
                           "\nestá em pleno funionamento.Qual a corrente drenada pela calculadora:\n");

                    printf("A)1,3 mA\n"
                           "B)0,13 mA\n"
                           "C)1,3 MA\n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='B' || resposta=='b'){
                        printf("\nAcertou \n!!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: B\n");
                        e++;}
                    printf("\n*==================================================*\n");
                    system("pause");
                    getchar();
                    system("cls");

                    printf("\t*==================================================*\n");
                    printf("\nQuestão-3)Qual a distãncia entre duas cargas de 20 µC se a força entre elas"
                           "for de 3,6x10^{4}N:\n");
                    printf("DICA: F=K(Q1*Q2)/d2");
                    printf("A)3,6*10 m\n"
                           "B)2*10^{-4} m\n"
                           "C)1*10^{-2} m\n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='C' || resposta=='c'){
                        printf("\nAcertou !!!\n");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: C\n");
                        e++;}
                   printf("\n*==================================================*\n");
                    system("pause");
                    getchar();
                    system("cls");


                    printf("\t*==================================================*\n");
                    printf("\nQuestão-4)Quanto de carga passa por uma bateria de 9v se a energia usada for de 72 J:\n");
                    printf("Dica:V=W/Q");

                    printf("A)8 C\n"
                           "B)9 C\n"
                           "C)7 C\n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='A' || resposta=='a'){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: A\n");
                        e++;}
                     printf("\n*==================================================*\n");
                    system("pause");
                    getchar();
                    system("cls");


                    printf("\t*==================================================*\n");
                    printf("\nQuestão-5)Um refrigerador operando a 120 V demanda 2.2 A,"
                           "qual o valor de sua resistência:\n");

                    printf("A)54,54 \n"
                           "B)45,65 \n"
                           "C)32,79 \n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='A' || resposta=='a'){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: A\n");
                        e++;}

                    printf("\n*==================================================*\n");
                    system("pause");
                    system("cls");
                    printf("\nTESTE FINALIZADO,%s",nome);
                    printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ",c);
                    printf("\nVOCE ERROU UM TOTAL DE= %d respostas ",e);
                    getchar();


                    printf("\n*==================================================*\n");
                    break;
            case 2:
                    printf("\t|  2:Questões de Introdução à Ciência da computação                                            |\n");
                    getchar();system("cls");//limpo o terminal
                    printf("\n*==================================================*\n");
                    printf("\nQUestão-1)Qual dos seguintes termos representa a menor unidade de memória manipulável:\n");

                    printf("A)instância\n"
                           "B)Célula \n"
                           "C)Bloco \n");
                    printf("\nResposta=");
                    scanf("%c",&resposta);
                    if((resposta=='B') || (resposta=='b')){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: B\n");
                        e++;}
                    printf("\n*==================================================*\n");
                    system("pause");//tentar substituir dps por printf("aperte qualquer tecla pra sair");
                    getchar();
                    system("cls");//limpo o terminal
                    printf("\t*==================================================*\n");
                    printf("\nQuestão-2)Qual das seguintes opçôes contitui uma desvantagem das HDs");
                    printf("A)Não pode ser formatada\n"
                           "B)Menor vida útil\n"
                           "C)Susceptivel a danos fisicos\n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='C' || resposta=='c'){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: C\n");
                        e++;}
                     printf("\n*==================================================*\n");
                    system("pause");
                    getchar();
                    system("cls");


                    printf("\t*==================================================*\n");
                    printf("\nQuestão-3)Quantos bits existem na memória de um computador com 2KB"
                           "(mais precisamente KiB) de memória:\n");

                    printf("A)16384\n"
                           "B)2048 \n"
                           "C)2000 \n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='A' || resposta=='a'){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: A\n");
                        e++;}
                    printf("\n*==================================================*\n");
                    system("pause");
                    getchar();
                    system("cls");


                    printf("\t*==================================================*\n");
                    printf("\nQuestão-4)Qual a representação em base decimal do numero 1111( binário):");

                    printf("A)16\n"
                           "B)12 \n"
                           "C)15 \n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='C' || resposta=='c'){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: C\n");
                        e++;}
                     printf("\n*==================================================*\n");
                    system("pause");
                    getchar();
                    system("cls");


                    printf("\t*==================================================*\n");
                    printf("\nQuestão-5)Quem possui mais bits,dentre os valores a seguir:");

                    printf("A)1 megabit\n"
                           "B)2 mebibits \n"
                           "C)1060 Kilobits \n");
                    printf("Resposta=");
                    scanf("%c",&resposta);
                     if(resposta=='B' || resposta=='b'){
                        printf("\nAcertou !!!");
                        c++;}
                    else{
                        printf("\nerrou,resposta certa: B\n");
                        e++;}
                         printf("\n*==================================================*\n");
                    system("pause");
                    system("cls");
                    printf("\nTESTE FINALIZADO,%s",nome);
                    printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ",c);
                    printf("\nVOCE ERROU UM TOTAL DE= %d respostas ",e);
                    getchar();


                    printf("\n*==================================================*\n");
                    break;
            /*case 3:
                    Raianny
                    break;*/
            default:
                    printf("OPÇÃO INVÁLIDA");
                    printf("\n*==================================================*\n");
                    system("pause");//tentar substituir dps por printf("aperte qualquer tecla pra sair");
                    getchar();
                    system("cls");//limpo o terminal
                    }
            }while(opcao!=0);
            printf("\nVOCE SAIU DO PROGRAMA !!!\n");

            return 0;
}
