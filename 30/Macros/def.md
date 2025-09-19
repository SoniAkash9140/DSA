Macros are shortcuts or placeholders that the preprocessor replaces before the code is compiled. They are defined using #define and can be used to create constants or code snippets.

Syntax - #define MACRO_NAME macro_definition

Types of Macros in C++
Macros can be classified into four types in C++:

1-Object-Like Macros ->These are used to define constant values — like replacing a word with a fixed number or text.


2-Function-Like Macros->These macros look like functions, but they are just text replacements.


3-Conditional Macros->These are used to control which parts of the code should be compiled, based on whether something is defined or not.

Predefined Macros- 1. __LINE__: This macro expands to the current line number in the source code.
2. __FILE__: This macro expands to the name of the current source file.
3. __DATE__: This macro expands to a string that represents the date of compilation.
4. __TIME__: This macro expands to a string that represents the time of compilation.