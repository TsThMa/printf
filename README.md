0X11. C - PRINTF



This is a team project.

Team Members: Tshepiso Malatji and Chawana Maseka 



In this project we will implement a printf() function



Tasks



0. I'M NOT GOING ANYWHERE. YOU CAN PRINT THAT WHEREVER YOU WANT TO. I'M HERE AND I'M A SPUR FOR LIFE



Write a function that produces output according to a format.



Prototype: int _printf(const char *format, ...);

Returns: the number of characters printed (excluding the null byte used to end output to strings)

write output to stdout, the standard output stream

format is a character string. The format string is composed of zero or more directives. See man 3 printf for more detail. You need to handle the following conversion specifiers:

c

s

%

You don’t have to reproduce the buffer handling of the C library printf function

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers



1. EDUCATION IS WHEN YOU READ THE FINE PRINT. EXPERIENCE IS WHAT YOU GET IF YOU DON'T



Handle the following conversion specifiers:



d

i

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers



2. WITH A FACE LIKE MINE, I DO BETTER IN PRINT



Handle the following custom conversion specifiers:



b: the unsigned int argument is converted to binary



3. WHAT ONE HAS NOT EXPERIENCED, ONE WILL NEVER UNDERSTAND IN PRINT



Handle the following conversion specifiers:



u

o

x

X

You don’t have to handle the flag characters

You don’t have to handle field width

You don’t have to handle precision

You don’t have to handle the length modifiers



4. NOTHING IN FINE PRINT IS EVER GOOD NEWS



Use a local buffer of 1024 chars in order to call write as little as possible.



5. MY WEAKNESS IS WEARING TOO MUCH LEOPARD PRINT



6. HOW IS THE WORLD RULED AND LED TO WAR? DIPLOMATS LIE TO JOURNALISTS AND BELIEVE THESE LIES WHEN THEY SEE THEM IN PRINT



7. THE BIG PRINT GIVES AND THE SMALL PRINT TAKES AWAY



8. SARCASM IS LOST IN PRINT



9. PRINT SOME MONEY AND GIVE IT TO US FOR THE RAIN FORESTS



10. THE NEGATIVE IS THE EQUIVALENT OF THE COMPOSER'S SCORE, AND THE PRINT THE PERFORMANCE

