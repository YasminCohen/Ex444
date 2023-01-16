#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "graph.h"

int main()
{
    char choice, c;
    int src, v;
    src = 0;
    v = src;
    p_node temp = NULL;
    p_node *head = &temp;
    while (scanf("%c", &choice) != EOF)
    {
        switch (choice)
        {
        case 'A':
        // if (choice == 'A')
        // {
            deleteGraph(head);
            scanf("%d", &v);
            *head = createGraph(v);

            scanf("%c", &c);

            while (scanf("%c", &c) != 0)
            {
                if (c == 'n')
                {
                    scanf("%d", &src);
                    addNode(head, src);
                }
                else
                {
                    break;
                }
            }
        break;
            // choice = c;
        //}
        // if (choice == 'B')
        // {
        case 'B':
            addNode_B(head);
        break;
        //    continue;
        //}
        // if (choice == 'D')
        // {
        case 'D':
            deleteNode(head);
        break;
        //     continue;
        // }
        // if (choice == 'S')
        // {
        case 'S':
            int start = -1, end = -1;
            scanf("%d %d", &start, &end);
            int dist = shortestPath(*head, start, end);
            printf("Dijsktra shortest path: %d \n", dist);
        break;
        //     continue;
        // }
       case 'T':
            TSP(*head);
        //     continue;
        // }
        break;
        }
    }
    deleteGraph(head);
}
