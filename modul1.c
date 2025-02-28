#include <stdio.h>
#include <string.h>
#include <math.h>

#define PI 3.14159265358979323846

int main(int argc, char *argv[])
{
    if (argc != 3 && argc != 4)
    {
        printf("Sintaks salah.\nContoh sintaks yang benar:\n");
        printf("Operasi trigonometri: 'hitung sin 30'\n");
        printf("Operasi aritmetika  : 'hitung 5 + 3'\n");
        return 1;
    }

    // Penanganan operasi trigonometri (3 argumen)
    if (argc == 3)
    {
        char *operator= argv[1];
        int a = atoi(argv[2]);
        double radian = a * (PI / 180.0);

        if (strcmp(operator, "sin") == 0)
        {
            printf("sin(%d) = %.1f\n", a, sin(radian));
        }
        else if (strcmp(operator, "cos") == 0)
        {
            printf("cos(%d) = %.1f\n", a, cos(radian));
        }
        else if (strcmp(operator, "tan") == 0)
        {
            // Tangen tak terdefinisi jika cos(a) = 0
            if (cos(radian) == 0)
            {
                printf("tan(%d) = Tak terdefinisi\n", a);
            }
            else
            {
                printf("tan(%d) = %.1f\n", a, tan(radian));
            }
        }
        else if (strcmp(operator, "log") == 0)
        {
            double result = log10(a);
            printf("log(%d) = %.1f\n", a, result);
        }
        else if (strcmp(operator, "ln") == 0)
        {
            double result = log(a);
            printf("ln(%d) = %f\n", a, result);
        }
        else
        {
            printf("Operator tidak dikenal.\n");
            printf("Operator trigonometri: sin, cos, tan\n");
        }
    }
    // Penanganan operasi aritmetika (4 argumen)
    else if (argc == 4)
    {
        int a = atoi(argv[1]);
        char *operator= argv[2];
        int b = atoi(argv[3]);

        if (strcmp(operator, "+") == 0)
        {
            printf("%d + %d = %d\n", a, b, a + b);
        }
        else if (strcmp(operator, "-") == 0)
        {
            printf("%d - %d = %d\n", a, b, a - b);
        }
        else if (strcmp(operator, "x") == 0)
        {
            printf("%d x %d = %d\n", a, b, a * b);
        }
        else if (strcmp(operator, "/") == 0)
        {
            if (b == 0)
            {
                printf("Pembagian oleh nol tidak valid.\n");
            }
            else
            {
                printf("%d / %d = %.2f\n", a, b, (double)a / b);
            }
        }
        else if (strcmp(operator, "pangkat") == 0)
        {
            printf("%d ^ %d = %.2f\n", a, b, pow(a, b));
        }
        else
        {
            printf("Operator tidak dikenal.\n");
            printf("Operator aritmetika: +, -, x, /, pangkat\n");
        }
    }

    return 0;
}
