class ReturnValue {
    int PrimeOrNot(int n) {
        if (n <= 1) {
            return 0;
        }
        for (int i = 2; i <= Math.sqrt(n); i++) {
            if (n % i == 0) {
                return 0;
            }
        }
        return n;
    }
}

class PrimeSum {
    public static void main(String[] args) {
        ReturnValue obj = new ReturnValue();
        int sum = 0;
        for (int i = 1; i <= 100; i++) {
            sum += obj.PrimeOrNot(i);
        }
        System.out.println("Sum of prime numbers from 1 to 100: " + sum);
    }
}

