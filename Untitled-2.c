#include<stdio.h>
struct student
{
    int usn;
    char name[10];
    int mobileno;

};
int main()
{
  struct student s1;
  printf("enter the usn:\n");
  scanf("%d",&s1.usn);
  printf("enter the name:\n");
  scanf("%s",s1.name);
  printf("enter the nmobile no:\n");
  scanf("%d",&s1.mobileno);
  printf("name:%s\n",s1.name);
  printf("usn:%d\n",s1.usn);
  printf("mobile number:%d\n",s1.mobileno);
  return 0;
}