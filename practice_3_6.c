#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct student 
{
	char name[20];
	int age;
	double grade;
}student;

void stuPrint(student a[], int length)
{
	for (int i = 0; i < length; i++)
	{
		printf("姓名%s\t", a[i].name);
		printf("成绩%d\t", a[i].grade);
		printf("年龄%d\n", a[i].age);

	}
}

//int main()
//{
//	student stu[15];
//	int length;
//	char str[6];
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 15; i++)
//	{
//		char temp[20] = "a";
//		for (int j = 0; j < 6; j++)
//		{
//			str[j] = (char)rand() % 10;
//	
//		}
//		strcat(temp, str);
//
//		stu[i].age =(int)( rand() % 100 + 1);
//		strcpy(stu[i].name, temp);
//		stu[i].grade = (rand() % 60 + 40);
//	}
//	
//	length = sizeof(stu) / sizeof(stu[0]);
//
//	stuPrint(stu, length);
//
//	
//	return 0;
//}

//int main()
//{
//srand((unsigned int)time(NULL));
//int age;
//student A;
//A.age = rand() % 10;
//age = rand() % 100;
//printf("%d\t%d", age,A.age);
//return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        switch (a)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        default:
//            break;
//
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, i, j;
//
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        {
//            for (j = 1; j < i + 2; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, i, tempMax = 0, tempMin = 0;
//    double sum = 0;
//    int arr[7];
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d ", &arr[i]);
//        printf("输入了第%d次", i+1);
//    }
//    tempMax = arr[0];
//    tempMin = arr[0];
//
//   for (i = 0; i < 7; i++)
//    {
//
//        if (tempMax < arr[i])
//            tempMax = arr[i];
//        if (tempMin > arr[i])
//            tempMin = arr[i];
//        sum += arr[i];
//    }
//
//    printf("%.2lf", (sum - tempMax - tempMin) / 5);
//
//
//
//
//
//
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
#include <time.h>

typedef struct student
{
    char name[20];
    int age;
    double grade;
}student;

void stuPrint(student a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("姓名%s\t", a[i].name);
        printf("成绩%d\t", a[i].grade);
        printf("年龄%d\n", a[i].age);

    }
}

//int main()
//{
//	student stu[15];
//	int length;
//	char str[6];
//	srand((unsigned int)time(NULL));
//	for (int i = 0; i < 15; i++)
//	{
//		char temp[20] = "a";
//		for (int j = 0; j < 6; j++)
//		{
//			str[j] = (char)rand() % 10;
//	
//		}
//		strcat(temp, str);
//
//		stu[i].age =(int)( rand() % 100 + 1);
//		strcpy(stu[i].name, temp);
//		stu[i].grade = (rand() % 60 + 40);
//	}
//	
//	length = sizeof(stu) / sizeof(stu[0]);
//
//	stuPrint(stu, length);
//
//	
//	return 0;
//}

//int main()
//{
//srand((unsigned int)time(NULL));
//int age;
//student A;
//A.age = rand() % 10;
//age = rand() % 100;
//printf("%d\t%d", age,A.age);
//return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//    int a;
//    while (scanf("%d", &a) != EOF)
//    {
//        switch (a)
//        {
//        case 200:
//            printf("OK\n");
//            break;
//        case 202:
//            printf("Accepted\n");
//            break;
//        case 400:
//            printf("Bad Request\n");
//            break;
//        case 403:
//            printf("Forbidden\n");
//            break;
//        case 404:
//            printf("Not Found\n");
//            break;
//        case 500:
//            printf("Internal Server Error\n");
//            break;
//        case 502:
//            printf("Bad Gateway\n");
//            break;
//        default:
//            break;
//
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, i, j;
//
//    while (scanf("%d", &a) != EOF)
//    {
//        for (i = 0; i < a; i++)
//        {
//            for (j = 1; j < i + 2; j++)
//            {
//                printf("%d ", j);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//#include<stdio.h>
//int main()
//{
//    int a, i, tempMax = 0, tempMin = 0;
//    double sum = 0;
//    int arr[7];
//    for (i = 0; i < 7; i++)
//    {
//        scanf("%d ", &arr[i]);
//        printf("输入了第%d次", i+1);
//    }
//    tempMax = arr[0];
//    tempMin = arr[0];
//
//   for (i = 0; i < 7; i++)
//    {
//
//        if (tempMax < arr[i])
//            tempMax = arr[i];
//        if (tempMin > arr[i])
//            tempMin = arr[i];
//        sum += arr[i];
//    }
//
//    printf("%.2lf", (sum - tempMax - tempMin) / 5);
//
//
//
//
//
//
//
//    return 0;
//}

#include<stdio.h>
int main()
{

    int n, i;
    int j, temp;
    int arr[100];
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &j);

    for (i = 0; i < n; i++)
    {
        if (j < arr[i])
            break;
        if (j > arr[i])
            continue;
    }

    temp = i;
    for (i = n; i > temp; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[temp] = j;

    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}