#include<stdio.h>
void India()
{
    printf("I am indian\n");

return ;
}

void Britain()
{
printf("You are british\n");
India();
return ;
}

void Austrialia()
{
    printf("You are austrilian\n");


Britain();
     return;
        }


int main()
{

 Austrialia();

 return 0;
}
