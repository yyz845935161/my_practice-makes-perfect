#define _CRT_SECURE_NO_WARNINGS 1

#include<iostream>
#include <fstream>
#include<iomanip>
using namespace std;
int main()
{
	int n = 0;
	cin >> n;
		int m = 0;
		cin >> m;
		int i = 0;
		double arr[19] = { 0 };
		for (i = 0; i < m; i++)
		{
			cin >> arr[i];
		}
		double sum1 = 0.0;
		double sum2 = 0.0;
		for (i = 0; i < m; i++)
		{
			if (arr[i] >= 0)
			{
				sum1 = sum1 + arr[i];
			}
			else
			{
				sum2 = sum2 + arr[i];
			}
		}
		double max1 = 0.0;
		double max2 = 0.0;
		for (i = 0; i < m; i++)
		{
			if (arr[i] >= 0)
			{
				if (arr[i] > max1)
				{
					max1 = arr[i];
				}
			}
			else
			{
				if (arr[i] < max2)
				{
					max2 = arr[i];
				}
			}
		}
		cout << setprecision(2) << fixed << sum1 << " " << setprecision(2) << fixed <<
			sum2 << " " << setprecision(2) << fixed << max2 << " " << setprecision(2) << fixed << max1 << endl;
	}