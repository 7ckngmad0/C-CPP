#include <stdio.h>

int main() {
    printf("Normal text\n");
    printf("\033[1m **Bold text** \033[0m\n");
    printf("\033[3m _Italic text_ \033[0m\n");
    printf("\033[4m __Underline text__ \033[0m\n");
    printf("\033[7m Reverse text \033[0m\n");
    printf("\033[31m Red foreground \033[0m\n");
    printf("\033[41m Red background \033[0m\n");
    printf("\033[33m Green foreground \033[42m Green background \033[0m\n");
    printf("\033[30m Black foreground \033[40m Black background \033[0m\n");
    printf("\033[34m Blue foreground \033[44m Blue background \033[0m\n");
    printf("\033[35m Magenta foreground \033[45m Magenta background \033[0m\n");
    printf("\033[36m Cyan foreground \033[46m Cyan background \033[0m\n");
    printf("\033[37m White foreground \033[47m White background \033[0m\n");
    return 0;
}