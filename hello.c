#include "stdio.h"


static void in_volk(){
    printf("entry %s\n",__FUNCTION__);

    return;
}


int main(){
    int i=0;
    int count=50;
    int total=0;
    for (int i = 0; i < count; i++)
    {
        total+=i;
    }
    
    in_volk();
    printf("hellword! total:%d\n",total);
    
    return 1;
}