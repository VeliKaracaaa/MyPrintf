<p class="has-line-data" data-line-start="0" data-line-end="11">You must submit a Makefile that will create a library named my, as well as all source files. The libmy.a library must contain the my_printf function, in addition to any other functions required to make it functional.<br>
You must recode the printf function from the C library according to the C99 standard. Your function should be prototyped like the printf function.<br>
You do not have to implement the C library printf buffer handling.<br>
You must process all printf formating flags except the following (which are optional):<br>
• floatordoubletypesmanagement,<br>
• %n flagmanagement,<br>
• “*”,&quot;’“and&quot;I”(capitali)flagsmanagement.<br>
You must add a %b formating flag, which prints unsigned numbers in a binary base.<br>
You must also add a %S formating flag, which prints a character string (like %s). However, non-printable characters (ASCII value strictly smaller than 32 or greater or equal than 127) must be represented by a back- slash to be followed by the character’s value in octal base.<br>
man 3 printf / man 3 stdarg<br>
The whole libC is forbidden, except malloc, free and write.</p>
