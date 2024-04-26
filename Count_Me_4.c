#include<stdio.h>
#include<string.h>

int main(){

    char n[10001];
    scanf("%s", n);
    int count[26] = {0};
    for (int i = 0; i < strlen(n); i++)
    {
        int val= n[i] - 'a';
        count[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i]!= 0){
            printf("%c - %d\n", i+'a', count[i]);
        }
    }

    return 0;
}