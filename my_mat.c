#include <stdio.h>

int minimum(a,b){
    if(a > b){
        return b;
    }
    else{
        return a;
    }
}

// fix the matrix that all the values (mat[i][j]) in the matrix symbolizes the minimum route between i--j in the graph 
int fix_mat(int mat[10][10]){
    for(int k=0;k<10;k++){
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                mat[i][j] = minimum(mat[i][j],mat[i][k] + mat[k][j]);
                mat[j][i] = mat[i][j];
            }
        }
    }

    return 0;
}

// input the data graph to matrix [10][10] 
void A(int mat[10][10]){
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            int d;
            scanf("%d",&d);
            mat[i][j]=d;
        }
    }
    fix_mat(mat);
    return 0;
}

// Check if between between two vertexs exists route
void B(int mat[10][10]){
    int i,j;
    scanf("%d, %d", &i, &j);
    if(mat[i][j]>0){
        printf("Ture\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}

// Return the min route between two vertex
void C(int mat[10][10]){
    int i,j;
    scanf("%d, %d", &i, &j);
    if(mat[i][j]>0){
        printf("The minimum route from i to j is:%d",mat[i][j]);
    }
    else{
        printf("%d",-1);
    }
    return 0;
}
