<!--
Author: chankruze (chankruze@gmail.com)
Created: Fri Nov 18 2022 21:41:48 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
-->

## What is a structure and how to define and declare a structure?

A structure is a collection of dissimilar data types.

The basic syntax for declaring a structure follows this pattern:

```cpp
struct [structure tag] {
   member definition;
   member definition;
   ...
};
```

The basic syntax for defining a structure follows this pattern:

```cpp
struct [structure tag] [variable name] = { data1, data2 };
```

**Example:**

```cpp
// declare a struct `Book`
struct Book {
  char name ;
  float price ;
  int pages ;
};

// define struct instance
struct Book b1, b2, b3;
```

Here `b1`, `b2` and `b3` are structure variable of type Book. And `name`, `price` and `pages` are called structure members. To access a structure member we need dot(`.`) operator.

It is also possible to combine the declaration with a definition like this:

```cpp
struct [structure tag] {
  member definition;
  member definition;
  ...
} [one or more structure variables];
```

**Example:**

```cpp
// declare and define a structure `Book`.
struct Book {
  char name;
  float price;
  int pages;
} b1, b2, b3;
```

A very detailed write-up [How to struct - lessons on Structures in C](https://www.microforum.cc/blogs/entry/21-how-to-struct-lessons-on-structures-in-c/) explains a lot more than just this.

## What are the advantages of using `unions`?

`Union` is a special data type that allows storing different data types in the same memory location. We can define a union with many members, but only one member can contain a value at any given time.

Unions provide an efficient way of using the same memory location for multiple purposes.

## Can we initialize unions?

Yes.

## Why can’t we compare structures?

The gaps in structures and unions caused by alignment restrictions could contain arbitrary values, and compensating for this would impose an unacceptable overhead on the equality comparison.

We should not compare structures because of the holes between the member fields of a structure.

## Define array and pointer?

**`Array`:** An array is a collection of items of same data type stored at contiguous memory locations.

**`Pointers`:** A pointer is an address variable that stores the memory address of another variable as its value.

## Define keyword.

**Keywords** are predefined, reserved words used in programming that have special meanings to the compiler. We cannot use it as a variable name, constant name, etc.

## Differentiate between `=` and `==`.

`=` is an assignment operator which assigns some value (on the right hand side) to the variable (left hand side).

`==` is an equal to operator checks whether the two given operands are equal or not.

## Differentiate between while loop and do while loop.

The difference between `while` and `do while` loop is that in the `while` loop the condition is checked prior to executing any statements whereas in the case of `do while` loop, statements are run at least once, and then the condition is verified.

## Define loop. Write the syntax of for loop.

In programming, a loop is used to repeat a block of code until the specified condition is met.

**Syntax:**

```cpp
for (init; condition; increment/decrement) {
  statement(s);
}
```

**Example:**

```cpp
for(int i = 0; i < 5; i++) {
  cout << i << endl;
}

// output
// 0
// 1
// 2
// 3
// 4
```

## Differentiate between `const` and `volatile`.

The `const` keyword specifies that the pointer cannot be modified after initialization. The pointer is protected from modification thereafter.

The `volatile` keyword specifies that the value associated with the name that follows can be modified by actions other than those in the user application.
