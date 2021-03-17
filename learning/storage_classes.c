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

*/