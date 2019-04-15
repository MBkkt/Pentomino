#include "pentomino.h"

int main(int argc, char * argv[]) {
    printf("Решатель пентамино для произвольной фигуры!\n");
    parse_args(argc, argv);

    int field_sum = read_field();
    char const * answer;
    if (field_sum == 12 * 5) {
        find_solutions_r(0);
        answer = "Поиск успешно завешен\n";
    } else {
        answer = "Площадь фигуры != 60\n";
    }
    extern char const * delimiter;
    printf("%s%s%s", delimiter, answer, delimiter);

    fclose(stdin);
    fclose(stdout);

    return 0;
}
