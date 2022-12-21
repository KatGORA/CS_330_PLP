# ***CS_330_PLP***
<img width="200" alt="Screen Shot 2022-09-19 at 1 07 15 PM" src="https://user-images.githubusercontent.com/113862278/191074245-c507001b-d28d-4e70-864a-5befdf745dad.png">

# ***Intro to C Programming language***
- "learn some history
- "some resources for beginners
- "learn to print "hello world" in C using VSCode for Mac"

## ***Some background infor regarding the origins and uses of C***
- created in the 1970s by Dennise Ritchie and Ken Thompson at Bell Labs, its actual birth being between 1972-73.
- used mainly in UNIX operating systems which at the time required a more user friendly language other than assembler to run.
- B programming language the predecessor of C was eventually retired as C became more advanced and was able to take over rewriting UNIX systems.
- C is commonly used on computer architectures for example: micro controllers, embedded systems, and super computers.
- "K&R" was a manual published by Brian Kernighan and Ritchie in 1978. the book being very well known in the community of C programmers and is often referred to as "K&R C".
#### ***Some specs...***
- C is a compiled language
- C is an imperative procedural language 
- C is a general use supporting structured programming, lexical variable scope, and recursion, with a static type system.
#### **Downloading an IDE for C**

##### 1. use this link to download [VSCode for Mac](https://code.visualstudio.com/download) once downloaded move it to your applications folder.

##### 2. open VsCode and download the extension for C.
###### your screen should looks something like this...
<img width="750" alt="Screen Shot 2022-09-19 at 12 43 18 PM" src="https://user-images.githubusercontent.com/113862278/191069474-14a150c2-fef4-4ffd-b318-f4dc8a3ba24e.png">



##### 3. to create new file press "command n" on Mac. name this file "hello.c" and save to your desktop or folder for .c files.
<img width="750" alt="Screen Shot 2022-09-19 at 12 46 32 PM" src="https://user-images.githubusercontent.com/113862278/191070072-03ff94a6-75f8-4d94-a1fc-fd328ea3e3df.png">

##### What my hello.c file contains...
###### 

	#include <stdio.h>
	int main() {
	// printf() displays the string inside quotation
	printf("Hello, World!");
	return 0;
	}
> You can use as many printf() statments but if you want to print on a new line you have to use this format with the use of \n after the first statement in quotations...
	
	printf("Hello World! \n");
  	printf("I am learning C.");

##### 4. to make comments use 
	/* text here */ format or // text here. 
<img width="750" alt="Screen Shot 2022-09-19 at 12 57 32 PM" src="https://user-images.githubusercontent.com/113862278/191072121-e5e96e10-7a90-467e-b9d9-e21fe3c5fdc5.png">

##### 5. to run press the play button in the top right corner your screen should look like this. (allow hello.c to access files so you can run it)
<img width="750" alt="Screen Shot 2022-09-19 at 12 59 44 PM" src="https://user-images.githubusercontent.com/113862278/191072479-ea98ba28-c1ed-4e83-a0b4-fb3f61a6f43d.png">

##### 6. If you chose to run "hello world" your screen should look something like this.
<img width="750" alt="Screen Shot 2022-09-19 at 1 01 00 PM" src="https://user-images.githubusercontent.com/113862278/191072739-4bb5aa41-0215-462b-a3f7-eb972827ee2a.png">


#### ***Some Resources to get you started with C.***
##### - [VSCode for Mac Download](https://code.visualstudio.com/download)
##### - [W3Schools C basics](https://www.w3schools.com/c/)
##### - [Syntax for C](https://cheatography.com/ashlyn-black/cheat-sheets/c-reference/)


# ***Naming Variables in C (identifiers)***
> "Variable naming rules in C are similar to Python in that they must be unique and follow rules such as beginning with either a letter or an underscore "_". The traditional rules in Python of not beginning with a capital letter can also be applied here out of strong tradition."



#### **Some things to keep in mind when naming variables...**
- make sure they are understandable 
- Names can contain letters, digits and underscores
- Names are case sensitive
- Names cannot contain whitespaces or special characters like !, #, %, etc.
- Reserved words (such as _int_) cannot be used as names

<sup> *example of variable naming in C... </sup>
	
	char myCatName = 'Blacktail'; //is a good variable name since the value is a cat name like the variable name

## ***Variable Types and How to Assign them in C***

### Some variable types include...
- int 
- float (_floating point_)
- char
- boolean
- strings
- array/list
- dict
>[Useful resource on data types for C](https://www.w3schools.com/c/c_data_types.php) 

<img width="200" alt= "table"
src=
# **!! important !!**
> C uses format specifiers in the following print statments in order to identify what data type is being printed. Below are some commonly used ones
- char -> '%c'
- int -> '%i' or '%d'
- float -> '%f'
- string -> '%s'


> C also uses _pointers_. _Pointers_ are a way of getting the location/address of a variable in memory. 

- "A pointer is a variable whose value is the address of another variable, i.e., direct address of the memory location"

- one can  use the following valid C data types with an * to make a pointer.

	- int  *ip is a pointer for an integer type

#### some pointer examples:
- int       -> *ip
- double    -> *dp
- float     -> *fp
- char      -> *ch

## 
	
	//using the "&" one can get the address of a variable being stored
	#include <stdio.h>
	int main(){
	int var1;
	printf("%i", &var1);
	}



#### **1. Ints**
##### ***"When creating and using ints in C the syntax below is used. Unlike Python assigning and naming a variable that uses int must be formatted as follows. Using int to declare the variable type and then followed by the name of the variable and what value will be assigned to it"***
#### **for example...**
#### In Python the syntax is as follows
 
	num = 23

#### However in C one must declare the variable type at the beginning of the statment and end with a semicolon...
	int num = 23; 
##### ***If you wanted to print the number you would also have to use a _format specifier_ such as "%d" or "%i".***
	int num = 23;
	printf("%d", num);
- #### Likewise for _float_ and _char_ you would use _"%f"_ and _"%c"_ in your _printf()_ statment.
##
	// Print variables
	printf("%d\n", num; // prints num
	printf("%f\n", myFloatNum); // prints float
	printf("%c\n", myLetter); // prints character
#### ***You can also print characters and ints together after assigning them values...***
	int myAge = 20;
	printf("I am: %d", myAge); // concatinates string in " " and the value stored in myAge

#### [_Examples of arithmatic symbols with _ints_ and _floats_ can be found in the file _arithmaticOp.c_._]
> [resource for using ints from w3schools](https://www.w3schools.com/c/c_data_types.php)

#### **2. Floats**
##### ***"using floats or floating point integers there are some similarities to how Python uses them. for example one can concatinate _floats_ and _ints_ in a print statment and in arithmatic expressions."***

	float sum = 2.5 + 3; // sum will be a float point int
	//output is 5.50000 
> [resource for float arithmatic](https://www.programiz.com/c-programming/examples/add-numbers)

#### **3.Chars**
##### ***"Stores a single character/letter/number, or ASCII values For example:***
	char letter = 'a';
	printf('%c', letter); //output is "a"

#### **4.Strings**
##### ***"using strings data type in C can be made into an array of chars like..."***
	char greetings[] = "good morning!";
	printf('%c',greetings[0]); // output good morning!
#### **5.Booleans**
##### ***"Booleans in C are similar to Python booleans in that they are either true or false. the enum function can be use on bools."***
	int main()
	{
 	bool arr[2] = {true, false};
  		return 0;
		}

> [more on booleans in C](https://www.geeksforgeeks.org/bool-in-c/)

# **Reserve Words in C**
> Like python C has reserve words that means they are built into the language and one can not use them as variable names or the computer will think there is an action being done. For example _char_, _int_, and _float_ are all reserve words. 


>"reserve words should not be made into variable names, identifiers, or abreviated." 
### here is a list of some common reserve words...

	auto    else    long 	  switch

	break   enum 	register  typedef

	case    extern  return	  union

	char	float	short	  unsigned
	
> here is a helpful resource on [reserved words in C by IBM](https://www.ibm.com/docs/en/developer-for-zos/14.2.0?topic=programs-c-reserved-keywords) 


# *will this statement compile?*
*check out the solution in willThisCompile.c*

	x = "5" + 6
> short answer no... 

for starters...

1. the variable _x_ is being assigned to the value after the addition of a _char/string_ and an _int_ and those two data types cant be added together and result in an int.
2. the variable x should be assigned a data type like _int_ or _float_.
3. the quotations should also be removed from the 5 so that it is read into the statment as an int not a chracter.
4. in C the addition of the _;_ is needed after each statment.

## **Conditional Statements and if/else-if/else statments**

##### ***like java, C has similar syntax for conditional statments.*** 
1. If statment syntax are as follows..

		if(condition){
			 //is true }

2. else if statment syntax are as follows...

		else if(condition){
			//is true
		}

3. else statment syntax is as follows...

		else{
			//is true
		}
## **Some things to know about conditional operators in C**
1. the condition in the if and else if statments is in normal parentheses "( )" and the code block statment is demilited in curly brackets "{ }". 
2. conditional statment rules for inside parenthese are like Java and use conditional opperators such as <,>,/,%.
3. logical opperators like in Java are also used in C. For example, &&, ||. 
4. the variables that are to be used in the conditional statment are instantiated before the loop. 

## **Switch Statments in C**
#### *like Java C also has switch statements and can be used in a similar way.*
###### ***A switch statement allows a variable to be tested for equality against a list of values. Each value is called a case, and the variable being switched on is checked for each switch case.(Turtorialspoint)***

	switch(expression) {
	case constant-expression  :
		statement(s);
		break; /* optional */
		
	case constant-expression  :
		statement(s);
		break; /* optional */
	
	/* you can have any number of case statements */
	default : /* Optional */
	statement(s);
	}

- in short the switch is used like a condensed if/else-if/else statement for one variable or case to check it against other conditions that may pertain to it. 

- below is another example...

		#include <stdio.h>
			int main(){

			/*local variable defined*/
			char cat = 'Blacktail'

			switch (cat){
				case 'Blacktail':
				printf("not my cat");
				break; 
			/* breaks the switch */
			/* runs the next cases if first is not executed */
			case 'Bluetail':
			case 'Whitetail':
				printf("not my cat but close!");
				break;
			 case 'Bobert':
			 	printf("woah defo not my cat???");
				break;
						}
				}
- using "continue" in a switch statment like above will work to move to thenext interation in the loop.


> [more on switch logic and syntax](https://www.javatpoint.com/c-switch)

## **Short circutting in C?**
#### *What is short circutting?...*
- short circutting in simplest of terms is when an if statment with an "or" or "and" will execute the first statment if true, regardless of the validity of the following stament. 
- some programming languages don't short circut.
- C short circuts in the code below and in the file "shortCircut.c"

	
		int x = 1;
		int y = -1;

		if (x == 50 || ++y) {
			printf("if block executed\n");
			printf("Value of y: %d", y);
			}
		else {
			printf("else block executed\n");
			printf("Value of y: %d", y);
			}
		return 0;

## **The dangling "else" issue in C?**


##### "The dangling else problem results when a programmer believes (or forgets) the code indentation and loses track of the if statement that goes with the else statement. Unless braces are used to designate the code blocks, the else statement will be associated with the last if statement used."

### **What does C do to combat this?**
- using curly braces to dilineate code and making sure only certain statments are executed. 
- making sure that all statments are properly indented. 

## **Loops and Functions in C**
### What do loops look like in C?
- C has for, while and, do while loops. 
- used for reusibility in code. 
- typically used to traverse over elements in a data structure.

### ***For Loop in C***
- much like for loops in java and python the purpose of one is for iterating through a certain block of code until a condition is met. 
- the loop control variable and condition are in the parenthesis unlike in some other languages like python. 
- for example...
 
		for(initialization;condition;incr/decr){  
			//code to be executed  
			}
- the initialization is also contained in the parens unlike in python.   
- for example...
		
			for(i=1;i<=10;i++){      
			printf("%d \n",i);      
			}     
			return 0;  
			}   
- The i is set to 1 and is incremented until it is less than or equal to 10. 
- in this case the i is the LCV.   

### **While Loop in C**
- much like a while loop in java or python in its use and implementation. 
- use of curly brackets to dilineate code blocks and statments within it that are to be executed when the condition is met. 
- the LCV in this case is set by the condition such as a counter. 
- for example... 

		while(condition) {
		statement(s);
		}


### **Do-While Loops in C**
- Java has a similar structure for this type of loop.
- the loop begins by having a block of code inside the do{ } and is controlled by a while() condition at the end. 

		do{
			/* code block to be executed */
		}
		while(condition/s);

- like a regular while loop the process terminates when the condition in parentheses is met. 

## **Functions in C**
#### ***Function Declarations***
- there are two parts to functions
	- declaration: function name,return type , and parameters 
	- definition: the actual body of the function

			void func(); // function declared

			int main(){ // 
				func();
				return 0;
			}
			void func() {
				printf("my cat blacktail is the best!");
			}

- function declarations and definitions can be before main() or below main().
- The variable return type should also be declared in befor the function name. 
- if the function takes in non-void arguments the type must be declared in the parentheses as such....

		Int sum2Num(int x, int y){
		return x + y; 
			} // will return an int 

- C does support recursion but one must be careful when and where the function needs to exit the loop. 
### **parameters**
- basic rules
	- parameters must be in the same order i=the arguments are passed in for both the declaration and the function call. 
	- the parameter data types can be different from one another if there are two or more being passed in. 


##### **Return Values**
- C does not support multiple return values directly but there are ways to get around that issue...
	- the use of pointers 
		- Pass the argument with their address and make changes in their value using pointer. So that the values get changed into the original argument. 	
	- the use of structures (object like)
		- by defining a structure with 2 vslues one can pass in a struct to a function and return 2 values since they are part of the struct. 
	- the use of arrays 
		- similar to the struct one can return an array of 2 values to bypass the issue with returning two values. 
[some more on return values](https://www.geeksforgeeks.org/how-to-return-multiple-values-from-a-function-in-c-or-cpp/#:~:text=New%20programmers%20are%20usually%20in,do%20not%20allow%20this%20directly.)

### **is C pass by reference or pass by value?**
#### **C is pass by value as it makes copies of values taht are passed through a function and then returns the copies of the original that are modified.**

#### *"C always uses 'pass by value' to pass arguments to functions (another term is 'call by value', which means the same thing), which means the code within a function cannot alter the arguments used to call the function, even if the values are changed inside the function."*
- a swap function is a good way to see if the language is pass by value or reference... 
	
					void swap(int fistVariable, int secondVariable)
			{
			// create a temporary variable to hold one of the values to perform the swap
			int tempVariable;

			tempVariable = firstVariable;  /* temporarily save the value of the first variable */
			firstVariable = secondVariable;  /* swap the vale of the first variable with the value of the second variable */
			secondVariable = tempVariable;  /* put the value of the first variable into the second variable */

			return;
			}

			int main(void)
			{
			int a = 100;
			int b = 200;

- the values remain the same after the swap function is run. This is because, under the hood, C is passing in copies of the variables (a and b in this case), and they are modified within the function, but the originals remain unaffected

- This pass by value helps avoid some side effects that include editing a variable inside the function and changing the original unbeknownst to the programmer.

### **Stack vs. Heap**
#### in C arguments, parameters and local variables are stored on the stack. In the case with C there is something called "garbage collection" or auto memory allocation that does not occure automatically in C. C uses malloc() to allocate space inmemory when data is instatiated, the user has to manually destory and make room in memory.


### **Scoping in C is Static**
#### **Static Scoping:** 
> ##### ***"In most programming languages including C, C++, and Java, variables are always statically (or lexically) scoped i.e., binding of a variable can be determined by program text and is independent of the run-time function call stack."  - Geeks for Geeks***

- in this case C is statically scoped 
- also lexical scoping in C refers to...
	- variable always refers to its top-level or global variables for example...
				
			// A C program to demonstrate static scoping.
			#include<stdio.h>
			int x = 10;

			// Called by g()
			int f()
			{
			return x;
			}

			// g() has its own variable
			// named as x and calls f()
			int g()
			{
			int x = 20;
			return f();
			}

			int main()
			{
			printf("%d", g());
			printf("\n");
			return 0;
			}
#### ***"Is C OOP (object oriented) or Procedural?"***
- C is procedural although there exists a version of C called Objective C that supports a more object oriented paradigm.
- Procedural programming: 
	- can be defined as a programming model which is derived from structured programming, based upon the concept of calling procedure. (Geeks for Geeks)
	[GeeksforGeeks](https://www.geeksforgeeks.org/differences-between-procedural-and-object-oriented-programming/)
	- program itself is organized into small sections or functions
- therefore there are not objects in C but rather "structs" that behave in a similar fashion. 
![structs vs. classes](https://slideplayer.com/slide/6837896/23/images/46/Differences+Between+Classes+And+Structs.jpg)

- structs should use the same principles for variable name creation and not include special characters otehr than "_" and should also generally follow strong tradition in having lowercase starting and followed by alphanumeric. 
- C therefore does not also include support for inheritence since that is a property of object oriented programming. 

### ***__str__() function in C?***
#### **scanf() and printf()**

- not exactly like calling str but still formats string and numeric data. 
- scanf() function is used to read character, string, numeric data from keyboard
- Then, user enters a string and this value is assigned to the variable “str” and then displayed.

		//example of formatting
		printf("Enter any character \n");
   		scanf("%c", &ch);

