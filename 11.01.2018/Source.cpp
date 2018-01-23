#include <stdio.h>

#include <iostream>

#include <locale.h>

#include <time.h>

#include <Windows.h>

#include<ctime>
#define sizeArr 20


using namespace std;

unsigned short int nz;





void main()

{

	setlocale(LC_ALL, ".1251");

	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	while (true)

	{

		srand(time(0));

		cout << "Enter number zadanie ili enter 0 chtoby vyiti : ";

		cin >> nz;

		if (nz == 0)

		{

			break;

		}

		else if (nz == 1)

		{
			/*1.	Ввести два массива действительных чисел, состоящих из 9 и 7 элементов. Сформировать третий массив из упорядоченных по возрастанию значений обоих массивов*/
			system("cls");
			int mas1[7], mas2[9], mas3[16];
			cout << "Массив длинною 7 элементов: ";
			for (int i = 0; i < 7; i++)
			{
				mas1[i] = rand() % 20;
				mas3[i] = mas1[i];
			}
			for (int i = 0; i < 7; i++)
			{
				cout << mas1[i] << " ";
			}
			cout << endl;
			cout << "Массив длинною 9 элементов: ";
			for (int i = 0; i < 9; i++)
			{
				mas2[i] = rand() % 20;
				mas3[i + 7] = mas2[i];
			}
			for (int i = 0; i < 9; i++)
			{
				cout << mas2[i] << " ";
			}
			cout << endl;
			cout << "Массив длинною 16 элементов: ";
			for (int i = 0; i < 16; i++)
			{
				cout << mas3[i] << " ";
			}
			cout << endl;
		}
		else if (nz == 2)
		{
			/*2.	В заданном целочисленном массиве R(9) определить индекс наибольшего из нечетных по значению положительных элементов*/
			system("cls");
			const int size = 9;
			int array[size];

			for (int i = 0; i < size; i++)
			{
				array[i] = rand() % 11 - 5;
				cout << array[i] << " ";
			}

			for (int i = 0; i < size; i++) {
				if (array[i] > 0 && array[i] % 2 != 0)
				{
					int max = i;
					for (int j = i + 1; j < size; j++) {
						if (array[j] > 0 && array[j] % 2 != 0 && array[max] < array[j])
						{
							max = j;
						}
					}
					cout << "\nIndex: " << max << endl;
					break;
				}
			}
		}
		else if (nz == 3)
		{
			/*3.	Ввести массив, состоящий из 9 элементов (девять двузначных чисел) целого типа. Получить новый массив, состоящий из сумм цифр элементов исходного массива*/
			system("cls");
			int A[9];
			int res[9];
			int sum;
			int i;
			cout << "Массив 1 " << endl;
			for (i = 0; i < 9; i++)
			{
				sum = 0;
				A[i] = rand() % 20;
				sum += (int)(A[i] / 10);
				sum += A[i] % 10;
				res[i] = sum;
				cout << A[i] << " ";
			}
			cout << endl;
			cout << "Массив 2 " << endl;
			for (i = 0; i < 9; i++)
				cout << res[i] << " ";
			cout << endl;
		}
		else if (nz == 4)
		{
			/*4.	Даны действительные числа c1, c2, …, cn. Найти произведение суммы чисел с четными индексами и суммы чисел с нечетными индексами*/
			/*(((sorry my friends)))*/
		}
		else if (nz == 5)
		{
			system("cls");
			/* Ввести массив, состоящий из 14 элементов действительного типа. Поменять местами первую половину со второй. Определить количество произведенных при этом перестановок.*/
			float mas[14], kol = 0, vrem;
			int i;
		
			for (i = 0; i < 14; i++)
			{
				mas[i] = 0.35f + rand() % 99;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (i = 0; i < 7; i++)
			{
				vrem = mas[i];
				mas[i] = mas[i + 7];
				mas[i + 7] = vrem;
				kol++;
			}
			for (i = 0; i < 14; i++)
			{
				cout << mas[i] << " ";
			}
			cout << endl;
		}
		else if (nz == 6)
		{
			system("cls");
			/* 6.	Определить количество локальных максимумов в заданном числовом массиве. (Локальный максимум в числовом массиве – это последовательность трех рядом стоящих чисел, 
			в которой среднее число больше стоящих слева и справа от него).*/
			int i, x, g = 0;
			int  min = INT_MAX;
			printf("vvedite chislo elementov: ");
			scanf("%d", &x);
			int *rt = new int[x];
			printf("\nvvedite massiv iz %d elementov: ", x);
			for (i = 0; i < x; i++)
			{
				scanf("%d", &rt[i]);
			}
			for (i = 1; i < x - 1; i++)
			{
				if (rt[i] > rt[i + 1] && rt[i] > rt[i - 1])
				{
					if (rt[i] < min)
					{
						min = rt[i];
					}
				}
			}

			printf("\n%d", min);
			delete[] rt;
		}

		else if (nz == 7)
		{
			/*7.	В заданном числовом массиве определить и вывести индексы последовательностей чисел, которые монотонно убывают (каждое следующее число меньше предыдущего).*/
			system("cls");
			int mas[14],i;
			char mi[40] = "  ", prom[3];
			bool es = 0;
			cout << " ";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (i = 0; i < 13; i++)
			{
				if (es == 0 && mas[i + 1] < mas[i])
				{
					es = 1;
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = '-';
					prom[1] = '\0';
					strcat(mi, prom);
				}
				else if (es == 1 && mas[i + 1] < mas[i])
				{

				}
				else if (es == 1 && mas[i + 1] >= mas[i])
				{
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = ',';
					prom[1] = ' ';
					prom[2] = '\0';
					strcat(mi, prom);
					es = 0;
				}
			}
			int count = 0;
			for (i = 0; i < 40; i++)
			{
				if (mi[i] != '\0')count++;
			}

			if (mi[count - 1] == '-')
			{
				mi[count] = '1';
				mi[count + 1] = '3';
			}
			if (mi[count - 2] == ',')mi[count - 2] = ' ';
			cout << mi << endl;
		}
		else if (nz == 8)
		{
			/*8.	Ввести массив, состоящий из 10 элементов (десять двузначных чисел) целого типа. Получить новый массив, состоящий из разностей цифр элементов исходного массива.*/
			system("cls");
			int mas[10], s1, s2,i, mas1[10];
			
		
			for (i = 0; i < 10; i++)
			{
				mas[i] = 10 + rand() % 90;
				cout << mas[i] << " ";
			}

			cout << endl;


			for (i = 0; i < 10; i++)
			{
				s1 = mas[i] / 10;
				s2 = mas[i] % 10;
				mas1[i] = s1 - s2;
				cout << mas1[i] << " ";
			}
			cout << endl;
			cout << endl;
		}
		else if (nz == 9)
		{
			/*9.	Задан целочисленный массив. Определить количество участков массива, на котором элементы монотонно возрастают (каждое следующее число больше предыдущего)*/
			system("cls");
			int mas[14],i;
			char mi[40] = "  ", prom[3];
			bool u = 0;
			cout << " ";
			for (i = 0; i < 14; i++)
			{
				mas[i] = 1 + rand() % 99;
				cout << mas[i] << " ";
			}
			cout << endl;
			for (i = 0; i < 13; i++)
			{
				if (u == 0 && mas[i + 1] > mas[i])
				{
					u = 1;
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = '-';
					prom[1] = '\0';
					strcat(mi, prom);
				}
				else if (u == 1 && mas[i + 1] > mas[i])
				{

				}
				else if (u == 1 && mas[i + 1] <= mas[i])
				{
					itoa(i, prom, 10);
					strcat(mi, prom);
					prom[0] = ',';
					prom[1] = ' ';
					prom[2] = '\0';
					strcat(mi, prom);
					u = 0;
				}
			}
			int count = 0;
			for (i = 0; i < 40; i++)
			{
				if (mi[i] != '\0')count++;
			}

			if (mi[count - 1] == '-')
			{
				mi[count] = '1';
				mi[count + 1] = '3';
			}
			if (mi[count - 2] == ',')mi[count - 2] = ' ';
			cout << mi << endl;
		}
		else if (nz == 10)
		{
			/*10.	Ввести два массива действительных чисел. Определить максимальные элементы в каждом массиве и поменять их местами.*/
			system("cls");
			float mas[10], mas1[10], maks;
			int i;
			short int ind_mas, ind_mas1;

			maks = -10;
			for (i = 0; i < 10; i++)
			{
				mas[i] = -2 + rand() % 99;
				cout << mas[i] << " ";
				if (mas[i] > maks)
				{
					maks = mas[i];
					ind_mas = i;
				}
			}

			maks = -40;
			for (i = 0; i < 10; i++)
			{
				mas1[i] = -2 + rand() % 99;
				cout << mas1[i] << " ";
				if (mas1[i] > maks)
				{
					maks = mas1[i];
					ind_mas1 = i;
				}
			}
			maks = mas[ind_mas];
			mas[ind_mas] = mas1[ind_mas1];
			mas1[ind_mas1] = maks;
			
			for (i = 0; i < 10; i++)
			{
				if (i != ind_mas)
				{	
					cout << mas[i] << " ";
				}
				else
				{	
					cout << mas[i] << " ";
				}
			}
			for (i = 0; i < 10; i++)
			{
				if (i != ind_mas1)
				{

					cout << mas1[i] << " ";
				}
				else
				{
					cout << mas1[i] << " ";
				}
			}
			cout << endl;
		}
	}
}