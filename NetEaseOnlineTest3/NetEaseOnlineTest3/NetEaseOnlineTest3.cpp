// NetEaseOnlineTest3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <stack>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	string line;
	while (cin >> line)
	{
		int times = 0;
		int n = line.length();
		char temp;
		for (int j = n - 1; j >= 1; j--)
		{
			if (line[j] != line[j - 1])
			{
				temp = line[j];
				line[j] = line[j - 1];
				line[j - 1] = temp;
				times++;
			}
		}
		cout << times << endl;
	}

	

	system("pause");
	return 0;
}