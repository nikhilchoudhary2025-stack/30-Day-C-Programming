# 30-Day C Programming Journey

> AKTU C Programming Practice — 120 programs across 30 days, built from scratch.
> Written in simple human language so anyone can understand what each program does and how it works.

---

## About This Repo

This repo is a complete 30-day challenge to master C programming for AKTU university exams and placement preparation.
Every day covers a new topic with programs asked by top companies like TCS, Infosys, Amazon, Microsoft, and Wipro.

Each program is explained with:
- What it does (plain English)
- Algorithm (step-by-step logic)
- Flowchart (visual diagram)
- Key concept (what you learn)

---

## Progress Tracker

| Day | Topic | Questions | Companies | Status |
|-----|-------|-----------|-----------|--------|
| Day 01 | Basic Programs | Q1-Q4 | TCS, Infosys, Wipro | Done |
| Day 02 | Digit Programs | Q5-Q8 | TCS, Infosys, Wipro | Done |
| Day 03 | Prime, GCD, LCM | Q9-Q12 | TCS, Infosys, Wipro | Done |
| Day 04 | Fibonacci and Armstrong | Q13-Q16 | TCS, Infosys, Wipro | Done |
| Day 05 | Perfect, Strong, Factors | Q17-Q20 | TCS, Infosys, Wipro | Done |
| Day 06 | Number Conversions | Q21-Q24 | TCS, Infosys, Wipro | Done |
| Day 07 | Recursion | Q25-Q28 | TCS, Infosys, Wipro | Done |
| Day 08 | Patterns Part 1 | Q29-Q32 | TCS, Microsoft, Adobe | Done |
| Day 09 | Patterns Part 2 | Q33-Q36 | TCS, Microsoft, Adobe | Done |
| Day 10 | Advanced Patterns | Q37-Q40 | TCS, Microsoft, Adobe | Done |
| Day 11 | Functions Part 1 | Q41-Q44 | TCS, Infosys, Wipro | Done |
| Day 12 | Functions Part 2 | Q45-Q48 | TCS, Infosys, Wipro | Done |
| Day 13 | Arrays Basics | Q49-Q52 | Amazon, Deloitte, Capgemini | Done |
| Day 14 | Array Searching | Q53-Q56 | Amazon, Deloitte, Capgemini | Done |
| Day 15 | Array Manipulation | Q57-Q60 | Amazon, Deloitte, Capgemini | Done |
| Day 16 | Array Problems | Q61-Q64 | Amazon, Deloitte, Capgemini | Done |
| Day 17 | Array Operations | Q65-Q68 | Amazon, Deloitte, Capgemini | Done |
| Day 18 | Sorting and Searching | Q69-Q72 | Amazon, Deloitte, Capgemini | Done |
| Day 19 | Matrix Part 1 | Q73-Q76 | TCS, Infosys, Wipro | Done |
| Day 20 | Matrix Part 2 | Q77-Q80 | TCS, Infosys, Wipro | Done |
| Day 21 | Strings Part 1 | Q81-Q84 | Microsoft, Adobe, Paytm | Done |
| Day 22 | Strings Part 2 | Q85-Q88 | Microsoft, Adobe, Paytm | Done |
| Day 23 | String Problems | Q89-Q92 | Microsoft, Adobe, Paytm | Done |
| Day 24 | Advanced Strings | Q93-Q96 | Microsoft, Adobe, Paytm | Done |
| Day 25 | Mixed Array and String | Q97-Q100 | Amazon, Microsoft | Done |
| Day 26 | Mini Projects 1 | Q101-Q104 | TCS, Accenture, Cognizant | Done |
| Day 27 | Mini Projects 2 | Q105-Q108 | TCS, Accenture, Cognizant | Done |
| Day 28 | Mini Projects 3 | Q109-Q112 | TCS, Accenture, Cognizant | Done |
| Day 29 | Menu-Driven Programs | Q113-Q116 | TCS, Amazon, Microsoft | Done |
| Day 30 | Final Projects | Q117-Q120 | Amazon, TCS, Cognizant | Done |

---

## DAY 01 - Basic Programs
Companies: TCS, Infosys, Wipro

Topic: The building blocks of C — input, output, loops, and math.

---

### Q1 - Sum of First N Natural Numbers

What it does: Adds all numbers from 1 to N. Example: N=5 gives 1+2+3+4+5 = 15

Algorithm:
```
1. Input N
2. sum = 0
3. Loop i from 1 to N:
   - sum = sum + i
4. Print sum
```

Flowchart:
```
[START] → [Input N] → [sum=0, i=1]
               |
          [i <= N?] --NO--> [Print sum] → [END]
               |YES
          [sum = sum + i]
               |
          [i = i + 1] → back to check
```

Key concept: for loop with an accumulator variable.

---

### Q2 - Multiplication Table

What it does: Prints N times 1 through N times 10. Example: Table of 5 gives 5,10,15...50

Algorithm:
```
1. Input N
2. Loop i from 1 to 10:
   - Print N x i
```

Key concept: Simple for loop — repeat something a fixed number of times.

---

### Q3 - Factorial of a Number

What it does: Multiplies all numbers from 1 to N. Example: 5! = 5x4x3x2x1 = 120

Algorithm:
```
1. Input N
2. result = 1
3. Loop i from 1 to N:
   - result = result x i
4. Print result
```

Flowchart:
```
[START] → [Input N] → [result=1, i=1]
               |
          [i <= N?] --NO--> [Print result] → [END]
               |YES
          [result = result x i] → [i = i+1] → back
```

Key concept: Accumulator pattern — build the answer step by step.

---

### Q4 - Count Digits in a Number

What it does: Counts how many digits. Example: 12345 has 5 digits

Algorithm:
```
1. Input N
2. count = 0
3. While N > 0:
   - N = N / 10  (removes last digit)
   - count++
4. Print count
```

Key concept: Dividing by 10 chops off the last digit each time.

---

## DAY 02 - Digit Programs
Companies: TCS, Infosys, Wipro

Topic: Extract and manipulate individual digits.

The golden rule: N % 10 gives the last digit. N / 10 removes the last digit.

---

### Q5 - Sum of Digits

What it does: Adds all digits. Example: 123 gives 1+2+3 = 6

Algorithm:
```
1. Input N
2. sum = 0
3. While N > 0:
   - digit = N % 10
   - sum = sum + digit
   - N = N / 10
4. Print sum
```

---

### Q6 - Reverse a Number

What it does: Flips the digits. Example: 12345 gives 54321

Algorithm:
```
1. Input N
2. rev = 0
3. While N > 0:
   - digit = N % 10
   - rev = rev * 10 + digit
   - N = N / 10
4. Print rev
```

Key trick: rev * 10 + digit shifts digits left and adds the new one on the right.

---

### Q7 - Product of Digits

What it does: Multiplies all digits. Example: 234 gives 2x3x4 = 24

Algorithm:
```
1. Input N
2. product = 1
3. While N > 0:
   - digit = N % 10
   - product = product x digit
   - N = N / 10
4. Print product
```

---

### Q8 - Check Palindrome Number

What it does: Checks if a number reads the same forwards and backwards. 121 is palindrome, 123 is not.

Algorithm:
```
1. Input N, save original = N
2. Reverse N into rev
3. If original == rev → Palindrome
4. Else → Not Palindrome
```

---

## DAY 03 - Prime, GCD, LCM
Companies: TCS, Infosys, Wipro

Topic: Number theory — the foundation of cryptography and algorithms.

---

### Q9 - Check Prime Number

What it does: A prime has no divisors except 1 and itself. 7 is prime, 8 is not.

Algorithm:
```
1. Input N
2. If N < 2 → Not Prime
3. Loop i from 2 to sqrt(N):
   - If N % i == 0 → Not Prime
4. If no factor found → Prime
```

Why sqrt(N)? If N has a factor bigger than sqrt(N), the paired factor must be smaller. So we never need to check beyond sqrt(N).

Flowchart:
```
[START] → [Input N] → [N<2?] --YES--> [Not Prime] → [END]
               |NO
          [i = 2]
               |
          [i*i <= N?] --NO--> [Prime] → [END]
               |YES
          [N%i==0?] --YES--> [Not Prime] → [END]
               |NO
          [i = i+1] → back to check
```

---

### Q10 - Print Primes in a Range

What it does: Prints all prime numbers between A and B. Example: 1 to 20 gives 2,3,5,7,11,13,17,19

Algorithm:
```
1. Input A, B
2. For each number N from A to B:
   - Run isPrime check
   - If prime → print N
```

---

### Q11 - GCD of Two Numbers

What it does: Largest number that divides both. Example: GCD(12, 8) = 4

Algorithm (Euclidean):
```
1. Input A, B
2. While B != 0:
   - temp = B
   - B = A % B
   - A = temp
3. Print A
```

Why it works: GCD(A, B) = GCD(B, A mod B). Keep reducing until remainder = 0.

---

### Q12 - LCM of Two Numbers

What it does: Smallest number both divide into. Example: LCM(4, 6) = 12

Algorithm:
```
1. Input A, B
2. LCM = (A x B) / GCD(A, B)
3. Print LCM
```

---

## DAY 04 - Fibonacci and Armstrong
Companies: TCS, Infosys, Wipro

---

### Q13 - Generate Fibonacci Series

What it does: Each number = sum of previous two. Example: 0,1,1,2,3,5,8,13,21...

Algorithm:
```
1. Input N
2. a=0, b=1
3. Print a, b
4. Loop N-2 times:
   - next = a + b
   - Print next
   - a = b, b = next
```

---

### Q14 - Find Nth Fibonacci Term

What it does: Finds just the Nth term without printing the full series.

Algorithm:
```
Same as above but only return/print the final value.
```

---

### Q15 - Check Armstrong Number

What it does: Sum of digits each raised to power of total digit count equals the number.
Example: 153 gives 1^3 + 5^3 + 3^3 = 1 + 125 + 27 = 153 — Armstrong!

Algorithm:
```
1. Input N, count digits → n
2. sum = 0
3. For each digit d: sum = sum + d^n
4. If sum == N → Armstrong
```

---

### Q16 - Print Armstrong Numbers in a Range

What it does: Prints all Armstrong numbers between A and B. Known ones: 1, 153, 370, 371, 407

Algorithm:
```
1. Input A, B
2. For each number N from A to B:
   - Run Armstrong check
   - If Armstrong → print N
```

---

## DAY 05 - Perfect, Strong and Factors
Companies: TCS, Infosys, Wipro

---

### Q17 - Check Perfect Number

What it does: Sum of all factors (not including itself) = the number.
Example: 6 → 1+2+3 = 6, perfect! 28 → 1+2+4+7+14 = 28, perfect!

Algorithm:
```
1. Input N
2. sum = 0
3. Loop i from 1 to N/2:
   - If N % i == 0 → sum += i
4. If sum == N → Perfect
```

---

### Q18 - Check Strong Number

What it does: Sum of factorials of digits = the number.
Example: 145 → 1! + 4! + 5! = 1 + 24 + 120 = 145, strong!

Algorithm:
```
1. Input N, save original
2. sum = 0
3. For each digit d: sum += factorial(d)
4. If sum == original → Strong
```

---

### Q19 - Print Factors of a Number

What it does: Lists all divisors. Example: 12 gives 1, 2, 3, 4, 6, 12

Algorithm:
```
1. Input N
2. Loop i from 1 to N:
   - If N % i == 0 → print i
```

---

### Q20 - Find Largest Prime Factor

What it does: Finds the biggest prime divisor. Example: 28 gives 7

Algorithm:
```
1. Input N
2. Divide out all 2s, track largest
3. For odd i from 3 to sqrt(N):
   - While N divisible by i → largest = i, divide out
4. If N > 2 → largest = N (N itself is prime)
5. Print largest
```

---

## DAY 06 - Number Conversions
Companies: TCS, Infosys, Wipro

Topic: How computers store numbers. Binary is how every number looks inside a computer.

---

### Q21 - Decimal to Binary

What it does: Converts normal number to 0s and 1s. Example: 10 gives 1010

Algorithm:
```
1. Input N
2. While N > 0:
   - Store N % 2 (remainder)
   - N = N / 2
3. Print remainders in reverse
```

Trace for 10:
```
10 / 2 = 5  remainder 0
 5 / 2 = 2  remainder 1
 2 / 2 = 1  remainder 0
 1 / 2 = 0  remainder 1
Read bottom to top: 1010
```

---

### Q22 - Binary to Decimal

What it does: Converts binary back to normal. Example: 1010 gives 10

Algorithm:
```
1. Input binary number
2. position=0, result=0
3. While number > 0:
   - digit = number % 10
   - result += digit x 2^position
   - number /= 10, position++
4. Print result
```

---

### Q23 - Count Set Bits

What it does: Counts the 1s in binary form. Example: 13 = 1101 in binary gives 3 set bits

Algorithm (Brian Kernighan trick):
```
1. Input N
2. count = 0
3. While N > 0:
   - N = N & (N-1)  clears lowest set bit
   - count++
4. Print count
```

---

### Q24 - Find x^n Without pow()

What it does: Calculates power manually. Example: 2^8 = 256

Algorithm:
```
1. Input base, exponent
2. result = 1
3. Loop exponent times: result = result x base
4. Print result
```

---

## DAY 07 - Recursion
Companies: TCS, Infosys, Wipro

Topic: Functions that call themselves. Like Russian dolls — each contains a smaller version until the tiniest one which is your base case.

Two rules every recursive function must follow:
1. Base case — when to STOP (without this your program crashes)
2. Recursive case — call itself with a smaller version of the problem

---

### Q25 - Recursive Factorial

```
factorial(N):
  if N == 0 → return 1           base case
  return N x factorial(N-1)      recursive case
```

Trace for factorial(4): 4 x 3 x 2 x 1 x 1 = 24

---

### Q26 - Recursive Fibonacci

```
fib(N):
  if N==0 → return 0
  if N==1 → return 1
  return fib(N-1) + fib(N-2)
```

Note: Simple but slow for large N — recalculates same values many times.

---

### Q27 - Recursive Sum of Digits

```
sumDigits(N):
  if N == 0 → return 0
  return (N % 10) + sumDigits(N / 10)
```

Trace for 123: 3 + sumDigits(12) → 3 + 2 + sumDigits(1) → 3+2+1+0 = 6

---

### Q28 - Recursive Reverse Number

```
reverse(N, rev):
  if N == 0 → return rev
  return reverse(N/10, rev*10 + N%10)
```

---

## DAY 08 - Patterns Part 1
Companies: TCS, Infosys, Microsoft, Adobe

Topic: Nested loops to print shapes. Outer loop = rows, inner loop = columns.

---

### Q29 - Half Pyramid Pattern

Output:
```
*
* *
* * *
* * * *
* * * * *
```

Algorithm:
```
for i = 1 to N:
    for j = 1 to i: print "* "
    print newline
```

---

### Q30 - Number Triangle

Output:
```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

Algorithm:
```
for i = 1 to N:
    for j = 1 to i: print j
    print newline
```

---

### Q31 - Character Triangle

Output:
```
A
A B
A B C
A B C D
```

Algorithm:
```
for i = 1 to N:
    for j = 0 to i: print (char)('A' + j)
    print newline
```

---

### Q32 - Repeated Number Pattern

Output:
```
1
2 2
3 3 3
4 4 4 4
```

Algorithm:
```
for i = 1 to N:
    for j = 1 to i: print i   print row number not j
    print newline
```

---

## DAY 09 - Patterns Part 2
Companies: TCS, Infosys, Microsoft, Adobe

Topic: Inverted and hollow patterns. Use spaces to push content around.

---

### Q33 - Reverse Star Pattern

Output:
```
* * * * *
* * * *
* * *
* *
*
```

Algorithm:
```
for i = N down to 1:
    for j = 1 to i: print "* "
    print newline
```

---

### Q34 - Reverse Number Triangle

Output:
```
1 2 3 4 5
1 2 3 4
1 2 3
1 2
1
```

Algorithm:
```
for i = N down to 1:
    for j = 1 to i: print j
    print newline
```

---

### Q35 - Repeated Character Pattern

Output:
```
A
B B
C C C
D D D D
```

Algorithm:
```
for i = 0 to N:
    for j = 0 to i: print (char)('A' + i)
    print newline
```

---

### Q36 - Hollow Square Pattern

Output (N=5):
```
* * * * *
*       *
*       *
*       *
* * * * *
```

Algorithm:
```
for i = 1 to N:
    for j = 1 to N:
        if i==1 or i==N or j==1 or j==N: print "*"
        else: print " "
    print newline
```

Key insight: Only print star on the border. Everything inside is a space.

---

## DAY 10 - Advanced Patterns
Companies: TCS, Infosys, Microsoft, Adobe

Topic: Pyramid patterns — combine spaces plus stars for centered and diamond shapes.

---

### Q37 - Star Pyramid

Output (N=5):
```
    *
   ***
  *****
 *******
*********
```

Algorithm:
```
for i = 1 to N:
    print (N-i) spaces
    print (2*i - 1) stars
    print newline
```

Formula: Row i has (N-i) leading spaces and (2i-1) stars.

---

### Q38 - Reverse Pyramid

Output (N=5):
```
*********
 *******
  *****
   ***
    *
```

Algorithm:
```
for i = N down to 1:
    print (N-i) spaces
    print (2*i - 1) stars
    print newline
```

---

### Q39 - Number Pyramid

Output (N=5):
```
    1
   121
  12321
 1234321
123454321
```

Algorithm:
```
for i = 1 to N:
    print spaces
    print 1 to i (ascending)
    print i-1 to 1 (descending)
    print newline
```

---

### Q40 - Character Pyramid

Output (N=5):
```
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
```

Algorithm:
```
for i = 1 to N:
    print spaces
    print A to current char (ascending)
    print previous char to A (descending)
    print newline
```

---

## DAY 11 - Functions Part 1
Companies: TCS, Infosys, Wipro

Topic: Functions — reusable blocks of code. Write once, call anywhere.

Why functions? Instead of copy-pasting the same code, write it once and call it by name.

---

### Q41 - Function: Sum of Two Numbers

```c
int sum(int a, int b) {
    return a + b;
}
```

Key concept: Functions take inputs (parameters) and give back an output (return value).

---

### Q42 - Function: Find Maximum

```c
int maximum(int a, int b) {
    if (a > b) return a;
    else return b;
}
```

---

### Q43 - Function: Check Prime

```c
int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i*i <= n; i++)
        if (n % i == 0) return 0;
    return 1;
}
```

Key concept: Functions returning 1 (true) or 0 (false) are called boolean functions.

---

### Q44 - Function: Factorial

```c
int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}
```

---

## DAY 12 - Functions Part 2
Companies: TCS, Infosys, Wipro

---

### Q45 - Function: Palindrome Check

```c
int isPalindrome(int n) {
    int original = n, rev = 0;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return original == rev;
}
```

---

### Q46 - Function: Armstrong Check

Algorithm inside function: count digits, sum each digit raised to that power, compare to original.

---

### Q47 - Function: Fibonacci

```c
void fibonacci(int n) {
    int a = 0, b = 1;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b; b = next;
    }
}
```

---

### Q48 - Function: Perfect Number Check

```c
int isPerfect(int n) {
    int sum = 0;
    for (int i = 1; i <= n/2; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}
```

---

## DAY 13 - Arrays Basics
Companies: Amazon, Deloitte, Capgemini

Topic: Arrays — store many values under one name. Like numbered boxes in a row.

Key idea: arr[0] is the first box, arr[1] is the second. Index always starts at 0 in C.

---

### Q49 - Input and Display Array

What it does: Reads N numbers into an array and prints them back.

Algorithm:
```
1. Input N
2. Loop i from 0 to N-1: scanf into arr[i]
3. Loop i from 0 to N-1: Print arr[i]
```

---

### Q50 - Sum and Average of Array

What it does: Adds all elements and divides by count. [1,2,3,4,5] gives sum=15, avg=3.0

Algorithm:
```
1. Input array of N elements
2. sum = 0
3. For each element: sum += element
4. avg = sum / N
5. Print sum and avg
```

---

### Q51 - Largest and Smallest Element

What it does: Finds the max and min in one pass through the array.

Algorithm:
```
1. max = arr[0], min = arr[0]
2. For each element from index 1:
   - If element > max → max = element
   - If element < min → min = element
3. Print max and min
```

---

### Q52 - Count Even and Odd Elements

What it does: Counts how many elements are even and how many are odd.

Algorithm:
```
1. even=0, odd=0
2. For each element:
   - If element % 2 == 0 → even++
   - Else → odd++
3. Print even and odd counts
```

---

## DAY 14 - Array Searching
Companies: Amazon, Deloitte, Capgemini

---

### Q53 - Linear Search

What it does: Searches by checking every element one by one.

Algorithm:
```
1. Input array and target value
2. Loop through each element:
   - If element == target → Found at index i, stop
3. If loop ends without finding → Not Found
```

Time complexity: O(N) — worst case checks every element.

---

### Q54 - Frequency of an Element

What it does: Counts how many times a value appears. [1,2,2,3,2] → frequency of 2 = 3

Algorithm:
```
1. Input array and target
2. count = 0
3. For each element: if element == target → count++
4. Print count
```

---

### Q55 - Second Largest Element

What it does: Finds the 2nd biggest value without sorting.

Algorithm:
```
1. first = second = minimum possible value
2. For each element:
   - If element > first: second = first, first = element
   - Else if element > second and element != first: second = element
3. Print second
```

---

### Q56 - Find Duplicates in Array

What it does: Prints numbers that appear more than once.

Algorithm:
```
1. For each element at index i:
   - For each element at index j > i:
     - If arr[i] == arr[j] → print arr[i] as duplicate
```

---

## DAY 15 - Array Manipulation
Companies: Amazon, Deloitte, Capgemini

---

### Q57 - Reverse Array

What it does: Flips the array. [1,2,3,4,5] becomes [5,4,3,2,1]

Algorithm:
```
1. left = 0, right = N-1
2. While left < right:
   - Swap arr[left] and arr[right]
   - left++, right--
```

Key concept: Two-pointer technique — start from both ends and meet in the middle.

---

### Q58 - Rotate Array Left

What it does: Shifts all elements one position left. First element goes to end.
[1,2,3,4,5] becomes [2,3,4,5,1]

Algorithm:
```
1. Save first element: temp = arr[0]
2. Shift all elements left: arr[i] = arr[i+1]
3. Put saved element at end: arr[N-1] = temp
```

---

### Q59 - Rotate Array Right

What it does: Shifts all elements one position right. Last element goes to front.
[1,2,3,4,5] becomes [5,1,2,3,4]

Algorithm:
```
1. Save last element: temp = arr[N-1]
2. Shift all elements right from right to left
3. Put saved element at front: arr[0] = temp
```

---

### Q60 - Move Zeroes to End

What it does: Keeps non-zero elements in order, moves zeros to end.
[0,1,0,3,12] becomes [1,3,12,0,0]

Algorithm:
```
1. pos = 0
2. For each element: if element != 0 → arr[pos++] = element
3. Fill remaining positions with 0
```

---

## DAY 16 - Array Problems
Companies: Amazon, Deloitte, Capgemini

---

### Q61 - Find Missing Number in Array

What it does: Given array 1 to N with one missing, find it.
[1,2,4,5] → missing is 3

Algorithm:
```
1. Expected sum = N*(N+1)/2
2. Actual sum = sum of all elements
3. Missing = Expected - Actual
```

Key insight: Math shortcut — no sorting or searching needed!

---

### Q62 - Maximum Frequency Element

What it does: Finds which element appears the most times.

Algorithm:
```
1. For each unique element, count frequency
2. Track element with highest count
3. Print it
```

---

### Q63 - Find Pair with Given Sum

What it does: Finds two elements that add up to a target.
[1,2,3,4], target=5 → pairs (1,4) and (2,3)

Algorithm:
```
For i from 0 to N-1:
  For j from i+1 to N-1:
    If arr[i] + arr[j] == target: print the pair
```

---

### Q64 - Remove Duplicates from Array

What it does: Keeps only unique elements. [1,1,2,3,3,4] becomes [1,2,3,4]

Algorithm:
```
1. For each element at index i:
   - Check if it appeared before (j < i)
   - If not a duplicate → keep it in result
```

---

## DAY 17 - Array Operations
Companies: Amazon, Deloitte, Capgemini

---

### Q65 - Merge Two Arrays

What it does: Combines two arrays into one. [1,3,5] + [2,4,6] → [1,3,5,2,4,6]

Algorithm:
```
1. Copy all elements of A into result
2. Copy all elements of B after them
```

---

### Q66 - Union of Arrays

What it does: All unique elements from both arrays. [1,2,3] union [2,3,4] → [1,2,3,4]

Algorithm:
```
1. Add all elements of A to result
2. For each element in B: only add if not already in result
```

---

### Q67 - Intersection of Arrays

What it does: Elements present in BOTH arrays. [1,2,3] intersect [2,3,4] → [2,3]

Algorithm:
```
For each element in A: if it also exists in B → add to result
```

---

### Q68 - Find Common Elements

What it does: Prints elements found in both arrays (same as intersection with display).

---

## DAY 18 - Sorting and Searching
Companies: Amazon, Deloitte, Capgemini

Topic: Organizing data — sorting is one of the most important CS topics.

---

### Q69 - Bubble Sort

What it does: Repeatedly compares adjacent elements and swaps if in wrong order.
Biggest elements bubble up to the end.

Algorithm:
```
for i = 0 to N-1:
    for j = 0 to N-i-2:
        if arr[j] > arr[j+1]: swap arr[j] and arr[j+1]
```

Time complexity: O(N squared) — slow for large arrays but easy to understand.
Visual: [5,3,1,4] → [3,1,4,5] → [1,3,4,5] → sorted!

---

### Q70 - Selection Sort

What it does: Finds the minimum element and puts it in its correct position, one at a time.

Algorithm:
```
for i = 0 to N-1:
    minIndex = i
    for j = i+1 to N-1:
        if arr[j] < arr[minIndex]: minIndex = j
    swap arr[i] and arr[minIndex]
```

---

### Q71 - Binary Search

What it does: Searches a SORTED array by repeatedly halving the search space.
Much faster than linear search!

Algorithm:
```
1. left=0, right=N-1
2. While left <= right:
   - mid = (left + right) / 2
   - If arr[mid] == target → Found!
   - If arr[mid] < target → left = mid + 1
   - If arr[mid] > target → right = mid - 1
3. Not Found
```

Why fast: Eliminates half the remaining elements every step.
Time complexity: O(log N) versus Linear Search O(N).

---

### Q72 - Sort Array in Descending Order

What it does: Same as bubble/selection sort but biggest first.

---

## DAY 19 - Matrix Part 1
Companies: TCS, Infosys, Wipro

Topic: 2D arrays (matrices) — like a table with rows and columns.

Declaring a matrix: int mat[3][3] = a 3x3 grid.
Accessing element: mat[row][col] — row first, column second.

---

### Q73 - Add Two Matrices

What it does: Adds corresponding elements of two matrices.

Algorithm:
```
for i = 0 to rows-1:
    for j = 0 to cols-1:
        result[i][j] = A[i][j] + B[i][j]
```

Condition: Both matrices must have same dimensions.

---

### Q74 - Subtract Two Matrices

Algorithm:
```
result[i][j] = A[i][j] - B[i][j]
```

---

### Q75 - Transpose a Matrix

What it does: Flips rows and columns. Element at [i][j] moves to [j][i].

Example:
```
1 2 3        1 4 7
4 5 6  →    2 5 8
7 8 9        3 6 9
```

Algorithm:
```
for i = 0 to N-1:
    for j = i+1 to N-1:
        swap mat[i][j] and mat[j][i]
```

---

### Q76 - Find Diagonal Sum

What it does: Sums elements on the main diagonal (top-left to bottom-right).

Algorithm:
```
sum = 0
for i = 0 to N-1: sum += mat[i][i]   where row equals col
```

---

## DAY 20 - Matrix Part 2
Companies: TCS, Infosys, Wipro

---

### Q77 - Multiply Two Matrices

What it does: Matrix multiplication — each cell is a dot product of a row and column.

Algorithm:
```
for i = 0 to rows-1:
    for j = 0 to cols-1:
        result[i][j] = 0
        for k = 0 to N-1: result[i][j] += A[i][k] x B[k][j]
```

Condition: Columns of A must equal rows of B.

---

### Q78 - Check Symmetric Matrix

What it does: A matrix is symmetric if mat[i][j] == mat[j][i] for all positions.

Algorithm:
```
for i = 0 to N-1:
    for j = 0 to N-1:
        if mat[i][j] != mat[j][i] → Not Symmetric
If no mismatch found → Symmetric
```

---

### Q79 - Row-wise Sum

What it does: Prints the sum of each row separately.

Algorithm:
```
for i = 0 to rows-1:
    rowSum = 0
    for j = 0 to cols-1: rowSum += mat[i][j]
    print Row i sum: rowSum
```

---

### Q80 - Column-wise Sum

Algorithm:
```
for j = 0 to cols-1:
    colSum = 0
    for i = 0 to rows-1: colSum += mat[i][j]
    print Col j sum: colSum
```

---

## DAY 21 - Strings Part 1
Companies: Microsoft, Adobe, Paytm

Topic: Strings — arrays of characters ending with \0 (null terminator).

Key idea: In C, "Hello" is stored as ['H','e','l','l','o','\0']. It is just a char array.

---

### Q81 - String Length Without strlen()

What it does: Counts characters until the null terminator.

Algorithm:
```
1. Start at index 0
2. While str[i] != '\0': count++, i++
3. Print count
```

---

### Q82 - Reverse a String

What it does: Flips the string. "hello" becomes "olleh"

Algorithm:
```
1. Find length n
2. left=0, right=n-1
3. While left < right: swap str[left] and str[right], left++, right--
```

---

### Q83 - Count Vowels and Consonants

What it does: Counts how many a/e/i/o/u and how many other letters.

Algorithm:
```
for each character in string:
    if it is a letter:
        if it is a/e/i/o/u → vowels++
        else → consonants++
```

---

### Q84 - Convert Lowercase to Uppercase

What it does: Changes all small letters to capitals.

Key trick: ASCII of lowercase - 32 = ASCII of uppercase. So 'a' - 32 = 'A'.

```c
if (ch >= 'a' && ch <= 'z') ch = ch - 32;
```

---

## DAY 22 - Strings Part 2
Companies: Microsoft, Adobe, Paytm

---

### Q85 - Check Palindrome String

What it does: Checks if string reads same forwards and backwards. "racecar" is palindrome.

Algorithm:
```
1. Find length n
2. Compare str[0] with str[n-1], str[1] with str[n-2], etc.
3. Any mismatch → Not Palindrome
4. All match → Palindrome
```

---

### Q86 - Count Words in a Sentence

What it does: Counts words by counting spaces. "hello world" → 2 words

Algorithm:
```
1. words = 1 if string is not empty
2. For each character: if character is space → words++
3. Print words
```

---

### Q87 - Character Frequency

What it does: Counts how many times each character appears.

Algorithm:
```
1. Create freq[256] = all zeros
2. For each char c: freq[c]++
3. Print each character and its count
```

---

### Q88 - Remove Spaces from String

What it does: Removes all spaces. "hello world" becomes "helloworld"

Algorithm:
```
1. pos = 0
2. For each character: if not space → result[pos++] = character
3. result[pos] = '\0'
```

---

## DAY 23 - String Problems
Companies: Microsoft, Adobe, Paytm

---

### Q89 - First Non-Repeating Character

What it does: Finds the first character that appears only once.
"aabbcde" → 'c'

Algorithm:
```
1. Count frequency of each character
2. Loop through string again:
   First character with freq == 1 → answer
```

---

### Q90 - First Repeating Character

What it does: Finds the first character that appears more than once.
"abcabc" → 'a'

Algorithm:
```
1. Keep track of seen characters
2. Loop through string: if character already seen → answer
```

---

### Q91 - Check Anagram Strings

What it does: Two strings are anagrams if same characters in any order.
"listen" and "silent" are anagrams.

Algorithm:
```
1. Count frequency of each char in string 1
2. Subtract frequency for each char in string 2
3. If all frequencies are 0 → Anagram
```

---

### Q92 - Maximum Occurring Character

What it does: Finds the character that appears the most times.
"programming" → 'g' appears twice

Algorithm:
```
1. Count frequency of each character
2. Find character with maximum frequency
3. Print it
```

---

## DAY 24 - Advanced Strings
Companies: Microsoft, Adobe, Paytm

---

### Q93 - Check String Rotation

What it does: Checks if one string is a rotation of another.
"abcde" and "cdeab" are rotations (shift left by 2).

Algorithm (clever trick):
```
1. If lengths differ → Not rotation
2. Concatenate str1 with itself: "abcdeabcde"
3. If str2 is a substring of the doubled string → Rotation
```

---

### Q94 - Compress a String

What it does: Replaces repeated characters with count.
"aaabbbcc" becomes "a3b3c2"

Algorithm:
```
1. i = 0
2. While i < length:
   - count = 1
   - While next char == current char: count++, i++
   - Print current char and count
   - i++
```

---

### Q95 - Find Longest Word

What it does: Finds the longest word in a sentence.
"I love programming" → "programming"

Algorithm:
```
1. Split sentence by spaces
2. Track the longest word seen
3. Print it
```

---

### Q96 - Remove Duplicate Characters

What it does: Keeps only first occurrence of each character.
"programming" becomes "progamin"

Algorithm:
```
1. seen[256] = all zeros
2. For each character: if not seen → keep it, mark as seen
```

---

## DAY 25 - Mixed Array and String
Companies: Amazon, Microsoft, Deloitte

---

### Q97 - Merge Two Sorted Arrays

What it does: Combines two sorted arrays into one sorted array.
[1,3,5] + [2,4,6] → [1,2,3,4,5,6]

Algorithm (Two pointer):
```
1. i=0, j=0, k=0
2. While both arrays have elements:
   Pick smaller of A[i] or B[j] → result[k++]
3. Copy remaining elements from whichever array has leftovers
```

---

### Q98 - Find Common Characters in Strings

What it does: Characters that appear in both strings.
"abc" and "bcd" → b, c

Algorithm:
```
For each character in string 1: if it exists in string 2 → print it
```

---

### Q99 - Sort Names Alphabetically

What it does: Sorts an array of strings in A-Z order.

Algorithm:
```
Use bubble sort but compare names with strcmp() instead of greater than
For each pair of adjacent names: if strcmp(name[j], name[j+1]) > 0 → swap
```

---

### Q100 - Sort Words by Length

What it does: Sorts words shortest to longest.

Algorithm:
```
Same as sort names but compare strlen() instead of strcmp()
```

---

## DAY 26 - Mini Projects Part 1
Companies: TCS, Accenture, Cognizant

Topic: Real-world programs using everything learned so far.

---

### Q101 - Number Guessing Game

What it does: Computer picks a random number, user guesses until correct.

Algorithm:
```
1. Generate random number 1-100 using rand()
2. Loop:
   - Input user guess
   - If guess == number → You Win! break
   - If guess < number → Too Low
   - If guess > number → Too High
```

Key concept: rand() % 100 + 1 generates random number from 1 to 100.

---

### Q102 - Voting Eligibility System

What it does: Checks if person is old enough to vote.

Algorithm:
```
1. Input name and age
2. If age >= 18 → Eligible to vote
3. Else → Not eligible, X years remaining
```

---

### Q103 - ATM Simulation

What it does: Simulates basic ATM — check balance, deposit, withdraw.

Algorithm:
```
1. Set initial balance
2. Show menu: 1.Balance 2.Deposit 3.Withdraw 4.Exit
3. Based on choice:
   - Balance: print balance
   - Deposit: balance += amount
   - Withdraw: if funds available → balance -= amount, else Insufficient
4. Repeat until Exit
```

Key concept: do-while loop keeps menu running until user exits.

---

### Q104 - Quiz Application

What it does: Asks multiple-choice questions, tracks score, shows result.

Algorithm:
```
1. Store questions and correct answers
2. For each question: display options, input answer, if correct → score++
3. Display final score and grade
```

---

## DAY 27 - Mini Projects Part 2
Companies: TCS, Accenture, Cognizant

---

### Q105 - Student Record Management System

What it does: Stores student info — name, roll number, marks, grade.

Algorithm:
```
1. Input number of students
2. For each student: input name, roll, marks
3. Calculate grade: 90+ = A, 80+ = B, 70+ = C, etc.
4. Display all records in a table
```

---

### Q106 - Employee Management System

What it does: Manages employee data — ID, name, department, salary.

Algorithm:
```
1. Input employee details
2. Display employee table
3. Calculate total payroll
```

---

### Q107 - Salary Management System

What it does: Calculates net salary after all deductions.

Algorithm:
```
1. Input basic salary
2. HRA = 40% of basic
3. DA = 20% of basic
4. Tax = 10% of gross if above threshold
5. Net = Basic + HRA + DA - Tax
6. Display pay slip
```

---

### Q108 - Marksheet Generation System

What it does: Takes marks in 5 subjects, calculates total, percentage, and grade.

Algorithm:
```
1. Input marks for 5 subjects
2. total = sum of all marks
3. percentage = total / 5
4. Assign grade based on percentage
5. Print formatted marksheet
```

---

## DAY 28 - Mini Projects Part 3
Companies: TCS, Accenture, Cognizant

---

### Q109 - Library Management System

What it does: Manages books — add, search, issue, return.

Algorithm:
```
1. Store books: title, author, ISBN, available yes/no
2. Menu:
   - Add book: store new info
   - Search: find by title or author
   - Issue: mark book unavailable
   - Return: mark book available
```

---

### Q110 - Bank Account System

What it does: Full banking — create account, deposit, withdraw, balance check.

Algorithm:
```
1. Account info: number, name, balance
2. Menu:
   - Create: set up new account
   - Deposit: balance += amount
   - Withdraw: check funds, then balance -= amount
   - Balance: display current balance
```

---

### Q111 - Ticket Booking System

What it does: Books seats for a show or bus. Tracks available and booked seats.

Algorithm:
```
1. Initialize seat array (all available)
2. Show available seats
3. Input seat number to book
4. If available → mark as booked, show confirmation
5. If already booked → show error
```

---

### Q112 - Contact Management System

What it does: Stores contacts — add, search, display, delete.

Algorithm:
```
1. Store contacts: name, phone, email
2. Menu: Add, Search by name, Display all, Delete
```

---

## DAY 29 - Menu-Driven Programs
Companies: TCS, Amazon, Microsoft, Accenture

Topic: Programs that keep showing a menu until user chooses to exit. Uses switch and do-while.

---

### Q113 - Menu-Driven Calculator

What it does: Full calculator that keeps running until user exits.

Algorithm:
```
do {
    Show menu: 1.Add 2.Sub 3.Mul 4.Div 5.Exit
    Input choice and two numbers
    switch(choice):
        case 1: print a + b
        case 2: print a - b
        case 3: print a x b
        case 4: if b!=0 → print a/b, else Cannot divide by zero
        case 5: exit
} while choice != 5
```

Key concept: switch statement is cleaner than many if-else for menu choices.

---

### Q114 - Menu-Driven Array Operations

What it does: All array operations in one program.

Menu:
```
1. Input array
2. Display array
3. Sort array
4. Search element
5. Reverse array
6. Find max/min
7. Exit
```

---

### Q115 - Menu-Driven String Operations

What it does: All string operations in one program.

Menu:
```
1. Find length
2. Reverse string
3. Check palindrome
4. Count vowels
5. Convert to uppercase
6. Count words
7. Exit
```

---

### Q116 - Inventory Management System

What it does: Manages a shop's products — add, update quantity, display stock, calculate value.

Algorithm:
```
1. Store products: name, price, quantity
2. Menu:
   - Add product
   - Update quantity
   - Display all products
   - Total value = sum of (price x quantity)
   - Search product
   - Exit
```

---

## DAY 30 - Final Projects
Companies: Amazon, TCS, Accenture, Cognizant

Topic: Bringing everything together — arrays, strings, and functions in complete mini-projects.

---

### Q117 - Student Record System Using Arrays and Strings

What it does: Full student management using arrays for marks and strings for names.

Features:
- Store student name, roll number, marks in 5 subjects
- Calculate total, percentage, and grade
- Display all records sorted by marks
- Find topper and lowest scorer

---

### Q118 - Mini Library System

What it does: Complete library with catalog, member management, issue and return.

Features:
- Book catalog with title, author, copies available
- Issue book (reduces available copies)
- Return book (increases available copies)
- Search by title or author
- Display all books

---

### Q119 - Mini Employee Management System

What it does: Full employee system with salary calculation.

Features:
- Employee info: ID, name, department, basic salary
- Salary calculation: HRA + DA + Bonus - Tax
- Search employee by ID or name
- Display department-wise employees
- Find highest and lowest paid

---

### Q120 - Complete Mini Project

What it does: A complete project combining arrays, strings, and functions.

Typical features:
- Multi-entity management
- CRUD operations (Create, Read, Update, Delete)
- Searching and sorting
- Report generation
- Full menu-driven interface

---

## Key Concepts Summary

| Concept | What It Is | Day |
|---------|-----------|-----|
| scanf() and printf() | Read input and print output | Day 01 |
| for loop | Repeat N times | Day 01 |
| while loop | Repeat until condition false | Day 02 |
| % 10 and / 10 | Get and remove last digit | Day 02 |
| Modulo % | Remainder of division | Day 03 |
| Euclidean Algorithm | Fast GCD calculation | Day 03 |
| Accumulator pattern | Build answer step by step | Day 01 |
| Nested loops | Loop inside a loop for patterns | Day 08 |
| Recursion | Function calling itself | Day 07 |
| Base case | Stopping point in recursion | Day 07 |
| Functions | Reusable named code blocks | Day 11 |
| Return value | Output of a function | Day 11 |
| Arrays | Multiple values under one name | Day 13 |
| Index starts at 0 | First element is arr[0] not arr[1] | Day 13 |
| Linear Search | Check every element O(N) | Day 14 |
| Binary Search | Halve search space O(log N) | Day 18 |
| Bubble Sort | Compare and swap neighbors O(N^2) | Day 18 |
| Selection Sort | Find min, place in position | Day 18 |
| 2D Arrays | Table with rows and columns | Day 19 |
| Strings | char array ending with null terminator | Day 21 |
| ASCII values | Numeric code for each character | Day 21 |
| switch statement | Clean multi-choice branching | Day 29 |
| do-while | Loop that runs at least once | Day 29 |

---

## Company-wise Important Questions

| Company | Focus Areas | Key Questions |
|---------|-------------|---------------|
| TCS | Basics, Loops, Patterns, Recursion | Q1-Q28, Q29-Q40 |
| Infosys | Number programs, Functions | Q1-Q20, Q41-Q48 |
| Wipro | Arrays, Sorting, Searching | Q49-Q72 |
| Amazon | Arrays, Searching, String problems | Q53-Q68, Q85-Q96 |
| Microsoft | Strings, Advanced patterns | Q81-Q96, Q31, Q35 |
| Adobe | Strings, Character patterns | Q81-Q96 |
| Accenture | Mini projects, Menu-driven | Q101-Q116 |
| Cognizant | Management systems | Q105-Q120 |

---

## How to Run

Requirements: GCC compiler and VS Code

```bash
gcc filename.c -o output && ./output

cd "c:/C Programing/Day01"
gcc main.c -o main && ./main
```

VS Code shortcut: Open .c file then press Ctrl+Alt+N with Code Runner installed.

---

## University

AKTU — Dr. A.P.J. Abdul Kalam Technical University
Subject: Programming in C (KCS101 / KCS201)

---

## Author

Nikhil Choudhary
GitHub: https://github.com/nikhilchoudhary2025-stack

"120 programs. 30 days. One goal — master C programming."

All 30 days complete — 120 programs done!
