package FED_Taller3;

import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.IOException;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;

/**
 * date 25-11-2017
 * @author Cesar Barrero
 *
 */

public class Punto5 
{
	public static void loadMatrix(int [][] matrix, int minRandom, int maxRandom) 
	{
		minRandom = 1;
		maxRandom = 9;
		for (int i = 0; i < matrix.length; i++) 
		{
			for (int j = 0; j < matrix[i].length; j++) 
			{
				matrix[i][j] = minRandom - ((int) Math.round((Math.random()) * (minRandom - maxRandom)));
	        }
	    }
	}
		
	public static void printMatrix(int [][] matrix)
	{
		for (int i = 0; i < matrix.length; i++) 
		{
			for (int j = 0; j < matrix[i].length; j++) 
			{
				System.out.print("[" + matrix[i][j] + "]");
	        }
	        System.out.println("");
	    }
	}
		
	public static void travelMatrix(int [][] matrix, int number1) throws IOException
	{
		if(number1 % 2 == 0)
		{
			for (int i = 0; i < number1; i++) 
			{
				for (int j = 0; j < number1; j++) 
				{
					if((i + j <= (number1 / 2)-1) || (i + (number1 / 2) <= j) || (j + (number1 / 2) <= i) || (i + j >= (number1 / 2) + number1-1))
					{
						System.out.print("[" + matrix[i][j] + "]");
					}
					else
					{
						System.out.print("   ");
					}
				}
				System.out.println(" ");
			}
		}
		else
		{
			for (int i = 0; i < number1; i++) 
			{
				for (int j = 0; j < number1; j++) 
				{
					if((i + j <= (number1 / 2)) || (i + (number1 / 2) <= j) || (j + (number1 / 2) <= i) || (i + j >= (number1 / 2) + number1-1))
					{
						System.out.print("[" + matrix[i][j] + "]");
					}
					else
					{
						System.out.println("   ");
					}
				}
				System.out.println(" ");
			}
		}
	}

	public static void main(String[] args) throws IOException
	{
			
		BufferedReader br = new BufferedReader (new InputStreamReader(System.in));
		BufferedWriter bw = new BufferedWriter (new OutputStreamWriter(System.out));
			
		bw.write("Escriba el tamaño de la Matriz \n");
		bw.flush();
			
		int m = Integer.parseInt(br.readLine());
			
		int [][] matrix = new int [m][m];
			
		loadMatrix(matrix, m, m);
		printMatrix(matrix);
			
		System.out.println("");
			
		travelMatrix(matrix , m);
			
	}
}