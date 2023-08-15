#### Programming: Principles and Practices using C++ by Bjourne Stroustrup ####

#### Done by Carlos Amaral ####

#### Chapter 3 ####

1. "What is meant by the term prompt?"
By prompt, it means that the user is being asked for input.

2. "Which operator do you use to read into a variable?"
The operator used to read into a variable is cin.

3. "If you want the user to input an integer value into your program for a variable named number, what are two lines of
code you could write to ask the user to do it and to input the value into your program?"
cout << "Please, input an integer";
cin >> number;

4. "What is \n called and what purpose does it serve?"
"\n" is called newline. It will put the output code into a new line.

5. "What terminates input into a string?"
An input is terminated into a string by a whitespace, that is a space, newline and tab characters.

6. "What terminates input into an integer?"
An input is terminated into an integer also by a whitespace.

7. 7. "How would you write
cout << "Hello, ";
cout << first_name;
cout << "!\n";  as a single line of code?"
It would be: cout << "Hello, " << first_name << "!\n";

8. "What is an object?"
An object is a region of memory with a type that specifies what kind of information can be placed in it.

9. "What is a literal?"
A literal is a representation of values from different types. As an example, the literal 12, represents
the integer value "twelve". "Afternoon" represents the character string value Afternoon, and true represents
the Boolean value true.

10. "What kinds of literals are there?"
There are: integer literals, floating-point-literals, boolean literals, character literals, string literals and the pointer literal.

11. "What is a variable?"
A variable is a named object. It has a specific type that determines what can be put into the object.

12. "What are typical sizes for a char, an int, and a double?"
A char has a typical size of 1 byte. An int has 4 bytes and a double has 8 bytes.

13. "What measures do we use for the size of small entities in memory, such as ints and strings?"
For small entities in memory, we use bytes which are 8 bits.

14. "What is the difference between = and ==?"
"=" is an assignment operator, while the double equal "==" is a comparision operator.

15. "What is a definition?"
A definition is a statement that introduces a new name into a program and sets aside memory for a variable.

16. "What is an initialization and how does it differ from an assignment?"
An initialization always finds the variable empty and gives a variable its initial value. 
On the other hand an assignment gives a variable a new value. (and it must clear the old value from the variable, before putting the new one).

17. "What is string concatenation and how do you make it work in C++?"
String concatenation is the process of joining or combining two different strings. 
As an example, if s1 and s2 are strings, we can write s1 + s2 to make a new string where the characters from s1 are followed by the characters 
from s2. Having the s1 string the value of "Hello" and s2 the value of "World", s1 + s2 will be "HelloWorld".

18. "Which of the following are legal names in C++? If a name is not legal, why not?
This_little_pig    latest thing     MiniMineMine     This_1_is fine
the_$12_method     number           2_For_1_special     _this_is_ok
correct? "

Let's start by the legal names: "number", "MineMineMine"...
Ilegal names: "This_little_pig" - The leading capital is reserved for defined types only.
"latest thing" - It contains a space and it can't.
"This_l_is fine" - It again contains a space.
"the_$12_method" - Contains a "$", which is ilegal for a char
"2_For_1_special" - It contains a leading number.
"_this_is_ok" - It has a leading underscore. It is reserved for system entities.
"correct?" - It has a special character "?".

19. "Give five examples of legal names that you shouldn’t use because they are likely to cause confusion."
For example, names such as "legal0", "legal1", too many variations of the same name, as "name", "nameAll", "nameOne", etc...

20. "What are some good rules for choosing names?"
In C++ names should begin with lowercase. We should choose clear, meaningful and simple to read names. 
Names should also indicate what type of value we're dealing with.

21. "What is type safety and why is it important?"
Type safety is a set of rules in C++, which are called type. Type safety means that we use types correctly
and, therefore, avoid unsafe casts and unions.

22. "Why can conversion from double to int be a bad thing?"
Conversions from double to int are a bad thing, because we're trying to put a value into an int object that may be too small to hold it.
As we said before, doubles are larger in memory size than ints. (8 bytes vs 4 bytes)

23. "Define a rule to help decide if a conversion from one type to another is safe or unsafe."
We should avoid narrowing conversions.

