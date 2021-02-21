#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//
//int main()
//{
//    printf("Practice makes perfect!");
//    return 0;
//}
//
//int main()
//{
//    printf("v   v\n");
//    printf(" v v\n");
//    printf("  v\n");
//    return 0;
//}

#define prinf(x) printf("The size of "#x" is %d bytes\n",sizeof(x))
int main()
{
    prinf(short);
    prinf(int);
    prinf(long);
    prinf(long long);

    return 0;
}