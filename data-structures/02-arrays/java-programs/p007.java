// sum of odd numbers in an array

import java.util.Scanner;

public class p007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter rows: ");
        int r = sc.nextInt();
        System.out.print("enter columns: ");
        int c = sc.nextInt();

        int[][] arr = new int[r][c];
        int sum = 0;

        System.out.println("enter elements:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = sc.nextInt();
                if(arr[i][j] % 2 != 0)
                    sum += arr[i][j];
            }
        }

        System.out.println("sum of odd numbers = " + sum);

        sc.close();
    }
}
