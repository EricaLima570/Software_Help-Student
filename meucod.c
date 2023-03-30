#include <stdio.h>
#include <stdlib.h> //para usar a função  rand e srand
#include <locale.h> //Para resolver o problema de acentuação no terminal do windows usando o comando de regionalização
#include <time.h> //para incluir o parameetro time no srand 


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil"); // vem de locale.h
    // SetConsoleOutputCP( 1252 );
    int c, opcao, e, opcaocalculo;
    char resposta, nome[40];
    float num1, num2;
    int erro, acumula, i, j, mat[3][3], n, decisao;

    printf("\t*==========================================================================================================*\n");
    printf("\t|                                   Seja bem-vindo(a)!                                                     |\n");
    printf("\t|                        Muito Prazer ! Eu sou a Lis :)!                                                   |\n");
    printf("\t|       Um programa desenvolvido ,especialmente, com intuito de ajudar os alunos de CC nos estudos         |\n");
    printf("\t|                       Conto com Quizzes relacionados a materias especificas do curso                     |\n");
    printf("\t|  Possuo ,tambem,  uma calculadora integrada para calculos basicos e um SIMPLE GAME para descontrair ;) ! |\n");
    printf("\t|                                     SO....LET'S GO!!!                                                    |\n");
    printf("\t*==========================================================================================================*\n");
    printf("\nPor favor ,informe seu nome e a seguir pressione \"Enter\".\n\n");
    printf("Digite  Seu primeiro nome : ");

    fgets(nome, 40, stdin); // limitando a quantidade de caracteres colocando uma margem de erro para  39
                            //  e finalizando quando der enter(+1)

// Bloco de codigo a seguir serve para limpar o terminal tanto para SO linux quanto windows
#ifdef _WIN64
    system("cls");//comando do SO+instrução do Win
#elif __linux
    system("clear");//comando do So + instrução  do linux
#else
#endif 
// verificação do SO encerra aqui

    printf("\n");
    printf("\t\t\t\t\t\tOlá,%s", nome);
    printf("\t\t\t Soldada Lis preparada para os comandos !!! ;) !! ");

    printf("\n");
    do
    { // repetição para que o usuario permaneça aqui ate que digite a tecla de saida
        printf("\t*==========================================================================================================*\n");
        printf("\t|  Escolha o Assunto desejado e em seguida aperte enter.                                                   |\n");
        printf("\t|                                                                                                          |\n");
        printf("\t|  0:Sair do programa                                                                                      |\n");
        printf("\t|  1:Questões de Eletrônica                                                                                |\n");
        printf("\t|  2:Questões de Introdução à Ciência da computação                                                        |\n");
        printf("\t|  3:Questões de Logica matematica                                                                         |\n");
        printf("\t|  4:Calculadora                                                                                           |\n");
        printf("\t|  5:Simple Game-Adivinhe o elemento na matriz                                                             |\n");
        printf("\t*==========================================================================================================*\n");

        printf("\nQue opcao voce escolhe ?");
        scanf("%d", &opcao);
// Bloco de codigo a seguir serve para limpar o terminal tanto para SO linux quanto windows
#ifdef _WIN64
        system("cls");
#elif __linux
        system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

        c = e = 0; // contadores de pontuação sempre iniciando em 0 , a medida que ocorre um novo loop opcional

        switch (opcao)
        {
        case 0:
            printf("Saindo.....");
            break;

        case 1:
            printf("\t|1:Questões de Eletrônica|\n");

            getchar();
            printf("*==================================================*\n");
            printf("\nQUestão-1)Quanto tempo é necessário para que 312x10^{19} elétrons passem por um determinado circuito,\n"
                   "se o aperímetro mostra uma leitura de 8 A?\n");
            printf("\nA)50,5 s\n"
                   "B)62,4 s\n"
                   "C)70,8 s\n");
            printf("\nResposta=");
            scanf("%c", &resposta);
            if ((resposta == 'B') || (resposta == 'b'))
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: B\n");
                e++;
            }

            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");//poderia substituir por um printf: aperte enter
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");

            printf("\nQuestão-2)Uma calculadora que usa uma bateria interna de 3v consome 0,4 mW quando"
                   "\nestá em pleno funionamento.Qual a corrente drenada pela calculadora:\n");

            printf("\nA)1,3 mA\n"
                   "B)0,13 mA\n"
                   "C)1,3 MA\n");
            printf("\nResposta=");
            scanf("%c", &resposta);
            if ((resposta == 'B') || (resposta == 'b'))
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: B\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");

            printf("\nQuestão-3)Qual a distãncia entre duas cargas de 20 µC se a força entre elas"
                   "for de 3,6x10^{4}N:\n");
            printf("\nDICA: F=K(Q1*Q2)/d2\n");
            printf("\nA)3,6*10 m\n"
                   "B)2*10^{-4} m\n"
                   "C)1*10^{-2} m\n");
            printf("\nResposta=");
            scanf("%c", &resposta);
            if ((resposta == 'C') || (resposta == 'c'))
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: C\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");
            printf("\nQuestão-4)Quanto de carga passa por uma bateria de 9v se a energia usada for de 72 J:\n");
            printf("Dica:V=W/Q\n");

            printf("\nA)8 C\n"
                   "\nB)9 C\n"
                   "\nC)7 C\n");
            printf("\nResposta=");
            scanf("%c", &resposta);
            if ((resposta == 'A') || (resposta == 'a'))
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: A\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");
            printf("\nQuestão-5)Um refrigerador operando a 120 V demanda 2.2 A,"
                   "qual o valor de sua resistência:\n");

            printf("\nA)54,54 \n"
                   "B)45,65 \n"
                   "C)32,79 \n");
            printf("\nResposta=");
            scanf("%c", &resposta);
            if ((resposta == 'A') || (resposta == 'a'))
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: A\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
            printf("\nTESTE FINALIZADO,%s", nome);
            printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ", c);
            printf("\nVOCE ERROU UM TOTAL DE= %d respostas \n\n", e);
            system("pause");
            system("cls");
            // getchar();

#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
            printf("\nTESTE FINALIZADO,%s", nome);
            printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ", c);
            printf("\nVOCE ERROU UM TOTAL DE= %d respostas\n\n ", e);
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");

#else

#endif // __linux
       // verificação do SO encerra aqui

            break;
        case 2:
            printf("\t|Questões de Introdução à Ciência da computação                                            |\n");
            getchar();
            printf("\n*==================================================*\n");
            printf("\nQUestão-1)Qual dos seguintes termos representa a menor unidade de memória manipulável:\n");

            printf("\nA)instância\n"
                   "\nB)Célula \n"
                   "\nC)Bloco \n");
            printf("\nResposta=");
            scanf("%c", &resposta);

            if (resposta == 'B' || resposta == 'b')
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: B\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");
            printf("\nQuestão-2)Qual das seguintes opçôes contitui uma desvantagem das HDs\n");
            printf("\nA)Não pode ser formatada\n"
                   "\nB)Menor vida útil\n"
                   "\nC)Susceptivel a danos fisicos\n");
            printf("\nResposta=");
            scanf("%c", &resposta);

            if (resposta == 'C' || resposta == 'c')
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: C\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");
            printf("\nQuestão-3)Quantos bits existem na memória de um computador com 2KB"
                   "(mais precisamente KiB) de memória:\n");

            printf("\nA)16384\n"
                   "\nB)2048 \n"
                   "\nC)2000 \n");
            printf("\nResposta=");
            scanf("%c", &resposta);
            if (resposta == 'A' || resposta == 'a')
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: A\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");
            printf("\nQuestão-4)Qual a representação em base decimal do numero 1111( binário):\n");

            printf("\nA)16\n"
                   "\nB)12 \n"
                   "\nC)15 \n");
            printf("\nResposta=");
            scanf("%c", &resposta);

            if (resposta == 'C' || resposta == 'c')
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: C\n");
                e++;
            }
            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf("\t*==================================================*\n");
            printf("\nQuestão-5)Quem possui mais bits,dentre os valores a seguir:\n");

            printf("\nA)1 megabit\n"
                   "\nB)2 mebibits \n"
                   "\nC)1060 Kilobits \n");
            printf("\nResposta=");
            scanf("%c", &resposta);

            if (resposta == 'B' || resposta == 'b')
            {
                printf("\nAcertou !!!");
                c++;
            }
            else
            {
                printf("\nerrou,resposta certa: B\n");
                e++;
            }

            printf("\n*==================================================*\n");
#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
            printf("\nTESTE FINALIZADO,%s", nome);
            printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ", c);
            printf("\nVOCE ERROU UM TOTAL DE= %d respostas \n\n", e);
            system("pause");
            system("cls");
            // getchar();

#elif __linux
            getchar();
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
            printf("\nTESTE FINALIZADO,%s", nome);
            printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ", c);
            printf("\nVOCE ERROU UM TOTAL DE= %d respostas\n\n ", e);
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");

#else

#endif // __linux
       // verificação do SO encerra aqui

            break;
        case 3:
            printf("\t|Questões de lógica Matemática |\n");
            getchar();
            printf("*==================================================*\n");
            printf("\nQuestão-1)Assinale a alternativa incorreta com relação aos conectivos lógicos: \n ");

            printf("\nA)Se os valores lógicos de duas proposições forem falsos,\n"
                   "então a conjunção entre elas têm valor lógico falso \n "
                   "\nB)Se os valores lógicos de duas proposições forem falsos,\n"
                   "então o condicional entre elas têm valor lógico verdadeiro \n "
                   "\nC)Se os valores lógicos de duas proposições forem falsos,\n"
                   "então o bicondicional entre elas têm valor lógico falso \n ");
            printf("\nResposta= ");
            scanf("%c", &resposta);
            if ((resposta == 'C') || (resposta == 'c'))
            {
                printf("\nAcertou !!!");
                c++;
            }

            else
            {
                printf("\nerrou,resposta certa: C\n");
                e++;
            }

            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui

            printf(" \t *=================================================== ======* \n ");
            printf(" \nQuestão-2)O resultado da tabela verdade de (p^q)?(p<->q) é classificada como: \n ");

            printf("\nA)Contingência \n "
                   "\nB)Tautologia \n "
                   "\nC)Contradição \n ");
            printf("\nResposta= ");
            scanf("%c", &resposta);
            if ((resposta == 'B') || (resposta == 'b'))
            {
                printf("\nAcertou !!!");
                c++;
            }

            else
            {
                printf("\nerrou,resposta certa: B\n");
                e++;
            }

            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
            printf(" \t *=========================================================* \n ");
            printf(" \nQuestão-3)Qual resultado da tabela verdade da negação de q ? \n ");

            printf("\nA)F, F, V, V \n "
                   "\nB)V, F, V, F \n "
                   "\nC)F, V, V, F\n ");
            printf("\nResposta= ");
            scanf("%c", &resposta);
            if ((resposta == 'A') || (resposta == 'a'))
            {
                printf("\nAcertou !!!");
                c++;
            }

            else
            {
                printf("\nerrou,resposta certa: A\n");
                e++;
            }

            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
            printf("\t*=========================================================* \n ");
            printf("\nQuestão-4)Qual operação lógica o símbolo ^ representa? \n");
 
            printf("\nA)Disjunção \n "
                   "\nB)Conjunção\n "
                   "\nC)Bicondicional \n ");
            printf("\nResposta= ");
            scanf("%c", &resposta);
            if ((resposta == 'B') || (resposta == 'b'))
            {
                printf("\nAcertou !!!");
                c++;
            }

            else
            {
                printf("\nerrou,resposta certa: B\n");
                e++;
            }

            printf("\n*==================================================*\n");

#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
#elif __linux
            getchar();
            printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
            printf(" \t *=========================================================* \n ");
            printf(" \n Questão-5)Quando uma proposição condicional será falsa?\n ");

            printf("\nA)Só serão falsas quando a primeira proposição for verdadeira e a segunda falsa.\n "
                   "\nB)ó serão falsas quando todos os elementos forem falsos \n "
                   "\nC)Só serão falsas quando a primeira proposição for falsa e a segunda verdadeira \n ");
            printf("\nResposta= ");
            scanf("%c", &resposta);
            if ((resposta == 'A') || (resposta == 'a'))
            {
                printf("\nAcertou !!!");
                c++;
            }

            else
            {
                printf("\nerrou,resposta certa: A\n");
                e++;
            }

            printf("\n*==================================================*\n");
#ifdef _WIN64
            system("pause");
            getchar();
            system("cls"); // limpo o terminal
            printf("\nTESTE FINALIZADO,%s", nome);
            printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ", c);
            printf("\nVOCE ERROU UM TOTAL DE= %d respostas \n\n", e);
            system("pause");
            system("cls");
            // getchar();

#elif __linux
            getchar();
            printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");
            printf("\nTESTE FINALIZADO,%s", nome);
            printf("\nVOCE ACERTOU UM TOTAL DE = %d respostas ", c);
            printf("\nVOCE ERROU UM TOTAL DE= %d respostas\n\n ", e);
            printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
            getchar();
            system("clear");

#else

#endif // __linux
       // verificação do SO encerra aqui

            break;
        case 4:

            do
            {
                printf("\n\ncalculadora\n\n");

                printf("Qual operacao voce deseja realizar ?: ");
                printf("\n\n");
                printf("\n0.Sair\n1. Soma\n2.Subtracao\n3.Multiplicacao\n4.Divisao\n\n");
                printf("\nDigite uma opção:");
                scanf("%d", &opcaocalculo);

    

                num1 = num2 = 0;
                printf("\n*==================================================*\n");

#ifdef _WIN64
                system("pause");
                getchar();
                system("cls"); // limpo o terminal
#elif __linux
                getchar();
                printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                getchar();
                system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                printf("*=========================================================* \n ");

                switch (opcaocalculo)
                {

                case 0:
                    printf("Saindo...\n");
                    printf("\n*==================================================*\n");

#ifdef _WIN64
                    system("pause");
                    system("cls"); // limpo o terminal
#elif __linux
                    
                    printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
                    getchar();
                    system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                    printf("\t*=========================================================* \n ");
                    break;
                case 1:
                    printf("\nVocê escolheu Soma\n");
                    printf("\nInsira o primeiro valor:");
                    scanf("%f", &num1);
                    printf("\nInsira o segundo valor:");
                    scanf("%f", &num2);
                    printf("\n\nSoma: %.2f", num1 + num2);

                    printf("\n*==================================================*\n");

#ifdef _WIN64
                    system("pause");
                    getchar();
                    system("cls"); // limpo o terminal
#elif __linux
                    getchar();
                    printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                    getchar();
                    system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                    printf("\t*=========================================================* \n ");
                    break;
                case 2:
                    printf("\nVocê escolheu Subtração\n");
                    printf("\nInsira o primeiro valor:");
                    scanf("%f", &num1);
                    printf("\nInsira o segundo valor:");
                    scanf("%f", &num2);
                    printf("\n\nSubtração: %.2f", num1 - num2);

                    printf("\n*==================================================*\n");

#ifdef _WIN64
                    system("pause");
                    getchar();
                    system("cls"); // limpo o terminal
#elif __linux
                    getchar();
                    printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                    getchar();
                    system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                    printf("\t*=========================================================* \n ");
                    break;
                case 3:
                    printf("\nMultiplicação\n");
                    printf("\nInsira o primeiro valor:");
                    scanf("%f", &num1);
                    printf("\nInsira o segundo valor:");
                    scanf("%f", &num2);
                    printf("\n\nMultiplicação: %.2f", num1 * num2);

                    printf("\n*==================================================*\n");

#ifdef _WIN64
                    system("pause");
                    getchar();
                    system("cls"); // limpo o terminal
#elif __linux
                    getchar();
                    printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                    getchar();
                    system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                    printf("\t*=========================================================* \n ");
                    break;
                case 4:
                    printf("\nDivisão\n");
                    printf("\nInsira o primeiro valor:");
                    scanf("%f", &num1);
                    printf("\nInsira o segundo valor:");
                    scanf("%f", &num2);
                    while (num2 == 0)
                    {
                        printf("Nao existe divisao por zero!\n Digite outro valor: ");
                        scanf("%f", &num2);
                    }
                    printf("\n\nDivisao: %.2f\n", num1 / num2);

                    printf("\n*==================================================*\n");

#ifdef _WIN64
                    system("pause");
                    getchar();
                    system("cls"); // limpo o terminal
#elif __linux
                    getchar();
                    printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                    getchar();
                    system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                    printf("\t*=========================================================* \n ");
                    break;

                default:
                printf("OPÇÂO INVALIDA");
                printf("\n*==================================================*\n");

#ifdef _WIN64

                system("pause");
                system("cls"); // limpo o terminal
#elif __linux
                printf("Pressione enter para continuar:\n");
                getchar();
                system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                printf("*=========================================================* \n ");
                break;


                }
            } while (opcaocalculo != 0);

            break;

        case 5:
            srand(time(NULL)); // funçao para poder gerar uma matriz aleatoria a cada execução tendo como semente a variavel do clock do pc
                               // colocar fora do do while  para n mudar a cada loop diferente visto que é gerado
                               // baseado na hora da maquina,
                            

            do
            {
                printf("\n*==================================================*\n");

#ifdef _WIN64
                system("pause");
                getchar();
                system("cls"); // limpo o terminal
#elif __linux
                getchar();
                printf("Pressione qualquer tecla:\n"); // em linux nao se usa system(pause), visto que é função do win
                getchar();
                system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                printf("*=========================================================* \n ");
                printf("\n\n");

                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        mat[i][j] = rand() % 31;
                }

                for (i = 0; i < 3; i++)
                {
                    for (j = 0; j < 3; j++)
                        printf("%2d\t", mat[i][j]);
                    printf("\n");
                }
                // comentario apenas para verificadores do codigo averiguarem os valores na
                //  matriz em um dado momento.

                printf("\n\n-----------------------Simple Game--------------------------------\n\n");
                printf("\n0-sair\n1-jogar\n");
                printf("\nQual a sua decisão: ");
                scanf("%d", &decisao);

                printf("\n*==================================================*\n");

#ifdef _WIN64
                system("pause");
                getchar();
                system("cls"); // limpo o terminal
#elif __linux
                getchar();
                printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                getchar();
                system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                printf("\t*=========================================================* \n ");

                switch (decisao)
                {
                case 0:
                    printf("\nSaindo....\n");
                    printf("\n*==================================================*\n");

#ifdef _WIN64
                    system("pause");
                    system("cls"); // limpo o terminal
#elif __linux
                    getchar();
                    printf("Pressione enter para continuar:\n"); // em linux nao se usa system(pause), visto que é função do win
                    getchar();
                    system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                    printf("\t*=========================================================* \n ");
                    break;
                case 1:
                    printf("\n\nVocê tem 3 chances para acertar\n\n ");

                    erro = 3;
                    do
                    {

                        acumula = 0;
                        printf("\ndigite um valor entre um 1 e 30:  ");
                        scanf("%d", &n);

                        for (i = 0; i < 3; i++)
                        {
                            for (j = 0; j < 3; j++)
                            {
                                if (n == mat[i][j])
                                {
                                    printf("\nAcertou\n");
                                    acumula++;
                                    break;
                                }
                            }
                            if (acumula != 0)
                                break;
                        }
                        if (acumula == 0)
                        {
                            printf("\nERROU\n");
                            erro--;
                            printf("\nRestam %d Chance(s)\n", erro);
                            continue;
                        }
                    } while (erro != 0 && acumula == 0);
                    if (acumula != 0)
                        printf("Você acertou restando %d chance(s)", erro);
                    else
                    {
                        printf("\n\n---------NÃO FOI DESSA VEZ----------\n\n");
                        printf("Infelizmente voce esgotou suas 3 chances e não acertou :( !!!!!)");
                    }

                    break;
                }
            } while (decisao != 0);
            break;

      default:
                printf("OPÇÂO INVALIDA");
                printf("\n*==================================================*\n");

#ifdef _WIN64

                system("pause");
                system("cls"); // limpo o terminal
#elif __linux
                printf("Pressione enter para continuar:\n");
                getchar();
                system("clear");
#else
#endif // __linux
       // verificação do SO encerra aqui
                printf("*=========================================================* \n ");
                break;
        }
    } while (opcao != 0);

    printf("\n\nFoi um Prazer estar com você, %s !!!",nome);

    printf("\n\nVolte mais vezes ! Sentirei su Falta!!\n"
            "Bye Bye...");

    printf("\n\nVOCE SAIU DO PROGRAMA !!!\n\n");

    return 0;
}
