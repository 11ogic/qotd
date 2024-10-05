#include <stdio.h>

typedef struct {
    char *name;
    int age;
    double weight;
} Dog;

char *say(const Dog *d) {
    static char info[100];
    sprintf(info, "name = %s \nage = %d \nweight = %2lf", (*d).name, (*d).age, (*d).weight);
    return info;
}

char *modifySay(Dog *d) {
    static char info[100];
    (*d).name = "Samoyed";
    sprintf(info, "name = %s \nage = %d \nweight = %2lf", (*d).name, (*d).age, (*d).weight);
    return info;
}

int main() {
    Dog d = { .name = "husky", .age = 18, .weight = 20.2 };

    char *info = say(&d);

    printf("%s", info);
    printf("\n\nname = %s \nage = %d \nweight = %2lf", d.name, d.age, d.weight);

    return 0;
}