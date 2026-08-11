// sum of diagonal elements in a square matrix

import java.util.Scanner;

public class p002 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter size of square matrix: ");
        int n = sc.nextInt();

        int[][] arr = new int[n][n];
        int sum = 0;

        System.out.println("enter elements:");
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                arr[i][j] = sc.nextInt();
                if(i == j)
                    sum += arr[i][j];
            }
        }

        System.out.println("sum of diagonal elements = " + sum);
        sc.close();
    }
}