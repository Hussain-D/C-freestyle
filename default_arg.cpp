//Things to Remember

//    Once we provide a default value for a parameter, all subsequent parameters must also have default values. For example,

    // Invalid
    void add(int a, int b = 3, int c, int d);

    // Invalid
    void add(int a, int b = 3, int c, int d = 4);

    // Valid
    void add(int a, int c, int b = 3, int d = 4);

//    If we are defining the default arguments in the function definition instead of the function prototype, then the function must be defined before the function call.

    // Invalid code

    int main() {
        // function call
        display();
    }

    void display(char c = '*', int count = 5) {
        // code
    }

