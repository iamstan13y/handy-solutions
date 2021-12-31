#include <stdio.h>
#include <string.h>

int main() {
    char s[60];
    gets(s);
    int n;
    n = strlen(s);
    for(int i = 0; i < n; i++){
        if(s[i] == '0'){
            printf("zero");
        }
        else if(s[i] == '1'){
            if(s[i+1] == '0'){
                printf("ten");
                i++;
            }
            else{
                printf("one");
            }
        }
        else if(s[i] == '2'){
            printf("two");
        }
        else if(s[i] == '3'){
            printf("three");
        }
        else if(s[i] == '4'){
            printf("four");
        }
        else if(s[i] == '5'){
            printf("five");
        }
        else if(s[i] == '6'){
            printf("six");
        }
        else if(s[i] == '7'){
            printf("seven");
        }
        else if(s[i] == '8'){
            printf("eight");
        }
        else if(s[i] == '9'){
            printf("nine");
        }
        else{
            printf("%c", s[i]);
     }
}
}
