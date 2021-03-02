#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>

//int main()
//{
//    int ret = 0;
//    int i, j;
//    scanf("%c", &ret);
//    for (i = 1; i <= 5; i++)
//    {
//        for (j = 1; j <= 5 - i; j++)
//        {
//            printf(" ");
//        }
//        for (j = 1; j <= i; j++)
//        {
//            printf("%c ", ret);
//        }
//        printf("\n");
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c", 73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    char birthday[10];
//    int i = 0;
//    scanf("%s", &birthday);
//    printf("year=");
//    for (; i < 4; i++)printf("%c", birthday[i]);
//    printf("\n");
//
//    printf("month=");
//    for (; i < 6; i++)printf("%c", birthday[i]);
//    printf("\n");
//
//    printf("date=");
//    for (; i < 8; i++)printf("%c", birthday[i]);
//    printf("\n");
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        printf("%d\n", 1 << n);
//    }
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int score1 = 0;
//    int score2 = 0;
//    int score3 = 0;
//    scanf("%d %d %d", &score1, &score2, &score3);
//    printf("score1=%d,score2=%d,score3=%d", score1, score2, score3);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int i = 10000;
//    while (i <= 99999)
//    {
//        if (((i / 10000) * (i % 10000) + (i / 1000) * (i % 1000) + (i / 100) * (i % 100) + (i / 10) * (i % 10)) == i)
//            printf("%d ", i);
//        i++;
//    }
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//    int a = 0;
//    int b = 0;
//    scanf("%d %d", &a, &b);
//    printf("%d", (a + b) % 100);
//    return 0;
//}