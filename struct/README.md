STRUCTURE

![Structurein c](https://user-images.githubusercontent.com/113252231/212066763-24ecd674-6cc6-4bc0-af78-58695653f021.png)



Structures in C programming are a group of variables of different data types represented by a single name: :)

we use the keyword struct to create a structure.
struct is short form for structure data type
SYNTAX
you can write a structure in two ways
METHOD 1
struct struct_name name_variable{datatype member1; datatype mambern;...}
METHOD 2
struct struct_name{
datatype member1;
datatypemembern;
...
}name_variable;
NOTE 
Use method two for better readabilty for your code
How To Use Data Members of a Structure Using A Struct Variable
To do this we use the dot sign".";
var_name.member1;
var_name.membern;

How to Assign Values:
var_name.member1 = 2;
var_name.membern = n;


Task structurarray.c
The task shows an example of how arrays can be used using a structure as elements.
FOR EXAMPLE
the array in the task(s[3])  is an array of structure that has three elements.
These elements are structures of the same type Rabbit.
...
