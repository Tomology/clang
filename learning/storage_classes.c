/*
    STORAGE CLASSES

    Storage classes are used to describe the features of a variable/function. 
    These features basically include the scope, visibility and life-time which helps us trace the existence of a particular
    variable during the runtime of a program.

    The C language uses 4 storage classes

    SOTRAGE SPECIFIER       STORAGE         INITIAL VALUE       SCOPE               LIFE

    auto                    stack           Garbage             Within block        End of block
    extern                  Data segment    Zero                Global              Till end of program
                                                                Multiple files      
    static                  Data segment    Zero                Within block        Till end of program
    register                CPU register    Garbage             Within block        End of block


    1) AUTO

    This is the default storage class for all the variables declared inside a function or a block, so the auto keyword is rarely
    used while writing programs in the C language. Auto variables can only be accessed within the block/function they
    have been declared and not outside them (which defined their scope). 
    They can be accessed outside their scope as well using the concept of pointers, by poiting to the exact memory location
    where the variable resides. They are assigned a garbage value by default whenever they are declared.

    2) EXTERN

    Extern storage class simply tells us that the variable is defined elsewhere and within the same block where it is used. Basically,
    the value is assigned to it in a different block and this can be overwritten/changed in a different block as well. An extern 
    variable is a global variable initialized with a legal value where it is declared in order to be used elsewhere. It can be
    accessed within any function/block. Also, a normal global variable can be made extern as well by placing the 'extern' keyword
    before its declaration/definition in any function/block. This basically signifies that we are not initializing a new variable
    but instead we are using/accessing the global variable only. The main purpose of using extern variables is that they can be
    accessed between two different files which are part of a large program. 

    3) STATIC

    The static storage class instructs the compiler to keep a local variable in existence during the life-time of the program instead
    of creating and destroying it each time it comes into and goes out of scope. Therefore, making local variables static allows them 
    to maintain their values between function calls. By default, they are assigned the value 0 by the compiler.
    The static modifier may also be applied to global variables. When this is done, it causes that variable's scope to be restricted to 
    the file in which it is declared.

    

*/