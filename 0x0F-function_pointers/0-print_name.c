/**
 * print_name - function that prints a name.
 * @name: for name string
 * @f: pointer to function
 * Return: void;
 */

void print_name(char *name, void (*f)(char *))
{
(*f)(name);
return;
}
