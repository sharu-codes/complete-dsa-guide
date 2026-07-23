// Given an array arr[]. The task is to find the number of odd and even elements in the array.

/*Class solution with countOddEven() as its member function
 * arr : input array
 */
class Solution {
    public static void countOddEven(Integer arr[]) {

        // Your code here
        int countOdd = 0, countEven = 0;
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] % 2 == 0) {
                countEven += 1;
            }
            else {
                countOdd += 1;
            }
        }
        System.out.println(countOdd+" "+countEven);
    }
}