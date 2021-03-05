#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//int main()
//{
//	int n = 8;
//	double x = 8.0;
//	printf("%d\n",n);
//	printf("%f\n", n);
////
//	printf("%d\n", x);
//	printf("%f\n", x);
	//float a = 12.5f;
	//float b = 12.5f;

	//printf("%f\t%d\n", a, a);
	//printf("%d\t%f\n\n", a, b);

	//printf("%f\n", b);
	//printf("%d\n", b);
	//printf("%d\n", b);
	//printf("%f\n", b);
//}
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    double a, b;
//    char ch;
//    while (scanf("%lf%c%lf", &a, &ch, &b) != EOF)
//    {
//        switch (ch)
//        {
//        case '+':
//            printf("%.4lf+%.4lf=%.4lf\n", a, b, a + b);
//            break;
//        case '-':
//            printf("%.4lf-%.4lf=%.4lf\n", a, b, a - b);
//            break;
//        case '*':
//            printf("%.4lf*%.4lf=%.4lf\n", a, b, a * b);
//            break;
//        case '/':
//            if (b == 0)printf("Wrong!Division by zero!\n");
//            else printf("%.4lf/%.4lf=%.4lf\n", a, b, a / b);
//            break;
//        default:
//            printf("Invalid operation!\n");
//            break;
//
//        }
//    }
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int ch, i;
//    while (scanf("%d", &ch) != EOF)
//    {
//        for (i = 0; i < ch; i++)
//        {
//            printf("*");
//        }
//        printf("\n");
//    }
//
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int ch, i, j;
//    while (scanf("%d", &ch) != EOF)
//    {
//        for (i = 0; i < ch; i++)
//        {
//            for (j = 0; j < ch; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//
//
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int ch, i, j;
//    while (scanf("%d", &ch) != EOF)
//    {
//        for (i = 0; i < ch; i++)
//        {
//            for (j = 0; j <= i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//
//
//    return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//    int ch, i, j;
//    while (scanf("%d", &ch) != EOF)
//    {
//        for (i = 0; i < ch; i++)
//        {
//            for (j = i; j < ch; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//
//
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int ch, i, j;
//    while (scanf("%d", &ch) != EOF)
//    {
//        for (i = 0; i < ch; i++)
//        {
//            for (j = 0; j < ch - i - 1; j++)
//            {
//                printf("  ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                //if(j == i)
//               // printf("*");
//                //lse 
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//
//
//    return 0;
//}
//
//
//#include<stdio.h>
//int main()
//{
//    int ch, i, j;
//    while (scanf("%d", &ch) != EOF)
//    {
//        for (i = 0; i < ch; i++)
//        {
//            for (j = 0; j < ch - i - 1; j++)
//            {
//                printf(" ");
//            }
//            for (j = 0; j <= i; j++)
//            {
//                //if(j == i)
//               // printf("*");
//                //lse 
//                printf("* ");
//            }
//            printf("\n");
//        }
//
//    }
//
//
//    return 0;
//}


#include<stdio.h>
int main()
{
    int ch, i, j;
    while (scanf("%d", &ch) != EOF)
    {
        for (i = 0; i < ch; i++)
        {

            for (j = 0; j < i; j++)
            {
                printf(" ");
            }
            for (j = 0; j < ch - i; j++)
            {
                //if(j == i)
               // printf("*");
                //lse 
                printf("* ");
            }

            printf("\n");
        }

    }


    return 0;
}

#include<stdio.h>
int main()
{
    int ch, i, j;
    while (scanf("%d", &ch) != EOF)
    {
        for (i = 0; i < ch + 1; i++)
        {


            for (j = 0; j < ch - i; j++)
            {
                printf(" ");
            }
            for (j = 0; j <= i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }
        for (i = 0; i < ch; i++)
        {
            for (j = 0; j < i + 1; j++)
            {
                printf(" ");
            }
            for (j = 0; j < ch - i; j++)
            {
                printf("* ");
            }
            printf("\n");
        }

    }

    return 0;
}


#include<stdio.h>
int main()
{
    int ch, i, j;
    while (scanf("%d", &ch) != EOF)
    {
        for (i = 0; i < ch + 1; i++)
        {

            for (j = 0; j < ch + 1 - i; j++)
            {
                printf("* ");
            }
            for (j = 0; j < i; j++)
            {
                printf(" ");
            }

            printf("\n");
        }
        for (i = 0; i < ch; i++)
        {
            for (j = 0; j < i + 2; j++)
            {
                printf("* ");
            }
            for (j = 0; j < ch - i; j++)
            {
                printf(" ");
            }

            printf("\n");
        }

    }

    return 0;
}


#include<stdio.h>
int main()
{
    int ch, i, j;
    while (scanf("%d", &ch) != EOF)
    {
        for (i = 0; i < ch; i++)
        {

            for (j = 0; j < i; j++)
            {
                printf(" ");
            }

            printf("* ");

            for (j = 0; j < ch - i; j++)
            {
                printf(" ");
            }

            printf("\n");
        }

    }
    return 0;
}


#include <stdio.h>
int main()
{
    double a, b, c, d, e, f;
    scanf("%lf %lf %lf %lf %lf", &a, &b, &c, &d, &e);
    printf("%.2lf", (a + b + c + d + e) / 5);

}