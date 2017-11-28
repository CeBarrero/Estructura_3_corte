#include<iostream>
#include <string>
#include <sstream>

using namespace std;

// Pasar de número a String
string NumberToString(int number)
{
ostringstream oOStrStream;
oOStrStream << number;
return oOStrStream.str();
}

int main (int argc, char* argv[])
{
// Se obtiene el tamano de la matriz
int m = 0 ;
cout << "Ingrese el tamaño de la Matriz: ";
cin >> m ;
int matrix [m][m];
int matrix2 [m][m];
	
	// Llena la matriz
	for (int i = 0; i < m ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
		cout << "Ingrese los número: ";
		cin >> matrix[i][j];
		}
	}
	cout <<"\n";
	
	// Imprime la matriz original
	string x;
	for (int i = 0 ; i < m ; i++)
	{
		x = "";
		for (int j = 0 ; j < m ; j++)
		{
			x = x + "[" + NumberToString(matrix[i][j])+ "]";
		}
		cout << x + "\n";	
	}
	
	// Se llena la transpuesta de la matriz
	for (int i = 0 ; i < m ; i++)
	{
		for(int j = 0 ; j < m ; j++)
		{
		matrix2 [j][i]=matrix[j][i]; // Se define la transpuesta
		}
	}
	
	cout << "\n\nEspejo: \n\n";
	
	// Se imprime la ranspuesta de la matriz
	for (int i = 0 ; i < m ; i++)
	{
		x = "";
		for (int j = 0 ; j < m ; j++)
		{
			x = x + "[" + NumberToString(matrix2[j][i])+ "]";
		}
		cout << x + "\n";	
	}
}
