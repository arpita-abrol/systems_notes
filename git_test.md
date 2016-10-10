---

##Friday, October 7 void * and struct by Arpita Abrol

Tech news: [Google introduces a new open source font for everyone](https://developers.googleblog.com/2016/10/an-open-source-font-system-for-everyone.html)

**Aim:** structured programming

**Notes**

void *

* The dynamic memory function deals in arbitrary blocks of memory. There is no regular tpe associated with the block
* `void *` is considered to be a pointer to a 1 byte block of memory, so pointer aritmetic will be based on 1
* Whenever possible, you should typecast `void *` values to the appropriate types
    * ex:

```c
    int *ip;
    ip = (int *)malloc( 20 * sizeof(int) );
```


struct
* A collection of values in a single data type
* syntax example:

```c
    struct { int z; char x; } s;
```

    * Here, s is a variable of type `struct { int a; char x; }`
* It is a **single** type, like an int or a double- inside of s, there is a char _and_ an int
* The space allocated is 'padded' - there is sometimes extra space allocated, but there is always at least enough space
* Typically, structs are written as:

```c
    struct {
    	   int a;
	   char x;
    } s;
```

	* Example:

```c
    struct foo { int a; char x; };
```

	* Here, foo is a prototype for this kind of struct, to be used later

```c
    struct foo s;
```

	* This creates a variable `s` of the `struct foo type`
* To assign variables, use the . operator

```c
    s.a = 10;
```

	This assigns `int a` of variable `s` as 10
* The . operator is also used to access a value from a struct
	* `.` binds before `*`
* To access data from a struct pointer, you can either:

```c
    struct foo *p
    p = &s;
    (*p).x;
    //OR
    p->x
```
