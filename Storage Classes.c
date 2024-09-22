#include <stdio.h>

// auto storage class
void autoVar() {
    auto int x = 10; // auto is the default storage class for local variables
    printf("Auto storage class: %d\n", x);
}

// register storage class
void registerVar() {
    register int x = 10; // register storage class is used to store variables in CPU registers
    printf("Register storage class: %d\n", x);
}

// static storage class
void staticVar() {
    static int x = 9; // static storage class retains the value between function calls
    x++;
    printf("Static storage class: %d\n", x);
}

// extern storage class
int extern_x = 10; // extern storage class is used to access global variables

void externVar() {
    printf("Extern storage class: %d\n", extern_x);
    
}
int main()
{
autoVar();
registerVar();
staticVar();
externVar();
return 0;

}
