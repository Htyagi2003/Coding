#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>

typedef struct
{
    int x, y;
} P;

typedef struct
{
    char name[20];
    P loc;
} Ps;

typedef struct
{
    char num[20];
    P loc;
} V;

int manhattanDist(P p1, P p2)
{
    return abs(p1.x - p2.x) + abs(p1.y - p2.y);
}

V *findNearestVeh(Ps p, V *v, int m, int *assigned)
{
    int i;
    int minDist = INT_MAX;
    V *nearestV = NULL;

    for (i = 0; i < m; i++)
    {
        if (!assigned[i])
        {
            int dist = manhattanDist(p.loc, v[i].loc);

            if (dist < minDist || (dist == minDist && strcmp(v[i].num, nearestV->num) < 0))
            {
                minDist = dist;
                nearestV = &v[i];
            }
        }
    }

    assigned[nearestV - v] = 1;
    return nearestV;
}

int main()
{
    int n, m, i;
    scanf("%d %d", &n, &m);

    Ps pass[n];
    for (i = 0; i < n; i++)
    {
        scanf("%s %d %d", pass[i].name, &pass[i].loc.x, &pass[i].loc.y);
    }

    V vehs[m];
    for (i = 0; i < m; i++)
    {
        scanf("%s %d %d", vehs[i].num, &vehs[i].loc.x, &vehs[i].loc.y);
    }

    int assigned[m];
    memset(assigned, 0, sizeof(assigned));

    int totalDist = 0;
    for (i = 0; i < n; i++)
    {
        V *assignedV = findNearestVeh(pass[i], vehs, m, assigned);
        totalDist += manhattanDist(pass[i].loc, assignedV->loc);
    }

    printf("%d\n", totalDist);

    return 0;
}