// given two arrays a[] and b[], your task is to determine whether b[] is a subset of a[].

class Solution {
    public boolean isSubset(int a[], int b[]) {
        // Your code here
        boolean flag = false;
        for (int i = 0; i < b.length; i++) {
            for (int j = 0; j < a.length; j++) {
                if (b[i] == a[j]) {
                    flag = true;
                    break;
                }
            }
        }
        return flag;
    }
}