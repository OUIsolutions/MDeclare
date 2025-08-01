mdeclare transform C definitions into C headers

before:
```c
// calc.c - Basic arithmetic operations
int add(int a, int b) {
    return a + b;
}

// subtract two integers
int subtract(int a, int b) {
    return a - b;
}
// perfor m basic arithmetic operations
int multiply(int a, int b) {
    return a * b;
}
int divide(int a, int b) {
    if (b == 0) {
        fprintf(stderr, "Error: Division by zero.\n");
        return 0; // or handle error appropriately
    }
    return a / b;
}
```
run:
```bash
mdeclare calc.c  -o calc.h
```
after:
```c
// calc.c - Basic arithmetic operations
int add(int a, int b) ;

// subtract two integers
int subtract(int a, int b) ;
// perfor m basic arithmetic operations
int multiply(int a, int b) ;
int divide(int a, int b) ;
```

## Cli Usage

 creates a single definition
```bash
mdeclare src/api/transform_content/api_define.transform_content.c  -o teste.c
```



### Build from scrath

```bash
 darwin run_blueprint build/ --mode folder amalgamation_build alpine_static_build windowsi32_build windowsi64_build rpm_static_build debian_static_build --provider podman
```