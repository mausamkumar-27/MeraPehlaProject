#include <stdio.h>
struct Book {
    char Name[100];
    char Author[100];
    char Publication[100];
    int price;
};
int main() {
    struct Book Physics, Chemistry,Maths;
    printf("Enter the name of the Book,Auther,Publication and price of the book physics:\n");
    gets(Physics.Name);
    gets(Physics.Author);
    gets(Physics.Publication);
    scanf("%d", &Physics.price);
    printf("Enter the name of the Book,author,Publication and price of the book chemistry:\n");
    gets(Chemistry.Name);
    gets(Chemistry.Author);
    gets(Chemistry.Publication);
    scanf("%d", &Chemistry.price);
    printf("Enter the name of the Book,author,Publication and price of the book maths:\n");
    gets(Maths.Name);
    gets(Maths.Author);
    gets(Maths.Publication);
    scanf("%d", &Maths.price);
    return 0;
}