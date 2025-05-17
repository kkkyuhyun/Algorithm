첫째줄에 별 **5개** 두번째줄 양끝 별 **2개** 세번째줄 양끝 별**2개** 네번째 줄 별**2개** 다섯번째줄에 별 **5개**가 출력되돌고 C++코드를 짜줘(단, 함수를 이용하여)

```cpp
#include <stdio.h>

// 별을 출력하는 함수
void printStars(int n) {
    for (int i = 0; i < n; ++i) {
        printf("*");
    }
    printf("\n");
}

int main() {
    // 첫째줄
    printStars(5);

    // 두번째줄
    printf("**\n");

    // 세번째줄
    printf("**\n");

    // 네번째줄
    printf("**\n");

    // 다섯번째줄
    printStars(5);

    return 0;
}
```