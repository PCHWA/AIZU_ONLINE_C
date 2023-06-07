#include <stdio.h>

/*
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
*/

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
    printf("%d", count);
    return 0;
}