 #include <stdio.h>
int main()
{
    int array[5];
    int count = 0;
    int *p = array;

    printf("Enter 5 numbers:\n");
    for (int i = 0; i < 5; i++)
        scanf("%d", &array[i]);

    for (int i = 0; i < 5; i++)
    {
        if (*(p + i) % 2 == 0)
            count++;
    }

    printf("Even numbers count = %d", count);
    return 0;
}

