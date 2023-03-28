#include <stdio.h>
int main()
{
    char ch1, ch2, ch3, ch4, blank;
    printf("Entre com duas letras:\n");
    scanf(" %c", &ch1);
    scanf(" %c", &ch2);
    blank = getc(stdin);
    ch3 = getc(stdin);
    blank = getc(stdin);
    ch4 = getc(stdin); // getc can only get one single variable there is no way to put a space to avoid ENTER
    // putc(ch3, stdout);
    //   Precisaria direcionar para um arquivo. getc e putc podem ler linhas do arquivo e retornar os valores
    printf("As letras inseridas foram %c, %c e %c.\n", ch1, ch2, ch3);
}