#include<stdio.h>
void main()
{
    char a;
    printf("enter a alphabet\n");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U')
        printf("its a vowel");
    else if((a>'a'&&a<='z'||a>'A'&&a<='Z')&&a!=('a'&&'e'&&'i'&&'o'&&'u'&&'A'&&'E'&&'I'&&'O'&&'U'))
        printf("consonent");
    else
        printf("neither vowel nor consonent");
}
