#define _CRT_SECURE_NO_WARNINGS 1

/**
* �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
* ��������������
* @param arr int����һά���� �����������
* @param arrLen int arr���鳤��
* @return int����һά����
* @return int* returnSize ������������
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
