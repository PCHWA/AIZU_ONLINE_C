#include <stdio.h>

int main(){
    int number_set = 0;
    int a,b,c, cha;

    scanf("%d", &number_set); //データセット数設定。
    for(int i = 0; i < number_set; i++){
        scanf("%d %d %d", &a, &b, &c);
        if(a > c){
            cha = c;
            c = a;
            a = cha;
        }
        if(b > c){
            cha = c;
            c = b;
            b = cha;
        }
        if(a*a + b*b == c*c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}
//1行目にデータセット数のNが与えられる。
//長さを3辺として三角形が直角三角形である場合にはYESを、違う場合にはNOと出力する。