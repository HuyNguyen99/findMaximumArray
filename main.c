#include <stdio.h>
#include <string.h>

void maximumArray(int array[],int kichthuoc, int max);
int main()
{
    int array[10]={2,4,3,7,1,3,6,9,2,1};
    maximumArray(array,10, 4);
    //printf("%d",array[3]);
    //this line is my line : KHoa
    return 0;
}
void maximumArray(int array[],int kichthuoc, int max)
{
    int i;
    int a;
    for(i=0;i<kichthuoc;i++)
    {
        a=array[i];
        if(a>max)
        {
            array[i]=0;
        }
        a=array[i];
        printf("%d",a);
    }
}
