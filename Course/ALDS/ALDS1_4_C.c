#include <stdio.h>
#include <string.h>


#define HASH_TABLE_LEN 1046527


static char Hash_table[HASH_TABLE_LEN][13];


int getChar(char ch)
{
    if (ch == 'A')
        return 1;
    else if (ch == 'C')
        return 2;
    else if (ch == 'G')
        return 3;
    else if (ch == 'T')
        return 4;

    return 0;
}

int getKey(char str[])
{
    int str_convert = 0;
    int p = 1;
    int str_len = (int)strlen(str);

    for (int i = 0; i < str_len; i++)
    {
        str_convert += p * (getChar(str[i]));
        p *= 5;
    }
    return str_convert;
}

int hash_func1(int key)
{
    return key % HASH_TABLE_LEN;
}

int hash_func2(int key)
{
    return (1 + (key % (HASH_TABLE_LEN - 1)));
}

int hash_func(int key, int i)
{
    return ((hash_func1(key) + i * hash_func2(key)) % HASH_TABLE_LEN);
}

int find(char str[])
{
    int key, hash_index;
    key = getKey(str);
    for (int i = 0;; i++)
    {
        hash_index = hash_func(key, i);

        if (strcmp(Hash_table[hash_index], str) == 0)
            return 1;
        else if (Hash_table[hash_index][0] == '\0')
            return 0;
    }
}

int insert(char str[])
{
    int key;
    int i;
    int hash_index;

    key = getKey(str);

    for (i = 0;; i++)
    {
        hash_index = (hash_func1(key) + i * hash_func2(key)) % HASH_TABLE_LEN;
        if (strcmp(Hash_table[hash_index], str) == 0)
            return 1;
        else if (strlen(Hash_table[hash_index]) == 0)
        {
            strcpy(Hash_table[hash_index], str);
            return 0;
        }
    }

    for (i = 0;; i++)
    {
        hash_index = (hash_func1(key) + i * hash_func2(key)) % HASH_TABLE_LEN;
        if (strcmp(Hash_table[hash_index], str) == 0)
            return 1;
        else if (strlen(Hash_table[hash_index]) == 0)
        {
            strcpy(Hash_table[hash_index], str);
            return 0;
        }
    }
    return 0;
}

int main()
{
    int i, N;
    char str[12];
    char order[7];

    scanf("%d", &N);
    for (i = 0; i < N; i++)
    {
        scanf("%s %s", order, str);
        if (order[0] == 'i')
            insert(str);
        else
        {
            if (find(str))
                printf("yes\n");
            else
                printf("no\n");
        }
    }
    return 0;
}