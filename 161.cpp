#include <stdio.h>
int main(){
    char ch;
    while((ch=getchar())!=EOF)
    {
        getchar();
        if(ch=='a'||ch=='A'||ch=='e'||ch=='E'||ch=='i'||ch=='I'||ch=='o'||ch=='O'||ch=='u'||ch=='U')
        {
            printf("Vowel\n");
        }
        else{
            printf("Consonant\n");
        }
    }
    return 0;
}
