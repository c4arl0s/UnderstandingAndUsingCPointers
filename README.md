# UnderstandingAndUsingCPointers

# Understanding And Using C Pointers

1. [Introduction]()
2. [Dynamic Memory Management in C]()
3. [Pointers and Functions]()
4. [Pointers and Arrays]()
5. [Pointers and Strings]()
6. [Pointers and Structures.]()
7. [Security Issues and the Improper Use of Pointers]()
8. [Odds and Ends]()


# Understanding And Using C Pointers

1. [Introduction]()
  - [Pointers and Memory ]()
     + [Why You Should Become Proficient with Pointers ]()
     + [Declaring Pointers ]()
     + [How to Read a Declaration ]()
     + [Address of Operator ]()
     + [Displaying Pointer Values ]()
     + [Dereferencing a Pointer Using the Indirection Operator ]()
     + [Pointers to Functions ]()
     + [The Concept of Null]()
  - [Pointer Size and Types ]()
     + [Memory Models ]()
     + [Predefined Pointer-Related Types ]()
  - [Pointer Operators ]()
     + [Pointer Arithmetic ]()
     + [Comparing Pointers]()
  - [Common Uses of Pointers ]()
     + [Multiple Levels of Indirection ]()
     + [Constants and Pointers]()
  - [Summary]()
2. [Dynamic Memory Management in C]()
  - [Dynamic Memory Allocation]()
     + [Memory Leaks]()
  - [Dynamic Memory Allocation Functions ]()
     + [Using the malloc Functions]()
     + [using the calloc Function]()
     + [Using the realloc Function]()
     + [The alloca Function and Variable Length Arrays ]()
  - [Deallocating Memory Using the free Function ]()
     + [Assigning NULL to a Freed Pointer ]()
     + [Double Free ]()
     + [The Heap and System Memory ]()
     + [Freeing Memory upon Program Termination ]()
  - [Dangling Pointers ]()
     + [Dangling Pointer Examples ]()
     + [Dealing with Dangling Pointers ]()
     + [Debug Version Support for Detecting Memory Leaks ]()
     + [Dynamic Memory Allocation Technologies ]()
     + [Garbage Collection in C ]()
     + [Resource Acquisition Is Initialization ]()
     + [Using Exception Handlers 56 Summary]()
3. [Pointers and Functions]()
  - [Program Stack and Heap ]()
     + [Program Stack ]()
     + [Organization of a Stack Frame]()
  - [Passing and Returning by Pointer ]()
     + [Passing Data Using a Pointer ]()
     + [Passing Data by Value ]()
     + [Passing a Pointer to a Constant ]()
     + [Returning a Pointer ]()
     + [Pointers to Local Data ]()
     + [Passing Null Pointers ]()
     + [Passing a Pointer to a Pointer]()
  - [Function Pointers ]()
     + [Declaring Function Pointers ]()
     + [Using a Function Pointer ]()
     + [Passing Function Pointers ]()
     + [Returning Function Pointers ]()
     + [Using an Array of Function Pointers]()
     + [Comparing Function Pointers ]()
     + [Casting Function Pointers]()
  - [Summary]()
4. [Pointers and Arrays]()
  - [Quick Review of Arrays ]()
     + [One-Dimensional Arrays]()
     + [Two-Dimensional Arrays]()
     + [Multidimensional Arrays ]()
  - [Pointer Notation and Arrays]()
     + [Differences Between Arrays and Pointers]()
  - [Using malloc to Create a One-Dimensional Array ]()
  - [Using the realloc Function to Resize an Array ]()
  - [Passing a One-Dimensional Array]()
     + [Using Array Notation]()
     + [Using Pointer Notation]()
  - [Using a One-Dimensional Array of Pointers ]()
  - [Pointers and Multidimensional Arrays]()
  - [Passing a Multidimensional Array]()
  - [Dynamically Allocating a Two-Dimensional Array]()
     + [Allocating Potentially Noncontiguous Memory]()
     + [Allocating Contiguous Memory ]()
  - [Jagged Arrays and Pointers Summary]()
5. [Pointers and Strings]()
  - [String Fundamentals ]()
     + [String Declaration ]()
     + [The String Literal Pool ]()
     + [String Initialization]()
  - [Standard String Operations ]()
     + [Comparing Strings ]()
     + [Copying Strings ]()
     + [Concatenating Strings]()
  - [Passing Strings]()
     + [Passing a Simple String]()
     + [Passing a Pointer to a Constant char ]()
     + [Passing a String to Be Initialized ]()
     + [Passing Arguments to an Application]()
  - [Returning Strings]()
     + [Returning the Address of a Literal]()
     + [Returning the Address of Dynamically Allocated Memory]()
  - [Function Pointers and Strings Summary]()
6. [Pointers and Structures.]()
  - [Introduction]()
     + [How Memory Is Allocated for a Structure]()
  - [Structure Deallocation Issues]()
  - [Avoiding malloc/free Overhead ]()
  - [Using Pointers to Support Data Structures ]()
     + [Single-Linked List ]()
     + [Using Pointers to Support a Queue ]()
     + [Using Pointers to Support a Stack ]()
     + [Using Pointers to Support a Tree ]()
  - [Summary 158]()
7. [Security Issues and the Improper Use of Pointers]()
  - [Pointer Declaration and Initialization ]()
     + [Improper Pointer Declaration ]()
     + [Failure to Initialize a Pointer Before It Is Used ]()
     + [Dealing with Uninitialized Pointers]()
  - [Pointer Usage Issues ]()
     + [Test for NULL ]()
     + [Misuse of the Dereference Operator ]()
     + [Dangling Pointers ]()
     + [Accessing Memory Outside the Bounds of an Array ]()
     + [Calculating the Array Size Incorrectly ]()
     + [Misusing the sizeof Operator ]()
     + [Always Match Pointer Types ]()
     + [Bounded Pointers ]()
     + [String Security Issues ]()
     + [Pointer Arithmetic and Structures ]()
     + [Function Pointer Issues]()
  - [Memory Deallocation Issues ]()
     + [Double Free ]()
     + [Clearing Sensitive Data]()
  - [Using Static Analysis Tools ]()
     + [Summary]()
8. [Odds and Ends]()
  - [Casting Pointers ]()
     + [Accessing a Special Purpose Address ]()
     + [Accessing a Port ]()
     + [Accessing Memory using DMA ]()
     + [Determining the Endianness of a Machine]()
  - [Aliasing, Strict Aliasing, and the restrict Keyword]()
     + [Using a Union to Represent a Value in Multiple Ways]()
     + [Strict Aliasing]()
     + [Using the restrict Keyword ]()
     + [Threads and Pointers]()
     + [Sharing Pointers Between Threads]()
     + [Using Function Pointers to Support Callbacks ]()
  - [Object-Oriented Techniques]()
     + [Creating and Using an Opaque Pointer]()
     + [Polymorphism in C Summary]()

# 1. [Introduction]()

A solid understanding of pointers and the ability to effectively use them separates a novice C programmer from a more experienced one. Pointers pervade the language and provide much of its flexibility. They provide important support for dynamic memory allocation, are closely tied to array notation, and when used to point to function, add another dimension to flow control in a program.

Pointers have long been a stumbling block in learning C. The basic concept of a pointer is simple: it is a variable that stores the address of a memory location. The concept however, quickly becomes complicated when we start applying pointer operators and try to discern their often cryptic notations. But this does not have to be the case. If we start simple and establish a firm foundation, then the advanced uses of pointers are not hard to follow and apply.

The key to comprehending pointers is understanding how memory is managed in a C program. After all, pointers contain addresses in memory. If we don't understand how memory is organized and managed, it is difficult to understand how pointers work. To address this concern, the organization of memory is illustrated whenever it is useful to explain a pointer concept. Once you have a firm grasp of memory and the ways it can be organized, understanding pointers becomes a lot easier.
#   - [Pointers and Memory ]()

When a C program is compiled, it works with three types of memory:

 - **Static/Global**

Statically declared variables are allocated to this type of memory. Global variables also use this region of memory. They are allocated when the program starts and remain in existence until the program terminates. While all functions have access to global variables, the scope of the static variables is restricted to their defining function.

 - **Automatic**

These variables are declared within a function and are created when a function is called. Their scope is restricted to the function, and their lifetime is limited to the time the function is executing.

- **Dynamic**
 
Memory is allocated from the heap and can be released as necessary. A pointer references the allocated memory. The scope is limited to the pointer of pointers that reference the memory. It exists until it is released. This is the focus of Chapter 2.

Table 1-1
| 				  | Scope																	    | Lifetime                       |
| --------- | ----------------------------------------- | -------------------------------|
| global		| The entire file														| The lifetime of the application|
| Static		| The function it is declared within				| The lifetime of the application|
| Automatic	| The function it is declared within				| While the function is executing|
| Dynamic		| Determined by the pointers that reference	| Until the memory is freed			 |

Understanding these types of memory will enable you to better understand how pointers work. Most pointers are used to manipulate data in memory. Understanding how memory is partitioned and organized will clarify how pointers manipulate memory.

A pointer variable contains the address of another variable, object, or function. An object is considered to be memory allocated using one of the memory allocation functions, such as the **malloc** function. A pointer is normally declared to be of a specific type depending on what it points to, such as a pointer to a char. The object may be any C data type such an integer, character, string, or structure. However, nothing inherent in a pointer indicates what type of data the pointer is referencing. A pointer only contains the address.

#      + [Why You Should Become Proficient with Pointers ]()
#      + [Declaring Pointers ]()
#      + [How to Read a Declaration ]()
#      + [Address of Operator ]()
#      + [Displaying Pointer Values ]()
#      + [Dereferencing a Pointer Using the Indirection Operator ]()
#      + [Pointers to Functions ]()
#      + [The Concept of Null]()
#   - [Pointer Size and Types ]()
#      + [Memory Models ]()

The introduction of 64-bit machines has made more apparent the differences in the size of memory allocated for data types. With different machines and compilers come different options for allocating space to C primitive data types. A common notation used to describe different data models is summarized below:

  I In L Ln LL LLn P Pn

Each capital letter corresponds to an integer, long, or pointer. The lowercase letters represent the number of bits allocated for the data type. Table 1-3 summarizes these models, where the number is the size in bits

![Screen Shot 2020-06-13 at 13 26 44](https://user-images.githubusercontent.com/24994818/84576329-8c9d7980-ad79-11ea-936b-915ddc8dd454.png)

The model depends on the operating system and compiler. More than one model may be supported on the same operating system; this is often controlled through compiler options.

#      + [Predefined Pointer-Related Types ]()
#   - [Pointer Operators ]()
#      + [Pointer Arithmetic ]()
#      + [Comparing Pointers]()
#   - [Common Uses of Pointers ]()
#      + [Multiple Levels of Indirection ]()

Pointers can use different levels of indirection. It is not uncommon to see a variable declared as a pointer to pointer, sometimes called a **double pointer**. A good example of this is when program arguments are passed to the **main** function suing the traditionally named argc and argv parameters. This is discussed in more detail in Chapter 5.

The example below uses three arrays. The first array is an array of strings used to hold a list of book titles:

```c
char *titles[] = { "A tale of two cities", "Wuthering Heights", "Don Quixote", "Odyssey", "Moby-Dick", "Hamlet", "Gulliver's Travels"};
```

Two additional arrays are provided whose purpose is to maintain a list of the "best books" and English Books. Instead of holding copies of the titles, they will hold the address of a title in the **titles** array. Both arrays will need to be declared as a pointer to a pointer to a char. The array's elements will hold the addresses of the titles array's elements. This will avoid having to duplicate memory for each title and results in a single location for titles. If a title needs to be changed, then the change will only have to be performed in one location.

The two arrays are declared below. Each array element contains a pointer that points to a second pointer to char:

```c
char **bestBooks[3];
char **englishBooks[4];
```

The two arrays are initialized and one of their elements is displayed, as shown below. In the assignment statements, the value of the righthand side is calculated by applying the subscripts first, followed by the address-operator. For example, the second statement assigns the address of the fourth element of titles to the second element of bestBooks:

```c
bestBooks[0] = &titles[0];
bestBooks[1] = &titles[3];
bestBooks[2] = $titles[5];

englishBooks[0] = &titles[0];
englishBooks[1] = &titles[1];
englishBooks[2] = &titles[5];
englishBooks[3] = &titles[6];

printf("%s \n", *englishBooks[1]); // Wuthering Heights
```

![Screen Shot 2020-06-13 at 13 58 03](https://user-images.githubusercontent.com/24994818/84576930-ec961f00-ad7d-11ea-83f6-0043badc41f0.png)

Using multiple levels of indirection provides additional flexibility in how code can be written and used. Certain types of operations would otherwise be more difficult. In this example, if the address of a title changes, it will only require modification to the **title array**. We would not have to modify the other arrays-

There is not an inherent limit on the number of levels of indirection possible. Of course, using too many levels of indirection can be confusing and hard to maintain.

#      + [Constants and Pointers]()
#   - [Summary]()
# 2. [Dynamic Memory Management in C]()
#   - [Dynamic Memory Allocation]()
#      + [Memory Leaks]()
#   - [Dynamic Memory Allocation Functions ]()
#      + [Using the malloc Functions]()
#      + [using the calloc Function]()
#      + [Using the realloc Function]()
#      + [The alloca Function and Variable Length Arrays ]()
#   - [Deallocating Memory Using the free Function ]()
#      + [Assigning NULL to a Freed Pointer ]()
#      + [Double Free ]()
#      + [The Heap and System Memory ]()
#      + [Freeing Memory upon Program Termination ]()
#   - [Dangling Pointers ]()
#      + [Dangling Pointer Examples ]()
#      + [Dealing with Dangling Pointers ]()
#      + [Debug Version Support for Detecting Memory Leaks ]()
#      + [Dynamic Memory Allocation Technologies ]()
#      + [Garbage Collection in C ]()
#      + [Resource Acquisition Is Initialization ]()
#      + [Using Exception Handlers 56 Summary]()
# 3. [Pointers and Functions]()

Pointers contribute immensely to a function's capability. They allow data to be passed and modified by a function. Complex data can also be passed and returned from a function in the form of a pointer to a structure. When pointers hold the address of a function, they provide a means of dynamically control a program's execution flow. In this chapter, we will explore the power of pointers as used with functions and learn how to use them to solve many real-world problems.

To understand functions and their use with pointers, a good understanding of the program stack is needed. The program stack is used by most modern block-structured languages, such as C, to support the execution of functions. **When a function is invoked, its stack frame is created and then pushed onto the program stack. When function returns, its stack frame is popped off of the program stack.

When working with functions, there are two areas where pointers becoe useful. The first is when we pass a pointer to a function. This allows the function to modify data. This allows the function to modify data referenced by the pointer and to pass blocks of information more efficiently.

The second area is declaring a pointer to a function. In essece, function notation is pointer notation. The function's name evaluates to the address of the function, and the function's parameter are passed to the function. As we will see, function pointers provide additional capability to control the execution flow of a program.

In this section, we will establish the foundation for understanding and working with functions and pointers. Because of the pervasiveness of functions and pointers, this foundation should serve you well.


#   - [Program Stack and Heap ]()
#      + [Program Stack ]()
#      + [Organization of a Stack Frame]()
#   - [Passing and Returning by Pointer ]()
#      + [Passing Data Using a Pointer ]()
#      + [Passing Data by Value ]()
#      + [Passing a Pointer to a Constant ]()
#      + [Returning a Pointer ]()
#      + [Pointers to Local Data ]()
#      + [Passing Null Pointers ]()
#      + [Passing a Pointer to a Pointer]()
#   - [Function Pointers ]()
#      + [Declaring Function Pointers ]()
#      + [Using a Function Pointer ]()
#      + [Passing Function Pointers ]()
#      + [Returning Function Pointers ]()
#      + [Using an Array of Function Pointers]()
#      + [Comparing Function Pointers ]()
#      + [Casting Function Pointers]()
#   - [Summary]()
# 4. [Pointers and Arrays]()
#   - [Quick Review of Arrays ]()
#      + [One-Dimensional Arrays]()
#      + [Two-Dimensional Arrays]()
#      + [Multidimensional Arrays ]()
#   - [Pointer Notation and Arrays]()
#      + [Differences Between Arrays and Pointers]()
#   - [Using malloc to Create a One-Dimensional Array ]()
#   - [Using the realloc Function to Resize an Array ]()
#   - [Passing a One-Dimensional Array]()
#      + [Using Array Notation]()
#      + [Using Pointer Notation]()
#   - [Using a One-Dimensional Array of Pointers ]()
#   - [Pointers and Multidimensional Arrays]()
#   - [Passing a Multidimensional Array]()
#   - [Dynamically Allocating a Two-Dimensional Array]()
#      + [Allocating Potentially Noncontiguous Memory]()
#      + [Allocating Contiguous Memory ]()
#   - [Jagged Arrays and Pointers Summary]()
# 5. [Pointers and Strings]()
#   - [String Fundamentals ]()
#      + [String Declaration ]()
#      + [The String Literal Pool ]()
#      + [String Initialization]()
#   - [Standard String Operations ]()
#      + [Comparing Strings ]()
#      + [Copying Strings ]()
#      + [Concatenating Strings]()
#   - [Passing Strings]()
#      + [Passing a Simple String]()
#      + [Passing a Pointer to a Constant char ]()
#      + [Passing a String to Be Initialized ]()
#      + [Passing Arguments to an Application]()
#   - [Returning Strings]()
#      + [Returning the Address of a Literal]()
#      + [Returning the Address of Dynamically Allocated Memory]()
#   - [Function Pointers and Strings Summary]()
# 6. [Pointers and Structures.]()
#   - [Introduction]()
#      + [How Memory Is Allocated for a Structure]()
#   - [Structure Deallocation Issues]()
#   - [Avoiding malloc/free Overhead ]()
#   - [Using Pointers to Support Data Structures ]()
#      + [Single-Linked List ]()
#      + [Using Pointers to Support a Queue ]()
#      + [Using Pointers to Support a Stack ]()
#      + [Using Pointers to Support a Tree ]()
#   - [Summary 158]()
# 7. [Security Issues and the Improper Use of Pointers]()
#   - [Pointer Declaration and Initialization ]()
#      + [Improper Pointer Declaration ]()
#      + [Failure to Initialize a Pointer Before It Is Used ]()
#      + [Dealing with Uninitialized Pointers]()
#   - [Pointer Usage Issues ]()
#      + [Test for NULL ]()
#      + [Misuse of the Dereference Operator ]()
#      + [Dangling Pointers ]()
#      + [Accessing Memory Outside the Bounds of an Array ]()
#      + [Calculating the Array Size Incorrectly ]()
#      + [Misusing the sizeof Operator ]()
#      + [Always Match Pointer Types ]()
#      + [Bounded Pointers ]()
#      + [String Security Issues ]()
#      + [Pointer Arithmetic and Structures ]()
#      + [Function Pointer Issues]()
#   - [Memory Deallocation Issues ]()
#      + [Double Free ]()
#      + [Clearing Sensitive Data]()
#   - [Using Static Analysis Tools ]()
#      + [Summary]()
# 8. [Odds and Ends]()
#   - [Casting Pointers ]()
#      + [Accessing a Special Purpose Address ]()
#      + [Accessing a Port ]()
#      + [Accessing Memory using DMA ]()
#      + [Determining the Endianness of a Machine]()
#   - [Aliasing, Strict Aliasing, and the restrict Keyword]()
#      + [Using a Union to Represent a Value in Multiple Ways]()
#      + [Strict Aliasing]()
#      + [Using the restrict Keyword ]()
#      + [Threads and Pointers]()
#      + [Sharing Pointers Between Threads]()
#      + [Using Function Pointers to Support Callbacks ]()
#   - [Object-Oriented Techniques]()
#      + [Creating and Using an Opaque Pointer]()
#      + [Polymorphism in C Summary]()



