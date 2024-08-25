/*
* Created by Nathan Cerne for IT179
*
* Java program that creates, fills, and prints a 2 dimentional array
* The array is displayed with all its values as well as the sum of each column, row, and all elements
*/
public class TwoDArray
{
    public static void main(String[] args)
    {
        final int size = 5;
        int x;
        int rowSum;
        int columnSum;
        int[][] M = new int[size][size];// creation of the 2D array

        // This nested for loop assigns an int value to each element of the array
        for (int i = 0; i <= 4; i++)
        {
            for (int j = 0; j <= 4; j++)
            {
                x = (int) ((Math.random() * (10 - 1)) + 1);
                M[i][j] = x;
            }
        }

        // This nested for loop prints the array and the sums of all the rows
        for (int i = 0; i <= 4; i++)
        {
            rowSum = 0;
            System.out.println();
            for (int j = 0; j <= 4; j++)
            {
                System.out.print(M[i][j] + "\t");
                rowSum += M[i][j];
            }
            System.out.print("|  " + rowSum);
        }
        System.out.println("\n----------------------------------------------");
        rowSum = 0;

        // this nested for loop finds the sum of the colomns and all elements
        for (int r = 0; r <= 4; r++)
        {
            columnSum = 0;
            for (int c = 0; c <= 4; c++)
            {
                columnSum += M[c][r];
            }
            System.out.print(columnSum + "\t");
            rowSum += columnSum;
        }
        System.out.print("|  " + rowSum);
    }
}
