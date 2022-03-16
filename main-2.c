#include <stdio.h>
#include <math.h>
void area( float a, float b, float c, float s)
{
    float p, area;
    s=p/2;
    area= sqrt(s*(s-a)*(s-b)*(s-c));
    printf("%f", area);
    return 0;
}
void perimeter( float a, float b, float c)
{
   float p=a+b+c;
   if (a<=0 || b<=0 || c<=0)
   {
       printf("Error triangle has negative sides.");
   }
   else if (a>0 || b>0 || c>0)
   {
       printf("%f\n", p);
   }
   return 0;
}

int main(void)
{
    float a, b, c, s;
    printf("Enter value for a ");
    scanf("%f", &a);
    printf("Enter value for b ");
    scanf("%f", &b);
    printf("Enter value for c ");
    scanf("%f", &c);

    perimeter( a, b, c );
    area( a, b, c, s );

    return 0;
}

