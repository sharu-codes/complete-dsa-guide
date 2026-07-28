// second highest element in an array

import java.util.Scanner;

public class p009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("enter size: ");
        int n = sc.nextInt();

        int[] arr = new int[n];

        System.out.println("enter elements:");
        for(int i=0;i<n;i++){
            arr[i] = sc.nextInt();
        }

        int highest = 0;
        int second = 0;

        for(int i=0;i<n;i++){
            if(arr[i] > highest){
                second = highest;
                highest = arr[i];
            }
            else if(arr[i] > second && arr[i] != highest){
                second = arr[i];
            }
        }

        System.out.println("second highest element = " + second);

        sc.close();
    }
}
