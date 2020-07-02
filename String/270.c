#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int get_val(void)
{
    int n, c, flag = 0;;
    while (!isdigit(n = getchar()))
           if (n == '-')
               flag = 1;
    n -= '0';
    while (isdigit(c = getchar()))
        n = 10 * n + (c - '0');
    return (flag)? -n: n;
}
int main(void)
{
    char variable[100][8];
    int value[100] = {0}, vcount = 0;
    while (scanf("%s", variable[vcount]) != EOF) {
        if (!strcmp(variable[vcount], "END"))
            break;
        else {
            value[vcount] = get_val();
            vcount++;
        }
    }
    //for (int i = 0; i < vcount; i++)
        //printf("%s %d\n", variable[i], value[i]);
    char statement[1001][50];
    int scount = 0;
    while (fgets(statement[scount], 50, stdin) != NULL) {
        scount++;
    }
    char type[8];
    int flow = 1;
    //for (int i = 1; i < scount; i++)
      //  printf("%s", statement[i]);
    while (1) {
        sscanf(statement[flow], "%s", type);
        //printf("%s\n", type);
        if (!strcmp(type, "STOP")) {
            break;
        }
        else if (!strcmp(type, "GOTO")) {
            char s[8];
            sscanf(statement[flow], "%s%d", s, &flow);
        }
        else if (!strcmp(type, "PRINT")) {
            char temp[8], s[8];
            sscanf(statement[flow], "%s%s", s, temp);
            for (int i = 0; i < vcount; i++) {
                if (!strcmp(temp, variable[i])) {
                    printf("%d\n", value[i]);
                    break;
                }
            }
            flow++;
        }
        else if (!strcmp(type, "IF")) {
            char op1[8], op2[8], opr[3], temp[5], s[8];
            int a, b, c, f1 = 1, f2 = 1;
            sscanf(statement[flow], "%s%s%s%s%s%d", s, op1, opr, op2, temp, &a);
            for (int i = 0; i < vcount && (f1 || f2); i++) {
                if (f1) {
                    if (!strcmp(op1, variable[i])) {
                        b = value[i];
                        f1 = 0;
                    }
                }
                if (f2) {
                    if (!strcmp(op2, variable[i])) {
                        c = value[i];
                        f2 = 0;
                    }
                }
            }
            if (!strcmp(opr, "==")) {
                if (b == c)
                    flow = a;
                else
                    flow++;
            }
            else if (!strcmp(opr, "!=")) {
                if (b != c)
                    flow = a;
                else
                    flow++;
            }
            else if (!strcmp(opr, ">")) {
                if (b > c)
                    flow = a;
                else
                    flow++;
            }
            else if (!strcmp(opr, "<")) {
                if (b < c)
                    flow = a;
                else
                    flow++;
            }
            else if (!strcmp(opr, ">=")) {
                if (b >= c)
                    flow = a;
                else
                    flow++;
            }
            else if (!strcmp(opr, "<=")) {
                if (b <= c)
                    flow = a;
                else
                    flow++;
            }
        }
        else {
            char op1[8], opr[2], op2[8], temp[2], s[8];
            sscanf(statement[flow], "%s%s%s%s%s", s, temp, op1, opr, op2);
            int b, c, f1 = 1, f2 = 1, t;
            for (int i = 0; i < vcount && (f1 || f2); i++) {
                if (f1) {
                    if (!strcmp(op1, variable[i])) {
                        b = value[i];
                        f1 = 0;
                    }
                }
                if (f2) {
                    if (!strcmp(op2, variable[i])) {
                        c = value[i];
                        f2 = 0;
                    }
                }
            }
            if (!strcmp(opr, "+"))
                t = b + c;
            else if (!strcmp(opr, "-"))
                t = b - c;
            else if (!strcmp(opr, "/"))
                t = b / c;
            else if (!strcmp(opr, "*"))
                t = b * c;
            else if (!strcmp(opr, "%"))
                t = b % c;
            for (int i = 0; i < vcount; i++) {
                if (!strcmp(type, variable[i])) {
                    value[i] = t;
                }
            }
            flow++;
        }
    }
    return 0;
}
