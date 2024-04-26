#include<stdio.h>
#include<string.h>

int main(){

    char s[100];
    scanf("%s",s);

    int count[26]= {0}; //As there are 26 characters in English
    for (int i = 0; i < strlen(s); i++)
    {
        int val= s[i] - 'a'; // subtracting 'a' or 97 from each character to sync it with index numbers 0, 1, 2 ....
        count[val]++;
    }

    // In alphabetic order
    for (int i = 0; i < 26; i++)
    {
        if(count[i] != 0){
            printf("%c comes %d times\n",  i+ 'a', count[i]);
        }
    }
    printf("\n\n");

    //In order of the string
    for (int i = 0; i < strlen(s); i++)
    {
        int val = s[i] - 'a';
        if(count[val]!= 0){
            printf("%c comes %d times\n", s[i], count[val]);
        }
        count[val] = 0;
    }
    
    return 0;
}