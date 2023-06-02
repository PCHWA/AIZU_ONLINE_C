#include <stdio.h>


int main(){
    int number_input[10] ;
    int array_len = sizeof(number_input) / sizeof(int);

    for(int c = 0; c< array_len; c++){
        int num;
        scanf("%d", &num);   
        number_input[c] = num;
    }

    for(int i= 0; i<array_len; i++){
        for(int j = i+1; j<array_len; j++){
            if(number_input[i] < number_input[j]){
                int teump = number_input[i];
                number_input[i] = number_input[j];
                number_input[j] = teump;
            }
        }
    }

    for(int i = 0; i<3; i++){
        printf("%d \n", number_input[i]);
    }
    /*
    不正解であるが、出力は同じである。しかし、違う理由はfor文を使わなければ大丈夫。
    正解
    printf("%d\n%d\n%d\n", number_input[0], number_input[1], number_input[2]);
    */
    return 0;
}

/*
int main(){
    int number_input[10] = {1819, 2003, 876, 2840, 1723, 1673, 3776, 2848, 1592, 922};
    int array_len = sizeof(number_input) / sizeof(int);
    for(int i= 0; i<array_len; i++){
        for(int j = i+1; j<array_len; j++){
            if(number_input[i] < number_input[j]){
                int teump = number_input[i];
                number_input[i] = number_input[j];
                number_input[j] = teump;
            }
        }
    }

    for(int i = 0; i<3; i++){
        printf("%d \n", number_input[i]);
    }
    return 0;
}
*/