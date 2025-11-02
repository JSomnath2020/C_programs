#include <stdio.h>
int main() {
int int_var = 42;
float float_var = 3.14f;
char char_var = 'A';
double double_var = 123.456;
int *int_ptr = &int_var;
float *float_ptr = &float_var;
char *char_ptr = &char_var;
double *double_ptr = &double_var;
printf("--- Direct Access ---\n");
printf("Integer: Value = %d, Address = %p\n", int_var, (void *)&int_var);
printf("Float: Value = %f, Address = %p\n", float_var, (void *)&float_var);
printf("Char: Value = %c, Address = %p\n", char_var, (void *)&char_var);
printf("Double: Value = %lf, Address = %p\n", double_var, (void *)&double_var);
printf("\n--- Access via Pointers ---\n");
printf("Integer: Value = %d, Address = %p\n", *int_ptr, (void *)int_ptr);
printf("Float: Value = %f, Address = %p\n", *float_ptr, (void *)float_ptr);
printf("Char: Value = %c, Address = %p\n", *char_ptr, (void *)char_ptr);
printf("Double: Value = %lf, Address = %p\n", *double_ptr, (void *)double_ptr);
return 0;
}
