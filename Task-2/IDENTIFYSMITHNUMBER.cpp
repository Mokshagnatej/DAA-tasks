int sum_of_digits(int num) {
 
// Function to calculate the sum of the digits of a number
int sum = 0;
while (num > 0) {
   sum += num % 10;
   num /= 10;
}
return sum;
}
int sum_of_prime_factors_digits(int num) {
 
// Function to calculate the sum of the digits of prime factors
int sum = 0;
int factor = 2;
while (num > 1) {
   // Calculate prime factors and sum their digits
   while (num % factor == 0) {
       sum += sum_of_digits(factor);
       num /= factor;
   }
   factor++;
   if (factor * factor > num) {
       break;
   }
}
// Add the digits of any remaining prime factor greater than 1
if (num > 1) {
   sum += sum_of_digits(num);
}
return sum;
}
 
int solve(int n) {
   if (n < 4) {
   return 0;
}
 
// Calculate the sum of the digits of the integer
int sum_num_digits = sum_of_digits(n);
 
// Calculate the sum of the digits of prime factors
int sum_factors_digits = sum_of_prime_factors_digits(n);
 
// Return 1 if the sums are equal, otherwise return 0
if (sum_num_digits == sum_factors_digits) {
   return 1; // n is a Smith number
} else {
   return 0; // n is not a Smith number
}
 
}
 