#include <stdio.h>
struct student{
    char name[50];
    unsigned int student_id;
    char address[100];
};

int main()
{
    struct student s[20];
    for (int i=0;i<20;i++){
        printf("enter the details of student %d\n",i+1);
        printf("enter the name:");
        scanf("%s",s[i].name);
        printf("enter the student id:");
        scanf("%d",&s[i].student_id);
        printf("enter the address :\n");
        scanf("%s",s[i].address);
    }
    printf("\n");

    printf("name\t\t student_id\t address\n");
    for(int i=0;i<20;i++){
        printf("%s\t\t %u\t\t %s\n",s[i].name,s[i].student_id,s[i].address);
    }
    printf("\n");
    return 0;
}
