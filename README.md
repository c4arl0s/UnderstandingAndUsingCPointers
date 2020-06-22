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
     + [Virtual Memory and Pointers]()
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
#      + [Virtual Memory and Pointers]()

To further complicate displaying addresses, the pointer addresses displayed on a **virtual operating system** are not likely to be the real physical memory addresses. A virtual operating system allows a program to be split across the machine's physical address space. An application is split into **pages/frames**. These pages represent areas of main memory. The pages of the application are allocated to different, potentially noncontiguous areas of memory and may not all be in memory at the same time. If the operating system needs memory currently held by a page, the memory may be swapped out to secondary storage and then reloaded at a later time, frequently at a different memory location. These capabilities provide a virtual operating system with considerable flexibility in how it manages memory.

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

The heap typically uses operating system functions to manage its memory. The heap's size may be fixed when the program is created, or it may be allowed to grow. However, the heap manager does not necessarily return memory to the operating system when the **free** function is called. The deallocated memory is simply made available for subsequent use by the application. Thus, when a program allocates and the frees up memory, the deallocation of memory is not normally reflected in the application memory usage as seen from the operating system perspective.

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

The program stack and the heap are important runtime elements of C. In this section, we will carefully examine the structure and use of **the program stack and program heap**. We will also look at the stack frame's structure, which holds local variables.

---
Note
Local Variables are also called automatic variables. They are always allocated to a stack frame.
---

#      + [Program Stack ]()

**The program stack is an area of memory that supports the execution of functions and is normally shared with the heap**. That is, they share the same region of memory. The program stack tends to occupy the lower part of this region, while the heap uses the upper part.

The **program stack** holds **stack frames**, sometimes called **activation records** or **activation frames**. Stack frames hold the parameters and local variables of a function. The heap manages dynamic memory and is discussed in "Dynamic Memory Allocation" on page 34.

Figure 3-1 illustrates how the stack and heap are organized conceptually. This illustration is based on the following code sequence.

```c
void function2() {
 Object *var1 = ...;
 int var2;
 printf("Program Stack Example\n");
}

void function1() {
 Object *var3 = ...;
 function2();
}

int main() {
 int var4;
 function1();
}
```

![Screen Shot 2020-06-13 at 17 38 54](https://user-images.githubusercontent.com/24994818/84580452-c7fd6f80-ad9c-11ea-89aa-3a011c27ae50.png)

As functions are called, their stack frames are pushed onto the stack and the stack grows "upward". When a function terminates, its stack frame is popped off the program stack. The memory used by the stack frame is not cleared and may eventually be overridden by another stack frame when it is pushed onto the program stack.

When memory is dinamically allocated, it comes from the heap, which tends to grow "downword". The heap will fragment as memory is allocated and then deallocated. Although the heap tends to grow downward, this is a general direction. Memory can be alllocated from anywhere within the heap.

#      + [Organization of a Stack Frame]()

A stack frame consist of a several elements, including:

**Return address**: The address in the program where the function is to return upon completion.

**Storage for local data**: Memory allocated for local variables.

**Storage for parameters**: Memory allocated for the function's parameters.

**Stack and base pointers**: Pointers used by the runtime system to manage the stack.

The typical C programmer will not be concerned about **the stack** and **base pointers** used in support of a **stack frame**. However, understanding what they are and how they are used provides a more in-depth understanding of the program stack.

A stack pointer usually points to the top of he stack. A stack base pointer (frame pointer) is often present and points to an address within the stack frame, such as the return address. This pointer assists in accessing the stack frame's elements. Neither of these pointers are C pointers. They are address used by the runtime system to manage the program stack. If the runtime system is implemented in C, then these pointers may be real C pointers.

Consider the creation of a stack frame for the following function. This function has passed an array of integers and an integer representing the array's size. Three printf statements are used to display the parameter's and the local variable's addresses:

```c
#include <stdio.h>

float average(int *array, int size);

int main(int argc, const char * argv[]) {
    int array[3] = {1, 7, 3};
    average(array, 3);
    return 0;
}

float average(int *arrayPointer, int size)
{
 int sum;
 printf("arrayPointer: %u \n", (unsigned int)&arrayPointer);
 printf("size: %u \n", (unsigned int)&size);
 printf("sum: %u \n", (unsigned int)&sum);

 for(int index=0; index<size; index++) {
     sum += arrayPointer[index];
 }
 return (sum * 1.0f) / size;
}
```

When executed, you get output similar to the following:

```console
arrayPointer: 4022334584 
size: 4022334580 
sum: 4022334576 
Program ended with exit code: 0
```

The gap in the addresses between parameters and the local variables is due to other elements of the stack frame used by the runtime system to manage the stack.

When the stack frame is created, the parameters are pushed onto the frame in the opposite order of their declaration, followed by the local variables. This is illustrated in figure 3-2. In this case, size is pushed followed by array. Typically, the return address for the function call is pushed next, followed by the local variables. They are pushed in the opposite order in which they were listed.

Conceptually, the stack in this example grows "up". However, the stack's frame parameters and local variables and new stack frames are added at lower memory addresses. The actual direction the stack grows is implementation-specific.

The variable index used in the for statement is not included as part of this stack frame. C treats block statement as **"mini"** functions and will push and pop them as appropiate. In this case, the block statement is pushed onto the program stack above the average stack frame wen it is executed and the popped off when it is done.

While the precise addresses can vary, the order usually will not. This is important to understand, as it helps explain how memory is allocated and establishes the relative order of the parameters and variables. This can be useful when debugging pointer problems. If you are not aware of how the stack frame is allocated, the assignment of addresses may not make sense.

As stack frames are pushed onto the program stack, the system may run out of memory. This condition is called **stack overflow** and generally results in the program terminating abnormally. Keep in mind that each thread is typically allocated its own program stack.

![Screen Shot 2020-06-15 at 12 32 00](https://user-images.githubusercontent.com/24994818/84688034-3c065780-af04-11ea-85df-e7da11ed9280.png)

This can lead to potential conflicts if one or more threads access the same object in memory. This will be addressed in "Sharing Pointers Between Threads" on page 186.

```
High Addresses ---> .----------------------.
                    |      Environment     |
                    |----------------------|
                    |                      |   Functions and variable are declared
                    |         STACK        |   on the stack.
base pointer ->     | - - - - - - - - - - -|
                    |           |          |
                    |           v          |
                    :                      :
                    .                      .   The stack grows down into unused space
                    .         Empty        .   while the heap grows up. 
                    .                      .
                    .                      .   (other memory maps do occur here, such 
                    .                      .    as dynamic libraries, and different memory
                    :                      :    allocate)
                    |           ^          |
                    |           |          |
 brk point ->       | - - - - - - - - - - -|   Dynamic memory is declared on the heap
                    |          HEAP        |
                    |                      |
                    |----------------------|
                    |          BSS         |   Uninitialized data (BSS)
                    |----------------------|   
                    |          Data        |   Initialized data (DS)
                    |----------------------|
                    |          Text        |   Binary code
Low Addresses ----> '----------------------'
```

#   - [Passing and Returning by Pointer ]()
#      + [Passing Data Using a Pointer ]()
#      + [Passing Data by Value ]()
#      + [Passing a Pointer to a Constant ]()
#      + [Returning a Pointer ]()
#      + [Pointers to Local Data ]()
#      + [Passing Null Pointers ]()
#      + [Passing a Pointer to a Pointer]()

When a pointer is passed to a function, it is **passed by value**. If we want to modify the original pointer and not the copy of the pointer, **we need to pass it as a pointer to a pointer. In the following example, a pointer to an integer array is passed, which will be assigned memory and initialized. The function will return the allocated memory back through the first parameter. In the function, we first allocate memory and then initialize it. The address of this allocated memory is intended to be assigned to a pointer to an int. To modify this pointer in the calling function, we need t pass the pointer's address. Thus, the parameter is declared as a pointer to a pointer to an **int**. To modify this pointer in the calling function, we need to pas the pointer's address. Thus, the parameter is declared as a pointer to a pointer to an **int**. In the calling function, we need to pass the pointer's address. Thus, the parameter is declared as a pointer to a pointer to an int. In the calling function, we need to pass the address of the pointer:

```c
void allocateArray(int **array, int size, int value) {
 *array = (int *)malloc(size * sizeof(int));
 if(*array != NULL) {
  for(int index=0; index<size; index++) {
   *(*array+index) = value;
  }
 }
}
```

The function can be tested using the following code:

```c
int *vector = NULL
allocateArray(&vector, 5, 45);
```

```console
0x100534cc0 
Program ended with exit code: 0
```

The first parameter to allocateArray is passed as a pointer to a pointer to an integer. When we call the function, we need to pass a value of this type. This is done by passing the address of vector. The address returned by malloc is assigned to array. Derreferencing a pointer to a pointer to an integer results in a pointer to an integer. Because this is the address of vector, we modify vector.

Te memory allocation is illustrated in Figure 3-7. The Before image shows the stack's state after **malloc** returns andthe array is initializeded. Likewise, the after image shows te stack's state after the function returns.

> To easily identify problems such as memory leaks, draw a diagram of memory allocation.

![Screen Shot 2020-06-18 at 8 01 58](https://user-images.githubusercontent.com/24994818/85023197-09de3b00-b13a-11ea-9a57-9d4ebd2b9522.png)


#   - [Function Pointers ]()

**A function pointer is a pointer that holds the address of a function**. This lecture is necessary after reading the benefit of blocks in Objective-C programming. The ability of pointers to point functions turns out to be an important and useful feature of C. This provides us with another way of executing functions in an order that may not be known at compile time and without using conditional statements.

One concern regarding the use of function pointers **is a potentially slower running program**. The processor may not be able to use branch prediction in conjunction with **pipelining**. **Branch prediction is a technique whereby the processor will **guess** which multiple execution sequences will be executed**. **Pipelining is a hardware technology commonly used to improve processor performance and is achieved by overlapping instruction execution. In this scheme, the procesor wll start processing the branch it believes will be executed. If the processor successfully predicts the correct branch, then the instructions currently in the pipeline will not have to be discarted.

This slowdown may or may not be realized. The use of function pointers in situations such as table lookup can mitigate performance issues. In this section, we will learn how to declare function pointers, see how they can be used to support alternate execution paths, and explore techniques that exploit their potential.

**The use of function pointers is well-known to passing a function as parameter to other functions**.

#      + [Declaring Function Pointers ]()
#      + [Using a Function Pointer ]()
#      + [Passing Function Pointers ]()
#      + [Returning Function Pointers ]()
#      + [Using an Array of Function Pointers]()
#      + [Comparing Function Pointers ]()
#      + [Casting Function Pointers]()
#   - [Summary]()
# 4. [Pointers and Arrays]()

An **array** is a fundamental **data structure** built into C. A through understanding of arrays and their use is necessary to develop effective applications. Misunderstandings of array and pointers usage can result in hard-to-find errors and less than optimal performance in applications. Array and pointer notations are closely related to each other and can frequently be used interchangeably in the right context.

A common misconception is that an array and pointer are completely interchangeable. **An array name is not a pointer** Although an array nae can be treated as a pointer at times and array notation can be ued with pointers, they are distinct and cannot always be used in place of each other. Understanding this difference will help you avoid incorrect use of these notations. For example, although the name of an array used by itself will return the array's address, we cannot use the name by itself as the targt of an assignment.

Arrays support many parts of an application and can be single or multidimensional. In this chapter, we will address the fundamental aspects of arrays as they relate to pointers. to provide you with a deep understanding of arrays and the various ways they can be manipulated with pointers. You will see their use in more advanced contexts throughout the book.

We start with quick review of arrays and then examine the similarities and differences between array and pointers notation. Arrays can be created using **malloc** type functions. These functions provide more flexibility that that afforded by traditional array declarations. We will see the **realloc** function can be used to change the amount of memory allocated for an array.

Dynamically allocating memory for an array can present challenges, especially when we are dealing with arrays with two or more dimensions, as we have to ensure that the array is allocated in contiguous memory.

We will also explore problems that can ocurr when passing and returning arrays. In most situations, the array's size must be passed so the array can be properly handled in a function. There is nothing inherent in an array's internal representation that determines its lenght. If we do not passthe lenght, the function has no standard means of knowing where the array ends. We will also examine how to created **jagged arrays in C**, although they are infrequently used. A jagged array is a two dimensional array where each row may have a different numbr o columns.

To demonstrate these concepts, we will use a vector for single-dimensional arrays and matrix for two-dimensional arrays. Vectors and matrices have found extensive use in many areas, including analyzing electromagnetic fields, weatger prediction, and in mathematics.


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



