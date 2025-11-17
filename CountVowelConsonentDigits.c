#include <stdio.h>
#include <string.h>
int main() {
    char s[100]; int v=0,c=0,d=0,i;
    scanf("%s", s);
    for(i=0;s[i]!='';i++) {
        if((s[i]>='A'&&s[i]<='Z')||(s[i]>='a'&&s[i]<='z')) {
            char ch=s[i]>= 'A' && s[i]<='Z'? s[i]+32 : s[i];
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        } else if(s[i]>='0'&&s[i]<='9') d++;
    }
    printf("Vowels=%d Consonants=%d Digits=%d
", v, c, d);
    return 0;
      }
