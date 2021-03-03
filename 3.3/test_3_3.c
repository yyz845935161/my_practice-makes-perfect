//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include <stdio.h>
//
////int main()
////{
////    float a = 0;
////    scanf("%f", &a);
////    printf("%d", ((int)a) % 10);
////    return 0;
////}
////
////#include <stdio.h>
////
////int main()
////{
////    int age;
////    scanf("%d", &age);
////    long long secend = age * 3.156e7;
////    printf("%lld", secend);
////    return 0;
////}
////
////#include <stdio.h>
////
////int main()
////{
////    long long sec;
////    scanf("%d", &sec);
////    printf("%d ", sec / 3600);
////    printf("%d ", sec % 3600 / 60);
////    printf("%d", sec % 3600 % 60);
////
////    return 0;
////}
////
////#include <stdio.h>
////
////int main()
////{
////    float a, b, c;
////    scanf("%f %f %f", &a, &b, &c);
////    printf("%.2f %.2f", a + b + c, (a + b + c) / 3);
////
////    return 0;
////}
//
////#include <stdio.h>
//
//int main()
//{
//    char a;
//    int i = 0;
//    while (scanf("%c", &a) != EOF)
//    {
//        printf("%c\n", (a + 32));
//        //getchar();
//        i++;
//    }
//    printf("%d", i);
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int n, h, m;
//    scanf("%d %d %d", &n, &h, &m);
//    if (m % h == 0)
//        printf("%d", (n - (m / h)));
//    else
//        printf("%d", (n - (m / h) - 1));
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//
//    printf("I lost my cellphone!");
//
//}
//
//#include <stdio.h>
//
//int main()
//{
//
//    printf("Name    Age    Gender\n");
//    printf("---------------------\n");
//    printf("Jack    18     man");
//
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &a);
//        sum += a;
//    }
//    printf("%.1f", sum / 5.0);
//
//    return 0;
//}
//
//#include <stdio.h>
//
//int main()
//{
//    int a;
//    int b;
//    scanf("0x%x 0%o", &a, &b);
//    printf("%d", a + b);
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    double n, m;
//    scanf("%lf%lf", &n, &m);
//    double b;
//    b = n / (m * m);
//    if (18.5 <= b && b <= 23.9) printf("Normal");
//    else printf("Abnormal");
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    float pri;
//    int mon, day, iscut;
//    scanf("%f %d %d %d", &pri, &mon, &day, &iscut);
//    if (mon == 11 && day == 11)
//    {
//        if (iscut && ((pri * 0.7) >= 50)) printf("%.2f", pri * 0.7 - 50);
//        else if (iscut == 0) printf("%.2f", pri * 0.7);
//        else printf("0.00");
//    }
//    else if (mon == 12 && day == 12)
//    {
//        if (iscut && ((pri * 0.8) >= 50)) printf("%.2f", pri * 0.8 - 50);
//        else if (iscut == 0) printf("%.2f", pri * 0.8);
//        else printf("0.00");
//    }
//    else printf("%.2f", pri);
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int n;
//    int arr[40] = { 0 };
//    scanf("%d", &n);
//    for (int i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    for (int i = 0; i < n - 1; i++)
//    {
//        for (int j = 0; j < n - i - 1; j++)
//        {
//            if (arr[j] < arr[j + 1])
//            {
//                int temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//
//    for (int i = 0; i < 5; i++) printf("%d ", arr[i]);
//
//
//    return 0;
//}

#include <stdio.h>

int main()
{
    char arr[100] = { 0 };
    int A = 0, B = 0;
    int i = 0;
    gets(arr);
    while (arr[i] != '0')
    {
        if (arr[i] == 'A') A++;
        if (arr[i] == 'B') B++;
        i++;
    }
    if (A > B) printf("A");
    else if (A == B) printf("E");
    else printf("B");
    return 0;
}