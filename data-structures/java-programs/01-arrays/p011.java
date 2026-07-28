// sum of elements in two arrays in an array

import java.util.Scanner;

public class p011 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter size: ");
        int n = sc.nextInt();

        int[] a = new int[n];
        int[] b = new int[n];
        int[] c = new int[n];

        System.out.println("enter elements of first array:");
        for(int i=0;i<n;i++){
            a[i] = sc.nextInt();
        }

        System.out.println("enter elements of second array:");
        for(int i=0;i<n;i++){
            b[i] = sc.nextInt();
        }

        for(int i=0;i<n;i++){
            c[i] = a[i] + b[i];
        }

        System.out.println("resultant array:");
        for(int i=0;i<n;i++){
            System.out.print(c[i] + " ");
        }

        sc.close();
    }
}
