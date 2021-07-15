#include <stdio.h>

int main(){

    char names[5][20], *temp;
    
    int i,j;

    for(i = 0; i < 5; i++)
    {
        scanf(" %s", &names[i]);
    }
    
    for( i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {          
            if (strcmp(names[j], names[j+1])>0)
            {
                //printf("%s\n", names[j]);
                temp=&names[j];
                names[j]=names[j+1];
                names[j+1]=*temp;
            } 
        }
       
    }

    for (i = 0; i <= 5; i++)
    {
        printf("%s\n", names[i]);
    }

    return 0;
}