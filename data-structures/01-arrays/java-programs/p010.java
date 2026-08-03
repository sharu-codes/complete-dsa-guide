// merge two arrays

import java.util.Scanner;

public class p010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter size of first array: ");
        int n1 = sc.nextInt();
        float[] a = new float[n1];

        System.out.println("enter elements of first array:");
        for(int i=0;i<n1;i++){
            a[i] = sc.nextFloat();
        }

        System.out.print("enter size of second array: ");
        int n2 = sc.nextInt();
        float[] b = new float[n2];

        System.out.println("enter elements of second array:");
        for(int i=0;i<n2;i++){
            b[i] = sc.nextFloat();
        }

        float[] c = new float[n1+n2];

        for(int i=0;i<n1;i++){
            c[i] = a[i];
        }

        for(int i=0;i<n2;i++){
            c[n1+i] = b[i];
        }

        System.out.println("merged array:");
        for(int i=0;i<c.length;i++){
            System.out.print(c[i] + " ");
        }

        sc.close();
    }
}
