#include <stdio.h>
#include <string.h>
 
int max, charCount, stringCount;
char string[512], currentLine[256][512];
 
void printLine()    {
    if (stringCount == 1)    {
        printf("%s", currentLine[0]);
        for (int i = 0; i < max - strlen(currentLine[0]); i++)
            putchar(' ');
        puts("");
        return;
    }
    int spacing = (max - charCount) / (stringCount - 1);
    int extra = (max - charCount) % (stringCount - 1);
    for (int i = 0; i < stringCount; i++)    {
        printf("%s", currentLine[i]);
        if (i == stringCount - 1)    {
            puts("");
            break;
        }
        for (int j = 0; j < spacing; j++)
            putchar(' ');
        if (extra > 0)    {
            putchar(' ');
            extra--;
        }
    }
}
 
int main()    {
    scanf("%d", &max);
    while (scanf("%s", string) == 1)    {
        int len = strlen(string);
        if (charCount + stringCount + len <= max)    {
            strcpy(currentLine[stringCount], string);
            stringCount++;
            charCount += len;
        }
        else    {
            printLine();
            strcpy(currentLine[0], string);
            stringCount = 1;
            charCount = len;
        }
    }
    printLine();
    return 0;
}
