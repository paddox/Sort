// Main.cpp : Defines the entry point for the console application.
//

/**
@mainpage ��������� ���������� ��������� � ��������
� ������ ��������� ����������� ���������� ������� ���� char ����� �� ���� ������������ �������: ��������� ��� ��������
*/
#include "stdafx.h"
#include <iostream>
using namespace std;
void MergeSort(char *A, int first, int last); /// ������� ���������� ���������� ������� �������
void Merge(char *A, int first, int last); /// ������� ���������� ���������� ������� ��������
void puzirek(int n, char *list); 
int _tmain(int argc, _TCHAR* argv[])
{
	int n, j, min, f;
	bool a;
	char *list, temp;
	/**
	 ������������ ������� ������ ����������: ������� � ������� 0 ��� ���������� ������� ������� ��������, ������� 1 ���� ������ ������������� ��������
	*/
	cout <<"Vyberite metod sortirovki (0-puzirek, 1-sliyanie) ->";
	cin >> a;
	if (a == 0)
	{
		/**
		 ��������� ����������� ���������� ���������� ��������
		*/
		cout <<"Vvedite kolichestvo simvolov (puzirek) -> ";
		cin >> n;
		cout << endl;
		list = new char[n];
		/**
		 ����� ������� ������� ����� ������
		*/
		cout <<"Vvedite simvoly (puzirek) -> ";
		for(int i=0; i<n; i++) cin >> list[i];
		MergeSort(list, 0, n-1);
		/**
		 ����� ��������� ������� ��������������� ������
		*/
		for(int i=0; i<n; i++) cout << list[i] <<" ";
		delete []list;
	}
	else
	{
		/**
		 ��������� ����������� ���������� ���������� ��������
		*/
		cout << endl<<"Vvedite kolichestvo simvolov (sliyaniye) -> ";
		cin >> n;
		cout << endl;
		list = new char[n];
		/**
		 ����� ������� ������� ����� ������
		*/
		cout <<"Vvedite simvoly (sliyaniye) -> ";
		for(int i=0; i<n; i++) cin >> list[i];
		puzirek(n, list);
		/**
		 ����� ��������� ������� ��������������� ������
		*/
		for(int i=0; i<n; i++) cout << list[i] <<" ";
		delete []list;
	};
	return 0;
}

