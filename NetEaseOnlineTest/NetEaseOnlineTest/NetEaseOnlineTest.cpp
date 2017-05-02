// NetEaseOnlineTest.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	long long n = 0, k = 0;
	cin >> n >> k;
	vector<int> link;
	int element;
	int first;
	for (int i = 0; i < n; i++)
	{
		cin >> element;
		link.push_back(element);
	}
	for (int i = 0; i < k; i++)
	{
		first = link[0];
		for (int j = 0; j < n-1; j++)
		{			
			link[j] += link[j + 1];
			if (link[j] >= 100)
			{
				link[j] %= 100;
			}
		}
		link[n - 1] += first;
		if (link[n - 1]>=100)
		{
			link[n - 1] %= 100;
		}
	}

	for (int i = 0; i < n-1; i++)
	{
		cout << link[i] << " ";
	}
	cout << link[n - 1] << endl;

	system("pause");
	return 0;
}

