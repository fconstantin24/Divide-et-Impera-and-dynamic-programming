//PD cu memoizare

#include <stdlib.h>
#include <stdio.h>

int cate_t_monede = 4;

int da_rest(int rest, int*monede, int tip_moneda, int aux[100][4]){

    if (aux[rest][tip_moneda]>0)
        return aux[rest][tip_moneda];

    if (tip_moneda >= cate_t_monede-1)
        return 1;

    int cate_moduri= 0;
    int i, ce_ramane, val=monede[tip_moneda];

    for (i=0; i*val<= rest; i++)
    {
    ce_ramane= rest-i*val;
    cate_moduri += da_rest(ce_ramane, monede, tip_moneda+1,aux);
    }

    aux[rest][tip_moneda]=cate_moduri;

    return cate_moduri;
}

int main(){
    int n,i,j;
    int monede[4] = {25,10,5,1};
    int aux[100][4] ={0};

    printf("n=");
    scanf("%d", &n);


    printf("%d", da_rest(n,monede,0,aux));

    return 0;
}

