#include <locale.h>
#include <stdio.h>
#include <windows.h>

void hello()
{
    puts("Моя программа");
    puts("Hello World!");
}


void name()
{
    puts("************************************************");
    puts("*                                              *");
    puts("*                                              *");
    puts("*   тема: Разаработка консольного приложения   *");
    puts("*        Выполнил Еркимбеков Д.А.              *");
    puts("*                                              *");
    puts("*                                              *");
    puts("************************************************");
}

void date()
{
    puts("                _   _       _   _ ");
    puts("  /|    /|     |_| |_|     | | |_ ");
    puts("   |     | .   |_| |_|  .  |_| |_|");
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);;

    hello();
    name();
    date();

    return 0;
}