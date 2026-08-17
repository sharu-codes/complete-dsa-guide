// Implement the function power(b, e), which calculates b raised to the power of e (i.e. be).

class p002 {
    double power(double b, int e) {
        // code here
        if (b == 0) {
            return 0.0;
        }
        else if (e == 0) {
            return 1.0;
        }
        else {
            return Math.pow(b, e);
        }
        
    }
}