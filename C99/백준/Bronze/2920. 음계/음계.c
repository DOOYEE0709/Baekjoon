#include <stdio.h>
#define MAX 8

int main(){
    int arr[MAX];

    for(int i = 0; i < MAX; i++){
        scanf("%d", &arr[i]);
    }

    int num = arr[0];

    if(num == 1){
        for(int i = 1; i < MAX; i++){
            num++;
            if(num != arr[i]){
                break;
            }

            if(i == 7){
                printf("ascending\n");

                return 0;
            }
        }
    } else if(num == 8){
        for(int i = 1; i < MAX; i++){
            num--;
            if(num != arr[i]){
                break;
            } else if(i == 7){
                printf("descending\n");

                return 0;
            }
        }
    }

    printf("mixed");

    return 0;
}
