#include<iostream>
using namespace std;

void input(int** arr, int &m, int &n)
{
	cout << "enter elements in your array" << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> arr[i][j];
		}
		cout << endl;
	}
}

void display(int** arr, int& m, int& n)
{
	cout << "elements in your array are: " << endl;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout<< arr[i][j]<<" ";
		}
		cout << endl;
	}
}

void sum(int** arr, int &m, int &n)
{
	int temp=0;
	cout << "Sum of your array is: ";
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			temp+=arr[i][j];
		}
	}
	cout << temp<<endl;
}

void row_sum(int** arr, int& m, int& n)
{
	//int row = 0;
	//cout << "Sum of your rows of array are: " << endl;
	for (int i = 0; i < m; i++)
	{
		int row = 0;
		for (int j = 0; j < n; j++)
		{
			row += arr[i][j];
		}
		cout << "Sum of your row " << (i + 1) << " : " << row << endl;
	}
	
}

void column_sum(int** arr, int& m, int& n)
{
	for (int j = 0; j < n; j++)
	{
		int col = 0;
		for (int i = 0; i < n; i++)
		{
			col += arr[i][j];
		}
		cout << "Sum of your column " << (j + 1) << " : " << col << endl;
	}
}

void transpose(int** arr, int& m, int& n)
{
	cout << "transpose of matrix is: " << endl;
	for (int j = 0; j < n; j++)
	{
		for (int i = 0; i < n; i++)
		{
			cout<< arr[i][j]<<" ";
		}
		cout << endl;
	}
}

int main()
{
	int x;
	//cout<<"Following are the operations that you can perform "
	int m, n;

	cout << "enter rows of your 2d array" << endl;
	cin >> m;
	cout << "enter columns of your 2d array" << endl;
	cin >> n;
	//dynamic 2d array declaration
	int** arr = new int* [m];
	for (int i = 0; i < m; i++)
	{
		arr[i] = new int[n];
	}

		cout << "Menu" << endl;
		

		do 
		{
			cout << "1. Input matrix elements" << endl;
			cout << "2. Display matrix elements" << endl;
			cout << "3. Sum of all elements" << endl;
			cout << "4. Display row-wise sum" << endl;
			cout << "5. Display column-wise sum" << endl;
			cout << "6. Transpose of the matrix" << endl;
			cout << "7. Exit" << endl;
			cout << "Enter your choice: ";
			cin >> x;

			switch (x) {
			case 1:
				input(arr, m, n);
				break;
			case 2:
				display(arr, m, n);
				break;
			case 3:
				 sum(arr, m, n);
				break;
			case 4:
				cout << "Sum of each rows are:" << endl;
				row_sum(arr, m, n);
				break;
			case 5:
				cout << "Sum of each columns are:" << endl;
				column_sum(arr, m, n);
				break;
			case 6:
				transpose(arr, m, n);
				break;
			case 7:
				cout << "THE END!!!!!!!!!!!!." << endl;
				break;
			default:
				cout << "Invalid choice. Please enter a valid option." << endl;
			}
		} while (x!= 7);


		for (int i = 0; i < m; i++) 
		{
			delete[] arr[i];
		}
		delete[] arr;

		

		/*
	input(arr, m, n);
	display(arr, m, n);
	sum(arr, m, n);
	row_sum(arr, m, n);
	column_sum(arr, m, n);
	transpose(arr, m, n);
	*/

		return 0;
}