#ifndef _GAME_H
#define _GAME_H
#endif

#ifndef _CPPGAME_H
#include "cppgame.h"
#endif

#include <windows.h>

using namespace std;

bool key_down(char c)
{
    int key_pressed = 0;
    if (GetAsyncKeyState(c))
        key_pressed = 1;
	else
        key_pressed = 0;
	Sleep(100);
    return key_pressed;
}

#include <bits/stdc++.h>

void En_Loding(int dot,int sum,string s)
{
	for (int i = 1;i <= sum;i++)
	{
		cout  << s << " is Loding";
		for (int j = 1;j <= dot;j++)
		{
			cout << ".";
			Sleep(500);
		}
		Sleep(100);
		system("cls");
	}
}

void Cn_Loding(int dot,int sum)
{
	for (int i = 1;i <= sum;i++)
	{
		cout << "玩命加载中";
		for (int j = 1;j <= dot;j++)
		{
			cout << ".";
			Sleep(500);
		}
		Sleep(100);
		system("cls");
	}
}

void num_Loding(string s,int x,int times)
{
	srand(time(NULL));
	int num = 0;
	x %= 100;
	while (num < 100)
	{
		cout << s << "\t";
		num += rand()%x;
		cout << num % 101 << "%";
		Sleep(rand()%times * 100);
		system("cls");
	}
}

void start_main(string s)
{
	cout << "欢迎来到" << s << endl;
	Sleep(2000);
	system("cls");
}

string read_in()
{
	freopen("freopen.txt","r",stdin);
	string k;
	cin >> k;
	return k;
}

void write_out(string s)
{
	freopen("freopen.txt","w",stdout);
	cout << s;
}
