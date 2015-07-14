#include <stdio.h>
#include <stdlib.h>

struct coord {
    int x;
    int y;
};

int enter_coord(struct coord *data) {
    scanf("%i %i", &data->x, &data->y);
    return 0;
    }


    //temp.x = x;
    //temp.y = y;
    //return temp;

//};

//}

int main()
{

    printf("How many coordinates do you have?");
    int count;
    if (1 != scanf("%d", &count)) {
        printf("Learn to count!\n");
        return 1;
    }

    struct coord *data = malloc(count * sizeof(struct coord));

    printf("Enter %d coordinate pairs\n", count);
    //int a;
   // int b;

  //  for(int n = 0; n < count; n++) {
  //  scanf("%i %i", &a, &b);
 //   data[n].x = a;
//    data[n].y = b;
 //   }

    for(int i = 0; i < count; i++) {
    enter_coord(&data[i]);
    }

    //data[0].x = 3;
   // data[0].y = 4;
 //   data[1].x = 5;
  //  data[1].y = 6;
 //   data[2].x = 8;
  //  data[2].y = 9;
 //   data[3].x = 13;
 //   data[3].y = 14;

    for(int z = 0; z< count; z++) {
    printf("\n\n%i, %i\n", data[z].x, data[z].y);

    }
    free(data);



   // origin.x = 5;
   // origin.y = 10;
 //   target.x = 100;
  //  target.y = 1000;
  //  printf("%i, %i\n", origin.x, origin.y);
  //  printf("%i, %i\n", target.x, target.y);
  //  printf("%zu\n", sizeof(struct coord));

}
