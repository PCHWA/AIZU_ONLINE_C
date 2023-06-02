#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    
    while (scanf("%d %d", &a, &b) != EOF){
        int result = a+b;
        int digit = 0;
        while(result !=0){
            result /= 10;
            ++digit;
        }
        printf("%d\n", digit);
    }
    return 0;
}
