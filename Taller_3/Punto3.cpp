#include<iostream>
#include <string>
#include <stdlib.h>
#include <sstream>

using namespace std;

//Pasar un número a String
string NumberToString(int number)
{
 ostringstream oOStrStream;
 oOStrStream << number;
 return oOStrStream.str();
}

int main(int argc, char* argv[])
{
	int m = 0 ;
	int par = 0 ;
	int impar = 0;
	int pos = 0;
	int neg = 0 ;

	string cpar, cimpar, cpos, cneg, x;
	cout << "Ingrese el tamaon de la Matriz: ";
	cin >> m ;
	int matrix [m][m];
	cout <<"los numeros aleatorios son: \n\n";

	for (int i = 0 ; i < m ; i++)
	{
		for (int j = 0 ; j < m ; j++)
		{
			matrix[i][j] = rand()% 200 - 100;
		}
	}
	
	for (int i = 0; i < m ; i++)
	{
		x = "";
		for (int j = 0 ; j < m ; j++)
		{
			x = x + "[" + NumberToString(matrix[i][j])+ "]";
		}
		cout << x + "\n";	
	}
	
	for(int i = 0; i < m; i++)
	{
		for(int j = 0; j < m ; j++)
		{
			if(matrix[i][j]%2 == 0)
			{
				par++;
				cpar = cpar + NumberToString(matrix[i][j]) + ",";
			}
			else if (matrix[i][j] % 2 != 0)
			{
				impar ++ ;
				cimpar = cimpar + NumberToString(matrix[i][j]) + ",";	
			}
			if(matrix[i][j] < 0 )
			{
				neg ++;
				cneg = cneg + NumberToString(matrix[i][j]) + ",";
			}
			else if(matrix[i][j] >= 0)
			{
				pos++;
				cpos = cpos + NumberToString(matrix[i][j]) + ",";			
			}
		}
	}
	cout <<"\n\nLa cantidad de numeros pares encontrados son: " + NumberToString(par )+ "\n\n";
	cout <<"La cantidad de numeros impares encontrados son: " + NumberToString(impar) + "\n\n";
	cout <<"La cantidad de numeros negativos encontrados son: " + NumberToString(neg) + "\n\n";
	cout <<"La cantidad de numeros positivos encontrados son: " + NumberToString(pos) + "\n\n";
	cout <<"Los numeros pares encontrados son: "+ cpar + "\n\n";
	cout <<"Los numeros impares encontrados son:" + cimpar + "\n\n";
	cout <<"Los numeros negativos encontrados son:" + cneg + "\n\n";
	cout <<"Los numeros positivos encontrados son:" + cpos + "\n\n";
}
