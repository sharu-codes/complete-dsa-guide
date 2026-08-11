// number of prime elements in an array

import java.util.Scanner;

public class p008 {

    public static boolean isPrime(int num){
        if(num <= 1)
            return false;

        for(int i=2;i<=Math.sqrt(num);i++){
            if(num % i == 0)
                return false;
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        int count = 0;

        System.out.println("enter elements:");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
            if(isPrime(arr[i]))
                count++;
        }

        System.out.println("number of prime elements = " + count);

        sc.close();
    }
}
