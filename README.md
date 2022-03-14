<img src= "https://blog.holbertonschool.com/wp-content/uploads/2020/04/unnamed-2.png" width= 30% >

# Our own Printf Function 
The objective of this project is to make our own **printf function( printf("Hello World\n"); )** that can be found on the **<stdio.h> Library**. To achieve our goal we run our function under the conditions of multiple arguments **(va_args)** due to not knowing beforehand, how many parameters we are receiving, **Va_args** belongs **<stdarg.h> Library**.
````c
int printf ( const char * format, ... );
````

## Compilation

To compile our program we are using a **GNU Compiler Collection** (**GCC**) over a Basic Ubuntu 20.04 with the following command:  
```  
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
## Functions used

````c
int  _putchar(char c);
int  print_c(va_list c);
int  print_cp(va_list c);
int  print_int(va_list c);
int  print_int1(int n);
int  print_un(va_list c);
int print_rot13(va_list c);
int  _printf(const  char *format, ...);
````

## Specifiers

| Specifiers | Output | Example    |
| :---        |    :----:   |          ---: |
| %c    | Character    | h  |
| %s  | String       | Hello World!    |
|   %d && %i | Signed Decimal Integer   |   101 |
| %  | Print a % when we find %% inside the printf function       | %      |
| %r   | rot13 Hello World!  | Uryyb Jbeyq!    |

## Authors

[Mateo Arbini](https://github.com/MateoArbini)
[Tarik Calixto](https://github.com/tarikaudi)
