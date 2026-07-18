// Given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

class Solution {
    public boolean isSubset(int a[], int b[]) {
        // Your code here
        boolean[] dups = new boolean[a.length];
        for (int i = 0; i < b.length; i++) {
            boolean flag = false;
            for (int j = 0; j < a.length; j++) {
                if (!dups[j] && b[i] == a[j]) {
                    dups[j] = true;
                    flag = true;
                    break;
                }
            }
            if (!flag) {
                return false;
            }
        }
        return true;
    }
}
