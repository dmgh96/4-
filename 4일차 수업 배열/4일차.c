#include <stdio.h>

int main() {

    /*
    //1. 선어 후 초기화
    int std_scores[5];

    for (int i = 0; i < 5; i++) {
        std_scores[i] = i + 1;
    }


    //2.선언과 동시에 초기화
    int std_scores2[5] = { 10,20,30,40,50 }; //중괄호를 사용!

    for (int i = 0; i < sizeof(arrStr); i++) {
        printf("%c", arrStr[i]);
    }

    */
/*
    int i, j, k;
     int array[3][3][3] = {
        { {1,  2,  3},  {4,  5,  6},  {7,  8,  9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    // 3차원 배열 데이터 출력
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                printf("%3d", array[i][j][k]);
            }
            printf("\n");
        }
        printf("-------------------\n");
    }
*/
    //1. 선언 후 초기화

    /*
    int arr[2][2];
    arr[0][0] = 1;
    arr[0][1] = 2;
    arr[1][0] = 3;
    arr[1][1] = 4;

    //2. 선언과 동시에 초기화
    int arr2[2][2] = { 1, 2, 3, 4 };
    int arr3[2][2] = { 1, 2 };
    int arr4[4][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12} };
*/
   /*
    int array[3][3][3] = {
        { {1,  2,  3},  {4,  5,  6},  {7,  8,  9}},
        {{10, 11, 12}, {13, 14, 15}, {16, 17, 18}},
        {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}
    };

    int x, y, z;

    for (x = 0; x < 3; x++) {
        for (y = 0; y < 3; y++) {
            for (z = 0; z < 3; z++) {
                printf("array[%d][%d][%d] = %d\n", x, y, z, array[x][y][z]);
            }
        }
    }
    */
 /*
    char arrStr[5];
    arrStr[0] = 'H';
    arrStr[1] = 'E';
    arrStr[2] = 'L';
    arrStr[3] = 'L';
    arrStr[4] = 'O';

    for (int i = 0; i < sizeof(arrStr); i++) {
        printf("%c", arrStr[i]);
    }
*/

    /*
    char str[100] = "HELLO";
    //char str2[100] = { 'H','E','L','L','O' };
    //char* str3 = "HELLO"; 나중에 포인터할때 ㄱ

    int x = 0;
    for (; x < 100; x++) {
        if (str[x] == '\0')  break;
    }
    
    printf("문자열의 길이는 : %d\n\n", x);

    str[2] = '\0';
    printf("%s\n", str);

    //문자열의 마지막은 null(0)

    */

    char origin[] = "hello world";
    char dest1[20] = "aaaaaaaaaaaaaaaaaa";
    char dest2[20] = "bbbbbbbbbbbbbbbbbb";
    char dest3[20] = "cccccccccccccccccc";
    char dest4[20] = "dddddddddddddddddd";

    strcpy(dest1, origin);
    printf("%s\n\n", dest1);
    
    return 0;

}