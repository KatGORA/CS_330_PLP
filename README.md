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

# ***Reserve Words in C***
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
