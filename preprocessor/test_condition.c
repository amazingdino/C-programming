#include <stdio.h>

#define TEST(condition, ...) ((condition)? \ 
printf("Passed test: %s\n", #condition): \ 
printf(__VA_ARGS__))

int main(void)
{
    int voltage = 120;
    int max_voltage = 100;

    TEST(voltage <= max_voltage, "Voltage %d exceeds %d\n", voltage, max_voltage);
//     ((voltage <= max_voltage)?
// printf ("Passed test: %s\n", "voltage <= max_voltage"):
// printf("Voltage %d exceeds %d\n", voltage, max_voltage));



    return 0;
}