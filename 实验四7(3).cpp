#include <iostream>
#include <cstring> 
void f(char* st, int i)
{
    st[i] = '\0';
    std::cout << st << std::endl;
    if (i > 1) f(st, i - 1);
}

int main()
{
    char st[] = "abcd";
    f(st, 4);

    return 0;
}