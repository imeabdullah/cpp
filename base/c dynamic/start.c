#include<stdio.h>
#include<stdlib.h>

int main()
{
    //void* malloc(size_t datatype)
    int *p=(int*) malloc(10*sizeof(int));

    for(int i=0;i<10;i++)
        scanf("%d",(p+i));
    for(int i=0;i<10;i++)
        printf("%d ",*(p+i));
    printf("\n");

    // void* calloc(size_t itemn,size_t datatype)
    p=(int*) calloc(10,sizeof(int));
    for(int i=0;i<10;i++)
        scanf("%d",(p+i));
    for(int i=0;i<10;i++)
        printf("%d ",*(p+i));
    printf("\n");

    // void* realloc(void*,newsize)
    p=(int*) realloc(p,5*sizeof(int));
    for(int i=0;i<5;i++)
        scanf("%d",(p+i));
    for(int i=0;i<5;i++)
        printf("%d ",*(p+i));
    
    free(p);

}