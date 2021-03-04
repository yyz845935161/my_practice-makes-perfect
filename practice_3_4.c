#define _CRT_SECURE_NO_WARNINGS 1

//#include <stdio.h>
//int main()
//{
//    int iq;
//    scanf("%d", &iq);
//    if (iq >= 140) printf("Genius");
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int iq;
//    scanf("%d", &iq);
//    if (iq >= 90) printf("Perfect");
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int grade;
//    while ((scanf("%d", &grade) != EOF)) {
//        if (grade >= 60) printf("Pass\n");
//        else printf("Fail");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//int main()
//{
//    int n;
//    while ((scanf("%d", &n) != EOF)) {
//        if (n % 2 == 0) printf("Even\n");
//        else printf("Odd\n");
//    }
//    return 0;
//}

#include <stdio.h>
int main()
{
    int n, a, b, c;
    while (scanf("%d %d %d", &a, &b, &c) != EOF) {
        n = (a > b ? a : b);
        printf("%d\n", ((n > c) ? n : c));
    }
    return 0;
}

#include <stdio.h>
int main()
{
    char c;
    while (scanf("%c", &c) != EOF)
    {
        if ((c == 'A') || (c == 'E') || (c == 'I') || (c == 'O') || (c == 'U') ||
            (c == 'a') || (c == 'e') || (c == 'i') || (c == 'o') || (c == 'u'))
        {
            printf("Vowel\n");
        }
        else printf("Consonant\n");
        getchar();
    }
    return 0;
}