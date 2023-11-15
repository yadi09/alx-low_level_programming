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

-------------------------------------------------------------------------------------------------------------------------------------------------------------------
   ***Conclusion***

- By working through these recursion tasks, you will gain a deeper understanding of recursion and its applications in programming. You will also develop your problem-solving skills, enhance your algorithmic thinking, and improve your ability to write elegant and efficient code.
