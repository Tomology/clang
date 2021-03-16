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
*/