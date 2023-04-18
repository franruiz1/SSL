#include <stdio.h>

int main()
{
    FILE *fp;
    char texto[20] ="Hello, World!";
    fp = fopen("output.txt","w+");
    fprintf(fp,texto);
    printf("Hello, World!");
    return 0;
}