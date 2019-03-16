#include <stdio.h>
// int hashFunc(int entry, int addressQt){
//     int result;
//     result = entry%addressQt;
//     return result;
// }

int main(){
    int testCases, addrQt, keysQt;
    int key, column, test;
    scanf("%d", &testCases);

    for(int i=0; i < testCases; i++){
        scanf("%d", &addrQt);
        scanf("%d", &keysQt);

        int keys[keysQt];
        int table[addrQt][keysQt];

        for (int j = 0; j < keysQt; j++){
            scanf("%d", &key);
            keys[j] = key;
        }

        for(int j = 0; j < addrQt; j++){
            column = 0;
            for(int k = 0; k < keysQt; k++){
                // test = hashFunc(keys[k], addrQt);
                test = keys[k]%addrQt;
                if(test == j){
                    table[j][column] = keys[k];
                }
                else{
                    table[j][column] = 0;
                }
                column++;
            }
        }
        for(int j = 0; j<addrQt; j++){
            printf("%d -> ", j);
            for(int k = 0; k < keysQt; k++){
                if(table[j][k]){
                    printf("%d -> ", table[j][k]);
                }
            }
            printf("\\\n");
        }
        printf("\n");
    }

    return 0;
}
