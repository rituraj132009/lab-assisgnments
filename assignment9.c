
#include <stdio.h>
#include <string.h>

int main()
{
    FILE *source, *destination;
    char file1[100], file2[100];
    int ch;

    printf("Enter source file name: ");
    scanf("%99s", file1);

    printf("Enter destination file name: ");
    scanf("%99s", file2);

    if (strcmp(file1, file2) == 0)
    {
        printf("Source and destination files must be different.");
        return 1;
    }

    source = fopen(file1, "r");

    if (source == NULL)
    {
        printf("Unable to open source file.");
        return 1;
    }

    destination = fopen(file2, "w");

    if (destination == NULL)
    {
        printf("Unable to create destination file.");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF)
    {
        fputc(ch, destination);
    }

    if (ferror(source) || ferror(destination))
    {
        printf("Error occurred while copying the file.");
    }
    else
    {
        printf("File copied successfully!");
    }

    fclose(source);
    fclose(destination);

    return 0;
}
