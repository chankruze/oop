<!--
Author: chankruze (chankruze@gmail.com)
Created: Mon Dec 05 2022 07:26:30 GMT+0530 (India Standard Time)

Copyright (c) geekofia 2022 and beyond
-->

# Inheritance

It is the process by which object of a class inherits/acquires the properties of the object of another class.

The class from which properties are inherited is called `base class` and the class to which properties are inherited is called derived class.

## classifications

1. Single Inheritance (A -> B)
1. Multiple Inheritance (A, B -> C)
1. Multilevel Inheritance (A -> B & B -> C)
1. Hierarchical Inheritance (A -> B & A -> C)
1. Hybrid Inheritance (A -> B & B, C -> D)

## Base-Class Access Control

When a class inherits another class the members of the base class become the members of the derived class.

```cpp
class <derived-class>: <access> <base-class-name> {
    // data members
    // member functions
}
```

The base class access specifier must be public, protected or private.

**Defaults:**

1. `private` if the derived class is a `class`.
1. `public` if the derived class is a `struct`.

When the access specifier for a base class is:

1. public:
    public (base) -> public (derived)
    protected (base) -> protected (derived)

1. protected:
    public (base) -> protected (derived)
    protected (base) -> protected (derived)

1. private:
    public (base) -> private (derived)
    protected (base) -> private (derived)

In all cases the private elements of the base class remains private to the base class and are not accessible by the derived class.

