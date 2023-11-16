   ***Recursion Tasks***

- This directory contains a collection of recursion tasks designed to help you practice and apply the concept of recursion in programming.(DESIGNED BY ALX AFRICA)
------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Prerequisites***

- Before attempting these tasks, it is assumed that you have a basic understanding of programming concepts, including functions, variables, and control flow statements. You should also be familiar with the concept of recursion and how it works.
------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Objectives***

- By completing these tasks, you will gain hands-on experience with recursion and learn to apply it to solve various programming problems. You will also improve your problem-solving skills, develop your understanding of algorithmic thinking, and enhance your ability to write clear and concise code.
------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Tasks***

- The tasks in this directory cover a range of difficulty levels, from beginner to advanced. Each task comes with a detailed description of the problem to be solved, along with clear instructions and hints to guide you through the process.
------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 0***
-------------------------
- Write a function that prints a string, followed by a new line.

    - Prototype: void _puts_recursion(char *s);

- The code defines a function named _puts_recursion that takes a character pointer s as input. The function recursively prints the characters of the string s one by one. It first checks if the current character is the null terminator \0. If it is, then the function prints a newline character using _putchar. Otherwise, the function prints the current character using _putchar and then recursively calls itself to print the next character. This process continues until the null terminator is encountered.

------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 1***
-------------------------
- Write a function that prints a string in reverse.

     - Prototype: void _print_rev_recursion(char *s);

- The code defines a recursive function named _print_rev_recursion that takes a character pointer s as input. The function prints the characters of the string s in reverse order. It first checks if the current character is the null terminator \0. If it is, then the function returns, as there are no more characters to print.

- Otherwise, if the current character is not the null terminator, then the function recursively calls itself to print the remaining characters in the string. After the recursion is complete, the function decrements the pointer s to point to the character that was just printed. Finally, the function prints the current character using _putchar.

- This process continues until the null terminator is encountered, at which point the function returns without printing any more characters.
---------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 2***
-------------------------

- Write a function that returns the length of a string.

     - Prototype: int _strlen_recursion(char *s);

- The code defines a recursive function named _strlen_recursion that takes a character pointer s as input. The function returns the length of the string s. It first checks if the current character is the null terminator \0. If it is, then the function returns 0, as the string has reached its end.

- Otherwise, if the current character is not the null terminator, then the function increments the pointer s to point to the next character in the string. It then recursively calls itself to calculate the length of the remaining portion of the string. Finally, it adds 1 to the length returned by the recursive call and returns this value.

- This process continues until the null terminator is encountered, at which point the function returns 0.
------------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 3***
--------------------------

- Write a function that returns the factorial of a given number.

    - Prototype: int factorial(int n);
    - If n is lower than 0, the function should return -1 to indicate an error
    - Factorial of 0 is 1

- The code defines a recursive function named factorial that takes an integer n as input. The function returns the factorial of n. The factorial of a number is the product of all positive integers less than or equal to that number. For example, the factorial of 5 is 5 x 4 x 3 x 2 x 1, or 120.

- The factorial function first checks if n is negative. If it is, then the function returns -1, as the factorial of a negative number is undefined.

- Next, the function checks if n is 0. If it is, then the function returns 1, as the factorial of 0 is defined to be 1.

- Otherwise, if n is neither negative nor 0, then the function recursively calls itself to calculate the factorial of n - 1. This will cause the function to recursively call itself until it reaches the base case of n = 0.

- After the recursion is complete, the function multiplies n by the result of the recursive call. This is because the factorial of n is equal to n times the factorial of n - 1.

- Finally, the function returns the product, which is the factorial of n.
----------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 4***
---------------------------
- Write a function that returns the value of x raised to the power of y.

     - Prototype: int _pow_recursion(int x, int y);
     - If y is lower than 0, the function should return -1

- The provided code defines a recursive function named _pow_recursion that takes two integers x and y as input. The function returns the value of x raised to the power of y. This means that if x is 2 and y is 3, then the function will return 8, as 2^3 is equal to 8.

- The _pow_recursion function first checks if y is negative. If it is, then the function returns -1, as the value of x raised to the power of a negative number is undefined.

- Next, the function checks if y is 0. If it is, then the function returns 1, as the value of x raised to the power of 0 is always 1.

- Otherwise, if y is neither negative nor 0, then the function recursively calls itself to calculate the value of x raised to the power of y - 1. This will cause the function to recursively call itself until it reaches the base case of y = 0.

- Once the recursion is complete, the function multiplies the result of the recursive call by x. This is because the value of x raised to the power of y is equal to the value of x raised to the power of y - 1 multiplied by x.

- Finally, the function returns the product.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 5***
------------------------------
- Write a function that returns the natural square root of a number.

    - Prototype: int _sqrt_recursion(int n);
    - If n does not have a natural square root, the function should return -1

- The code defines two functions: _sqr and _sqrt_recursion. Both functions aim to determine the natural square root of a given number. The _sqr function takes two arguments: num and n. It recursively increments num until it finds a value that, when multiplied by itself, equals n. If num ever exceeds n, it returns -1. Otherwise, it returns the final value of num, which is the square root of n. The _sqrt_recursion function simply calls the _sqr function with the input number n and returns the result.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 6***
-------------------------------
- Write a function that returns 1 if the input integer is a prime number, otherwise return 0.

    - Prototype: int is_prime_number(int n);

- The provided code defines two functions: is_prime_number and prime. Both functions determine whether a given integer is a prime number or not. The is_prime_number function simply calls the prime function with the input number n. The prime function takes two arguments: num and n. It recursively checks whether num is a factor of n. If num is ever greater than or equal to n, it returns 0, indicating that n is not a prime number. Otherwise, it checks if n is divisible by 2 or if num is less than half of n. If either condition is true, it returns 1, indicating that n is a prime number. Otherwise, it continues the recursion with the next value of num. In summary, the code efficiently determines whether a given integer is a prime number using recursion.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 7***
-------------------------------
- Write a function that returns 1 if a string is a palindrome and 0 if not.

    - Prototype: int is_palindrome(char *s);
    - An empty string is a palindrome

- The code defines three functions: _strlen, is_same, and is_palindrome. The _strlen function calculates the length of a given string s by recursively incrementing the position of the pointer s until it reaches the null terminator (\0). It returns the total number of characters encountered before reaching the null terminator.

- The is_same function checks whether a given string s is a palindrome, which means it reads the same backward as forward. It takes three arguments: s, n, and num. s is the pointer to the beginning of the string, n is the current position in the string, and num is the total length of the string. The function recursively compares the first and last characters of the string, then moves the pointer inwards until it reaches the middle of the string. If the characters match at each position, it returns 1, indicating that the string is a palindrome. Otherwise, it returns 0.

- The is_palindrome function simply calls the is_same function with the input string s and returns the result. It effectively determines whether the given string is a palindrome or not.

- In summary, the code provides functions for calculating string length and checking whether a string is a palindrome.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Task 8***
-------------------------------
- Write a function that compares two strings and returns 1 if the strings can be considered identical, otherwise return 0.

- Prototype: int wildcmp(char *s1, char *s2);
- s2 can contain the special character *.
- The special char * can replace any string (including an empty string)

The provided code defines two functions: check and wildcmp. These functions implement a wildcard matching algorithm that determines whether a given string s1 matches a pattern string s2 containing wildcard characters (*).

The check function recursively compares the characters of s1 and s2, taking into account the wildcard character *. It returns 1 if the strings match, and 0 otherwise. The function handles three specific cases:

  - 1, If both s1[i] and s2[j] are null terminators (\0), indicating the end of both strings, it means the strings match and returns 1.

  - 2, If s1[i] and s2[j] are equal, it recursively compares the next characters of s1 and s2 using check(s1, s2, i + 1, j + 1).

  - 3, If s1[i] is a null terminator and s2[j] is an asterisk (*), it means that s1 has ended, but s2 can still match any remaining characters in s1. It recursively compares the current position of s2 with the next possible character in s1 using check(s1, s2, i, j + 1).

  - 4, If s2[j] is an asterisk (*), it means that the wildcard can match zero or more characters in s1. It recursively compares two possibilities:
      - a. The current position of s1 with the next position of s2 using check(s1, s2, i + 1, j), allowing the wildcard to match zero characters.
      - b. The current position of s2 with the next possible character in s1 using check(s1, s2, i, j + 1), allowing the wildcard to match one or more characters.

- The wildcmp function simply calls the check function with the input strings s1 and s2 and returns the result. It effectively determines whether s1 matches the pattern s2 using wildcards.
-------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Conclusion***

- By working through these recursion tasks, you will gain a deeper understanding of recursion and its applications in programming. You will also develop your problem-solving skills, enhance your algorithmic thinking, and improve your ability to write elegant and efficient code.
