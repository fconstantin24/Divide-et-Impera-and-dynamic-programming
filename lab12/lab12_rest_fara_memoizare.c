#include <stdlib.h>
#include <stdio.h>

int cate_tipuri_monede= 4;

int da_rest(int rest, int *monede, int tip_moneda)
{
    if ( tip_moneda >= cate_tipuri_monede -1 )
        return 1;
    int cate_moduri= 0;
    int val = monede [tip_moneda];
    int i, ce_ramane;

    for (i=0; i*val<= rest; i++)
    {
    ce_ramane= rest-i*val;
    cate_moduri += da_rest (ce_ramane, monede, tip_moneda +1);
    }
    return cate_moduri;
}

int main(){
    int n;
    printf("n=");
    scanf("%d",&n);
    int monede[4] = {25,10,5,1};

    printf("%d", da_rest(n,monede,0));

    return 0;
}
