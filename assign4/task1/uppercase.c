
#include <stdio.h>
int main()
{
    int state=0;
    char c;
    c=getchar();
while(c!='\n')
{
if((c>='A'&&c<='Z')||(c>='a'&&c<='z'))
{
    state=1;
putchar(c);
}
else
{
if(state==1)
{
    putchar('\n');

}
state=0;
}
c=getchar();

}
return 0;
}