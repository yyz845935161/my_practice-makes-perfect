#define _CRT_SECURE_NO_WARNINGS 1

/**
* 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
* 将给定数组排序
* @param arr int整型一维数组 待排序的数组
* @param arrLen int arr数组长度
* @return int整型一维数组
* @return int* returnSize 返回数组行数
*/
int* MySort(int* arr, int arrLen, int* returnSize) {
    // write code here
    int i = 0;
    int j = 0;
    int right = 1;
    int left = 0;
    int temp = 0;
    for (; i < arrLen - 1; i++)
    {

        for (j = 0; j < arrLen - i - 1; j++)
        {
            if (arr[left] > arr[right])
            {
                temp = arr[left];
                arr[left] = arr[right];
                arr[right] = temp;

            }
            right++;
            left++;

        }
        left = 0;
        right = 1;
    }

    return arr;
}
