#include <stdio.h>
struct student{
    int Id;
    int Marks;
    char fav_char;
};
int main(){
    struct student Mausam,Harry,Ritika;
    Mausam.Id=1;
    Harry.Id=2;
    Ritika.Id=3;
    Mausam.Marks=430;
    Harry.Marks=440;
    Ritika.Marks=420;
    printf("Mausam got %d marks\n",Mausam.Marks);
    printf("Ritika got %d marks\n",Ritika.Marks);
    return 0;

}
