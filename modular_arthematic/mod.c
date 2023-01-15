// Linkers
#include<stdio.h>

#define MAX 1000

void rem_set_find();
void rem_pairset_find();

void main()
{
    rem_pairset_find();
}

void rem_set_find()
{
    int b, m;
    printf("a = b mod m\n");
    printf("Enter b ,m :");
    scanf("%d %d", &b, &m);

    printf("\nRemset is\n");

    int x =( b % m), j = 0;
    for (int i = 0; i < MAX; i++)
    {
        if((i % m) == x)
        {
            printf("%d, ",i);
            ++j;
            if (j == 10)
            {
                printf("\n");
                j = 0;
            }
        }
        
    }
    
}

void rem_pairset_find()
{
    int b1, b2, m1, m2;
    printf("X = b1 mod m1\n");
    printf("Enter b1 ,m1 :");
    scanf("%d %d", &b1, &m1);

    printf("\nX = b2 mod m2\n");
    printf("Enter b2 ,m2 :");
    scanf("%d %d", &b2, &m2);

    printf("\nRemset is\n");

    int x = (b1 % m1), y = (b2 % m2);
    for (int i = 0; i < MAX; i++)
    {
        if ((i % m1) == x && (i % m2) == y)
        {
            printf("%d, ", i);
        }
        
    }
    
}