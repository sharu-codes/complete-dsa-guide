// Print numbers from n to 1 (space separated) without the help of loops.

class p001 {
    void printNos(int n) {
        // code here
        if (n == 0) {
            return;
        }
        System.out.print(n+" ");
        printNos(n-1);
    }
}