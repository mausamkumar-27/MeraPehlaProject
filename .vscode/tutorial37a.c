#include <stdio.h>
#include <string.h>
struct student{
    int Id;
    int Marks;
    char fav_char;
   // char_name; ye array nahi jo tera 1 se zyaada character lega
   char name[100];  //ye array hai jo 1 se zyaada character ko lega 
};
int main(){
    struct student Mausam,Harry,Ritika;
    Mausam.Id=1;
    Harry.Id=2;
    Ritika.Id=3;
    Mausam.Marks=430;
    Harry.Marks=440;
    Ritika.Marks=420;
    strcpy(Harry.name,"Harry potter student of year");
    printf("Mausam got %d marks\n",Mausam.Marks);
    printf("Ritika got %d marks\n",Ritika.Marks);
    printf("Harry's name is:%s\n",Harry.name);
    return 0;

}
