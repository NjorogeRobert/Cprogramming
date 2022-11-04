This Directory Explains how Switch Case Statements can be used.
NOTES ON SWITCH CASE
They are used when we have multiple options and we need to perform a different tasks

SYNTAX

switch(expression)
{
case 1:
//program statement;
//program statement;
...
break;
case 2:
//program statement;
//program statement;
...
break;
case 3:
//program statement;
//program statement;
....
break;
case n:
//program statement;
//program statement;
...
break;
default:
//program statement;
//program statement;
...
break;
}
*The expression is successfuly compared against the cases(i.e case 1, case2 ...)
*The expression must be a simple constant or constant experssion.
*If a case is found whose value is equal to the value  of the expression, the case statements following are executed.
*The Break statement signals the end of a particular case and causes execution of the switch statement to be terminated.
NOTE
Remember to include break statements in every case.
*Default is executed if the value of expression does not match any of the case value.
Look in to the project on creating a calculator using switch case to understand more.
