#include<stdio.h>
#include<string.h>
#pragma pack(1)
struct car{char *name;
            char *engine;
            char *fuel_type;
            int fuel_cap;
            int seats;
            };
        int main(){ struct car c[2];
        c[0].name="auto rikshaw";
        c[0].engine="cng engine";
        c[0].fuel_type="lpg gas";
        c[1].name="school bus";
       c[1].engine="bs6 engine";
         c[1].fuel_type="diesel";

        int i;
        for(i=0;i<2;i++)
        {
        printf("enter the fuel capacity and seats of car%d ",i+1);
            scanf("%d %d",&c[i].fuel_cap,&c[i].seats);
        }
        for(i=0;i<2;i++)
        {
            printf("details of car%d\n",i+1);

            printf("name %s\n engine name %s\n fuel type %s\n seating capacity %d\n fuel capacity %d",c[i].name,c[i].engine,c[i].fuel_type,c[i].seats,c[i].fuel_cap);
        }
        return 0;
}

