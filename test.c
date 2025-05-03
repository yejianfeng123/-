#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    float f, c = 0.0;
    scanf("%f", &f);
    c = (5.0 / 9) * (f - 32);
    printf("%.3f", c);
    return 0;
}
#include <stdio.h>

int main()
{
    float pi = 3.14;
    int r;
    scanf("%d", &r);
    printf("%.2f", pi * r * r);
    return 0;
}

int main()
{
    float r1 = 0.0, r2 = 0.0;
    scanf("%f %f", &r1, &r2);
    printf("%.1f", (r1 * r2) / (r1 + r2));
    return 0;
}
int main()
{
    int h, r;
    float pi = 3.14;
    scanf("%d %d", &h, &r);
    float v = pi * h * r * r;
    int  c = 10000;
    int d = 0;
    while (c > 0)
    {
        c -= v;
        d++;
    }
    printf("%d", d);
    return 0;
}
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", 2 * b - a);
    return 0;
}
int main()
{
    int r = 0;
    float pi = 3.14;
    scanf("%d", &r);
    printf("%.2f", (4.0 / 3) * pi * r * r * r);//4/3必须有一个写成0.0的形式因为结果是浮点数
    return 0;
}