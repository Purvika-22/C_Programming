enum StudentType
{
    PRI_MARY = 1,
    SECONDARY 
}; // enum values in uppercase
// PRIMARY - performance based on grade
// SECONDARY - performance based on %
// both of them not to be applied at a time bcoz the student can be of either primary or secondary
// so now UNION comes to the picture
union performance
{
    char grade;
    double percentage;
};

typedef struct Student
{
    int rollno;
    int marks[2];
    char name[30];
    enum StudentType stype;
    union performance pf;
    void (*p)(struct Student);
    // u can't write functions inside the structures
    // feature is not available in C u can write it in OOP
    // if you have declare a pointer here then it will become linked list
    // struct Student *s;
} stud;

void display(stud );
void callAvg(stud );