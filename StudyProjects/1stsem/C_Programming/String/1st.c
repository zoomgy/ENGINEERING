#include <stdio.h>
#include <string.h>
int main(){
    char a[100];
    scanf("%[^\n]s",a);
    printf("%s",strupr(a));
    return 0;
}