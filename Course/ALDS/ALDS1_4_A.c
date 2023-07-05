#include <stdio.h>

/*
-----------１回目の考え-----------------------------------
int main(){
    for(int i= 0; i < 2; i++){ //変数自体の接近する方法が間違っている。
        int numbers_seach;
        scanf("%d", &numbers_seach);
        for(int j = 0; j < numbers_seach; j++){
            //配列を利用して、各変数に保存するけど、その長さによって保存する。
        }
    }
    return 0;
}
 
-----------２回目の考え------------------------------------
int main(){
    int n, q, count;
    scanf("%d", &n);
    int n_list[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&n_list[i]);
    }
    scanf("%d", &q);
    int q_list[q];
    for(int j = 0; j < q; j++){
        scanf("%d", &q_list[j]);
    }

    for(int a = 0; a < n; a++){
        for(int b = 0; b < q; b++){
            if(n_list[a] == q_list[b]){
                count += 1;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}

------------------3回目---------------------------
int search(int A[], int n, int key){
    int i =0;
    A[n] = key;
    while (A[i] != key)
        i++;
    return (i != n);
}

int main(){
    int i, n, A[10000+1], q, key, count;
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    scanf("%d", &q);
    for(i = 0; i<q; i++){
        scanf("%d", &key);
        if(search(A, n, key))
            count++;
    }
    printf("%d\n", count);
    return 0;
}
*/


int search(int A[], int n, int key)
{
    int i = 0;
    A[n] = key;

    while (A[i] != key)
        i++;
    return (i != n);
}

int main(void)
{
    int n, q, i, key;
    int S[10000 + 1];
    int count = 0;

    scanf("%d", &n);
    for (i = 0; i < n; i++)
        scanf("%d", &S[i]);

    scanf("%d", &q);
    for (i = 0; i < q; i++)
    {
        scanf("%d", &key);
        if (search(S, n, key))
            count++;
    }
    printf("%d\n", count);

    return 0;
}