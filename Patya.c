#include <stdio.h>
#include <string.h>
int main() {
    char s[500000], s1[500000];
    int res;
    scanf("%s%s", s, s1);
    res = strcasecmp(s, s1);
    if (res < 0) {
        printf("-1");
    } else if (res > 0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}
