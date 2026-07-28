// transpose of a matrix

import java.util.Scanner;

public class p003 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter rows: ");
        int r = sc.nextInt();
        System.out.print("enter columns: ");
        int c = sc.nextInt();

        int[][] arr = new int[r][c];

        System.out.println("enter elements:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = sc.nextInt();
            }
        }

        System.out.println("transpose matrix:");
        for(int i=0;i<c;i++){
            for(int j=0;j<r;j++){
                System.out.print(arr[j][i] + " ");
            }
            System.out.println();
        }

        sc.close();
    }
}
