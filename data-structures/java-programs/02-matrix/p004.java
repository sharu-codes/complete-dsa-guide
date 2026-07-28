// sparse matrix or not

import java.util.Scanner;

public class p004 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter rows: ");
        int r = sc.nextInt();
        System.out.print("enter columns: ");
        int c = sc.nextInt();

        int[][] arr = new int[r][c];
        int zeroCount = 0;
        int nonZeroCount = 0;

        System.out.println("enter elements:");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[i][j] = sc.nextInt();
                if(arr[i][j] == 0)
                    zeroCount++;
                else
                    nonZeroCount++;
            }
        }

        if(zeroCount > nonZeroCount)
            System.out.println("matrix is Sparse");
        else
            System.out.println("matrix is Not Sparse");

        sc.close();
    }
}
