#include<stdio.h>

// 结构体可以让C语言创建新的类型出来

//例如：创建一个学生类型

struct Stu
{
	char name[20];  // 成员变量
	int age;
	double score;
};

int main()
{
	struct Stu s = { "张三",20,85.5};  // 结构体的创建和初始化
	printf("1：%s %d %lf\n", s.name, s.age, s.score);  // 结构体变量.成员变量

	struct Stu* ps = &s;    // 当结构体变量是指针时，打印的方式有两种
	printf("2:%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

	printf("3:%s %d %lf\n", ps->name, ps->age, ps->score);    // 结构体指针->成员变量名
	

	return 0;
}
