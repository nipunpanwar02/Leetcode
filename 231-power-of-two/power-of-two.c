bool isPowerOfTwo(int n) {
    if (n <= 0) return false; // Prevents zero and negative numbers
    return (n & (n - 1)) == 0;
}
