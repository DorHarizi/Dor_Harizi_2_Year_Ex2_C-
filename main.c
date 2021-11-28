#include <stdio.h>
#include "my_mat.h"

int main()
{
    int mat[10][10];
    char ch ='x';
    while(ch!='D'){
        scanf("%c",&ch);

        if(ch=='A'){
             A(mat);
        }
        if(ch=='B'){
            B(mat);
        }
        if(ch=='C'){
            C(mat);
        }
    }
    return 0;
}