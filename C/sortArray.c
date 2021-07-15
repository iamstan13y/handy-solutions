
#include <stdio.h>

int main()
{
    int temp, x,y, Array[10];

    printf("Enter The Numbers:\n");
    for(x=0;x<10;x++){
        scanf("%d", &Array[x]);
    }

    for (x=0;x<10;x++){

        for(y=x+1;y<10;y++){
            if (Array[x]>Array[y]){
                Array[x]=Array[x]+Array[y];
                Array[y]=Array[x]-Array[y];
                Array[x]=Array[x]-Array[y];
            }
        }
    }

    printf("The Greatest Is: %d", Array[9]);
    return 0;
}