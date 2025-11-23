#include <stdio.h>
int main() 
{
    // Integer Types
    int a = 10;
    long b = 100000;
    long long c = 9223372036854775807;

    // Floating Types
    float x = 3.14;
    double y = 12.345678;
    long double z = 123.4567890123;

    // Character
    char ch = 'H';
   
    printf("int  = %d\n", a);
    printf("long = %ld\n", b);
    printf("long long = %lld\n", c);

    printf("float = %f\n", x);
    printf("double = %lf\n", y);
    printf("long double = %Lf\n", z);

    printf("char = %c\n", ch);
   
    // How_to_Take_Input 
    int Habib,Mahi;
    float f;
    char c;

    scanf("%d %f %c", &Habib,&f,&c);
    printf("%d %0.2f %c", Habib,f,c);

    return 0;
}