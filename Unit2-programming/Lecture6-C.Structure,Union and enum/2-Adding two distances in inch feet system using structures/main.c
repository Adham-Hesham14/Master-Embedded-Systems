#include<stdio.h>

struct Sdistance
{
    float inch;
    float feet;

};

struct Sdistance readdistance(char order[]);
struct Sdistance adddistance(struct Sdistance distance1,struct Sdistance distance2);

int main()
{
    struct Sdistance distance1,distance2,res;
    distance1=readdistance("1st");
    distance2=readdistance("2nd");
    res=adddistance(distance1,distance2);
    printf("Sum of distances: %.3f'- %.3f\"",res.feet,res.inch);
    return 0;
}

struct Sdistance readdistance(char order[])
{
    struct Sdistance distance;
    printf("Enter information of %s distance:\n---------------------------\n",order);
    printf("Enter feet:");
    scanf("%f",&distance.feet);
    printf("Enter inch:");
    scanf("%f",&distance.inch);
    return distance;
}

struct Sdistance adddistance(struct Sdistance distance1,struct Sdistance distance2)
{
    struct Sdistance res;
    res.feet=distance1.feet+distance2.feet;
    res.inch=distance1.inch+distance2.inch;

    return res;
}
