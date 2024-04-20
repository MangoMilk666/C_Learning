#include <stdio.h>
#include <string.h>
////通过指针更换元素
struct Stu
{
    char name[15]; 
    int age;
};

void print_stu(struct Stu s)
{
    printf("%s %d\n", s.name, s.age); //访问结构体内部
}

void set_stu(struct Stu* ps)
{
    strcpy(ps->name, "李四"); //通过指针更换元素
    ps->age = 28;
}

int main()
{
    struct Stu s = {"张三", 20};
    print_stu(s);
    set_stu(&s);
    print_stu(s);
    return 0;
    
}