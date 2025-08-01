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

## Api Usage
transform a file 
```c
    // transform a file 
    const char *file_path = "void test(){\n"
                            "    printf(\"Hello, World!\\n\");\n"
                            "}\n";
    char *result = mdeclare_transform_content(file_path);
```

transform a dir 
```c
    // transform a dir 
    const char *dir_path = "src/api/transform_content";
    const char *output = "target.h";
    const char *starts_with = NULL;
    const char *ends_with = ".c";
    char *result = transform_dir(dir_path, output, starts_with, ends_with);
```



### Build from scrath

```bash
 darwin run_blueprint build/ --mode folder amalgamation_build alpine_static_build windowsi32_build windowsi64_build rpm_static_build debian_static_build --provider podman
```