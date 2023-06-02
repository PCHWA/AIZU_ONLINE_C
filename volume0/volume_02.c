#include <stdio.h>

int main(){
    int a = 0;
    int b = 0;
    
    //EOFはファイルの終わり (End Of File) を表す。または、「入力ストリームから、もうこれ以上、入力が無い」、あるいは「入出力においてエラーが発生した」ことを示す値
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