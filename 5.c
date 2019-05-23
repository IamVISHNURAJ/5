 #include <stdio.h>
int main()
{
    double n1, n2, n3;
    scanf("%lf %lf %lf", &n1, &n2, &n3);
    if( n1>=n2 && n1>=n3)
     printf("%lf", n1);
    else if (n2>=n1 && n2>=n3)
        printf("%lf", n2);
    else
        printf("%lf", n3);
    return 0;
}
