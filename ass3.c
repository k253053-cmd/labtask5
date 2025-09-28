#include <stdio.h>
#include <math.h>
int main(){
/*Write a program to solve a quadratic equation ax² + bx + c = 0. Input a, b, c. - Use to calculate
the discriminant.
- If discriminant &gt; 0 → two real roots.
- If discriminant = 0 → one real root.
- If discriminant &lt; 0 → imaginary roots
*/
float a = 0.0f;
float b = 0.0f;
float c = 0.0f;
float discriminant=0.0f;

printf("your equation is in format ax^2 +bx +c\n");
printf("enter a: \n");
scanf("%f",&a);

printf("enter b: \n");
scanf("%f",&b);

printf("enter c: \n");
scanf("%f",&c);

discriminant = pow(b,2)-4*a*c;
printf("discriminant is: %.3f",discriminant);
    return 0;
}
